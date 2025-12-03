/*
Write a program to take a string input.
Change it to sentence case:
- First character of each sentence should be uppercase.
- All other letters should be lowercase.
Assume sentences end with '.', '!' or '?'.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    char s[5000];
    int i = 0;
    int start = 1;  /* start of a sentence */

    scanf(" %[^\n]", s);

    while (s[i] != '\0') {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;  /* make lowercase by default */
        }

        if (start) {
            if (c >= 'a' && c <= 'z') {
                c = c - 32;  /* first letter of sentence uppercase */
                start = 0;
            }
        }

        s[i] = c;

        if (c == '.' || c == '!' || c == '?') {
            start = 1;
        }

        i++;
    }

    printf("%s\n", s);
    return 0;
}
