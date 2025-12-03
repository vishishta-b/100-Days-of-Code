// Count vowels and consonants in a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0;
    int vowels = 0, consonants = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }
        if (c >= 'a' && c <= 'z')
        {

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
