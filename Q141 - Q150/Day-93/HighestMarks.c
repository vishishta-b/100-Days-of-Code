// Find and print the student with the highest marks.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    struct Student {
        char name[100];
        int roll_no;
        float marks;
    };

    struct Student s[n];
    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    int bestIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[bestIndex].marks) {
            bestIndex = i;
        }
    }

    printf("Top Student: Name=%s, Roll=%d, Marks=%.2f\n",
           s[bestIndex].name, s[bestIndex].roll_no, s[bestIndex].marks);

    return 0;
}
