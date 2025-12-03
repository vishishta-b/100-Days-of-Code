// Convert a lowercase string to uppercase without using built-in functions.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
    printf("%s\n", s);
    return 0;
}
