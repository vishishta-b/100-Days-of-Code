// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    int choice;
    int a, b;

    scanf("%d %d", &a, &b);
    scanf("%d", &choice);  /* 1=ADD, 2=SUBTRACT, 3=MULTIPLY */

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
