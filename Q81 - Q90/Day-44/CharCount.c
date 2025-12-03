// Count spaces, digits, and special characters in a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            spaces++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digits++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
        }
        else
        {
            special++;
        }
        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
