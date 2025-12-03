// Store details of 5 students in an array of structures and print all.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    struct Student {
        char name[100];
        int roll_no;
        float marks;
    };

    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < 5; i++) {
        printf("Student %d: Name=%s, Roll=%d, Marks=%.2f\n",
               i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
