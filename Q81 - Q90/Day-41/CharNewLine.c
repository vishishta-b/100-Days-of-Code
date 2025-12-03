// Print each character of a string on a new line.
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
        printf("%c\n", s[i]);
        i++;
    }
    return 0;
}
