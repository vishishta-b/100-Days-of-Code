// Store employee data in a binary file using fwrite() and read using fread().
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    int n, i;

    scanf("%d", &n);

    struct Employee e[n];
    for (i = 0; i < n; i++) {
        scanf("%s", e[i].name);
        scanf("%d", &e[i].id);
        scanf("%f", &e[i].salary);
    }

    fp = fopen("emp.bin", "wb");
    if (fp == NULL) {
        printf("Error opening emp.bin for writing.\n");
        return 0;
    }
    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    if (fp == NULL) {
        printf("Error opening emp.bin for reading.\n");
        return 0;
    }

    struct Employee tmp;
    printf("Employees from file:\n");
    while (fread(&tmp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               tmp.name, tmp.id, tmp.salary);
    }

    fclose(fp);
    return 0;
}
