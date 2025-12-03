// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    int val;
    scanf("%d", &val);  /* 0=ADMIN, 1=USER, 2=GUEST */

    enum Role r = (enum Role)val;

    if (r == ADMIN) {
        printf("Welcome, Admin.\n");
    } else if (r == USER) {
        printf("Welcome, User.\n");
    } else if (r == GUEST) {
        printf("Welcome, Guest.\n");
    } else {
        printf("Unknown role.\n");
    }

    return 0;
}
