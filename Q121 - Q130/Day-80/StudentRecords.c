// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;

    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening students.txt for writing.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        char name[100];
        int roll;
        float marks;

        scanf("%s", name);
        scanf("%d", &roll);
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening students.txt for reading.\n");
        return 0;
    }

    printf("Student Records:\n");
    while (1) {
        char name[100];
        int roll;
        float marks;

        if (fscanf(fp, "%s %d %f", name, &roll, &marks) != 3) {
            break;
        }

        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
