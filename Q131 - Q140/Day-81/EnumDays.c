// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    int i;
    for (i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
