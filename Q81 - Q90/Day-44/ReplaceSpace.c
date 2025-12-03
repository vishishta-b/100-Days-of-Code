// Replace spaces with hyphens in a string.
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
        if (s[i] == ' ')
        {
            s[i] = '-';
        }
        i++;
    }
    printf("%s\n", s);
    return 0;
}
