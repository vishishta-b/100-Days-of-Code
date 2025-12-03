//Use malloc() to allocate structure memory dynamically and print details.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    scanf("%s", s->name);
    scanf("%d", &s->roll_no);
    scanf("%f", &s->marks);

    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}
