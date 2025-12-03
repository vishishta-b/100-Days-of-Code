// Remove all vowels from a string.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char s[1000], out[1000];
    int i = 0, j = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        char c = s[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        {
            out[j] = c;
            j++;
        }
        i++;
    }
    out[j] = '\0';
    printf("%s\n", out);
    return 0;
}
