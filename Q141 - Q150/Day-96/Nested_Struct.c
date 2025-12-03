// Create Employee structure with nested Date structure for joining date and print details.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    struct Date {
        int day;
        int month;
        int year;
    };

    struct Employee {
        char name[100];
        int id;
        struct Date joining;
    };

    struct Employee e;

    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
