// Reverse each word in a sentence without changing the word order.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0, start = 0;
    scanf(" %[^\n]", s);
    while (1)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            int l = start;
            int r = i - 1;
            while (l < r)
            {
                char t = s[l];
                s[l] = s[r];
                s[r] = t;
                l++;
                r--;
            }
            if (s[i] == '\0')
            {
                break;
            }
            start = i + 1;
        }
        i++;
    }
    printf("%s\n", s);
    return 0;
}
