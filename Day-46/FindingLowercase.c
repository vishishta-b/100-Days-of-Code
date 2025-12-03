// Find the first repeating lowercase alphabet in a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int seen[26] = {0};
    int i = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int idx = s[i] - 'a';
            if (seen[idx] == 1)
            {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[idx] = 1;
        }
        i++;
    }
    printf("-1\n");
    return 0;
}
