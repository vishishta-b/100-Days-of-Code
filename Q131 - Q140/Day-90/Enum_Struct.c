// Define a struct with enum Gender and print person's gender.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[100];
        enum Gender gender;
    };

    struct Person p;
    char gch;

    scanf("%s", p.name);
    scanf(" %c", &gch);  /* M/F/O */

    if (gch == 'M' || gch == 'm') {
        p.gender = MALE;
    } else if (gch == 'F' || gch == 'f') {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    printf("Name: %s\n", p.name);
    if (p.gender == MALE) {
        printf("Gender: Male\n");
    } else if (p.gender == FEMALE) {
        printf("Gender: Female\n");
    } else {
        printf("Gender: Other\n");
    }

    return 0;
}
