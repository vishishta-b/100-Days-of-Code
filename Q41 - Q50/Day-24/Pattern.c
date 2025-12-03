// Write a program to print the following pattern:
/*
*
**
***
****
*****
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main() 
{
    int i, j;
    for(i = 1; i <= 5; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
