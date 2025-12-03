//Take two structs as input and check if they are identical.

// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%f", &s1.marks);

    scanf("%s", s2.name);
    scanf("%d", &s2.roll_no);
    scanf("%f", &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        printf("Identical\n");
    } else {
        printf("Not Identical\n");
    }

    return 0;
}
