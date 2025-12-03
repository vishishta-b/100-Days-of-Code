// Print all sub-strings of a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main() 
{
    char s[1000];
    int len = 0, i, j, firstPrinted = 0;
    scanf("%s", s);
    while (s[len] != '\0') 
    {
        len++;
    }
    for (i = 0; i < len; i++) 
    {
        for (j = i; j < len; j++) 
        {
            int k;
            if (firstPrinted == 1) 
            {
                printf(",");
            }
            for (k = i; k <= j; k++) 
            {
                printf("%c", s[k]);
            }
            firstPrinted = 1;
        }
    }
    printf("\n");
    return 0;
}
