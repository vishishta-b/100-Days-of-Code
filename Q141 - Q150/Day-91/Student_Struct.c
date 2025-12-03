// Define a structure Student with name, roll_no, and marks,then read and print one student's data.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    struct Student {
        char name[100];
        int roll_no;
        float marks;
    };

    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
