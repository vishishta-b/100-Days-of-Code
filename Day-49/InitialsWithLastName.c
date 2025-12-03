// Print initials of a name with the surname displayed in full.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0, lastStart = -1;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
        {
            lastStart = i;
        }
        i++;
    }
    i = 0;
    if (s[0] != '\0' && s[0] != ' ')
    {
        if (0 != lastStart)
        {
            printf("%c.", s[0]);
        }
    }
    while (s[i] != '\0')
    {
        if (s[i] == ' ' && s[i + 1] != '\0' && s[i + 1] != ' ')
        {
            if (i + 1 != lastStart)
            {
                printf("%c.", s[i + 1]);
            }
        }
        i++;
    }
    if (lastStart != -1)
    {
        printf(" ");
        i = lastStart;
        while (s[i] != '\0' && s[i] != ' ')
        {
            printf("%c", s[i]);
            i++;
        }
    }
    printf("\n");
    return 0;
}
