// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    int val;
    scanf("%d", &val);  /* 0=SUCCESS, 1=FAILURE, 2=TIMEOUT */

    enum Status s = (enum Status)val;

    if (s == SUCCESS) {
        printf("Operation successful.\n");
    } else if (s == FAILURE) {
        printf("Operation failed.\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out.\n");
    } else {
        printf("Unknown status.\n");
    }

    return 0;
}
