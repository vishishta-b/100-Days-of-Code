// Create an enum for months and print how many days each month has.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Month {
        JAN = 1, FEB, MAR, APR, MAY, JUN,
        JUL, AUG, SEP, OCT, NOV, DEC
    };

    int m;
    scanf("%d", &m);  /* 1-12 */

    int days;
    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
            days = 31; break;
        case APR: case JUN: case SEP: case NOV:
            days = 30; break;
        case FEB:
            days = 28; break;
        default:
            printf("Invalid month\n");
            return 0;
    }

    printf("Days = %d\n", days);
    return 0;
}
