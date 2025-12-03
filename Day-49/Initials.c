// Print the initials of a name.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0;
    int printedFirst = 0;
    scanf(" %[^\n]", s);
    if (s[0] != '\0' && s[0] != ' ')
    {
        printf("%c.", s[0]);
        printedFirst = 1;
    }
    while (s[i] != '\0')
    {
        if (s[i] == ' ' && s[i + 1] != '\0' && s[i + 1] != ' ')
        {
            printf("%c.", s[i + 1]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
