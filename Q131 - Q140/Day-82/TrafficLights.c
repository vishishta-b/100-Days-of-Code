/*
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop',
'Wait', or 'Go' based on its value.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    enum Light { RED, YELLOW, GREEN };
    int val;
    scanf("%d", &val);  /* 0=RED, 1=YELLOW, 2=GREEN */

    enum Light signal = (enum Light)val;

    if (signal == RED) {
        printf("Stop\n");
    } else if (signal == YELLOW) {
        printf("Wait\n");
    } else if (signal == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid signal\n");
    }

    return 0;
}
