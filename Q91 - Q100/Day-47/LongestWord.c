// Find the longest word in a sentence.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0, bestStart = 0, bestLen = 0, curStart = 0, curLen = 0;

    scanf(" %[^\n]", s);

    while (1)
    {
        char c = s[i];
        if (c == ' ' || c == '\0')
        {
            if (curLen > bestLen)
            {
                bestLen = curLen;
                bestStart = curStart;
            }
            if (c == '\0')
            {
                break;
            }
            curLen = 0;
            curStart = i + 1;
        }
        else
        {
            curLen++;
        }
        i++;
    }
    for (i = 0; i < bestLen; i++)
    {
        printf("%c", s[bestStart + i]);
    }
    printf("\n");
    return 0;
}
