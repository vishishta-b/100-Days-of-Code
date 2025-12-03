// Return a structure containing top student's details from a function.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int bestIndex = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[bestIndex].marks) {
            bestIndex = i;
        }
    }
    return s[bestIndex];
}

int main() {
    int n, i;
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("Top Student: Name=%s, Roll=%d, Marks=%.2f\n",
           top.name, top.roll_no, top.marks);

    return 0;
}
