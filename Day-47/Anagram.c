// Check if two strings are anagrams of each other.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    int i, fa[26] = {0}, fb[26] = {0}, lena = 0, lenb = 0;
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    i = 0;
    while (a[i] != '\0')
    {
        char c = a[i];
        if (c >= 'a' && c <= 'z')
        {
            fa[c - 'a']++;
            lena++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            fa[c - 'A']++;
            lena++;
        }
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        char c = b[i];
        if (c >= 'a' && c <= 'z')
        {
            fb[c - 'a']++;
            lenb++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            fb[c - 'A']++;
            lenb++;
        }
        i++;
    }
    if (lena != lenb)
    {
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; i < 26; i++)
    {
        if (fa[i] != fb[i])
        {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
