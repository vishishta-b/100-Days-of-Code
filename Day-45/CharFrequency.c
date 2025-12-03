// Count frequency of a given character in a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    char ch;
    int i = 0, count = 0;
    scanf(" %[^\n]", s);
    scanf(" %c", &ch);
    while (s[i] != '\0')
    {
        if (s[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}
