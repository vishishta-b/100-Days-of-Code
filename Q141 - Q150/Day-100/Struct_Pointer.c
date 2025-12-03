//Use pointer to struct to modify and display data using -> operator.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;          /* normal struct variable */
    struct Student *p = &s;    /* pointer to struct */

    /* Take input using pointer and -> */
    scanf("%s", p->name);
    scanf("%d", &p->roll_no);
    scanf("%f", &p->marks);

    /* Modify something via pointer (optional, just to show update) */
    if (p->marks < 0) {
        p->marks = 0;  /* example correction */
    }

    /* Display using -> */
    printf("Name: %s\n", p->name);
    printf("Roll No: %d\n", p->roll_no);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
