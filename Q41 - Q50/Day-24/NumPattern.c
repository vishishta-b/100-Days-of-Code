/*
Q48 (Nested Loops without Arrays/Strings)
Pattern:
1
12
123
1234
12345
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
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
