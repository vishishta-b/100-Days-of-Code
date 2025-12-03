/*
Write a program to take two strings s and t as inputs (assume all characters are lowercase).
Determine if s and t are valid anagrams, meaning they contain the same characters
with the same frequencies.
Print "Anagram" if they are, otherwise "Not Anagram".
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[10000], t[10000];
    int i;
    int f1[26] = {0}, f2[26] = {0};
    int ls = 0, lt = 0;

    scanf(" %[^\n]", s);
    scanf(" %[^\n]", t);

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            f1[s[i] - 'a']++;
            ls++;
        }
        i++;
    }

    i = 0;
    while (t[i] != '\0')
    {
        if (t[i] >= 'a' && t[i] <= 'z')
        {
            f2[t[i] - 'a']++;
            lt++;
        }
        i++;
    }

    if (ls != lt)
    {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
