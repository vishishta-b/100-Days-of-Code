// Write a function that accepts a structure as parameter and prints its members.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printStudent(s);

    return 0;
}
