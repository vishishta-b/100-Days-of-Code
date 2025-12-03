/*
Write a program to take a string s as input.
Find the length of the longest substring without repeating characters.
Print the length as output.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    char s[10000];
    int i;
    int last[256];
    int start = 0;
    int best = 0;

    for (i = 0; i < 256; i++) {
        last[i] = -1;
    }

    scanf(" %[^\n]", s);

    i = 0;
    while (s[i] != '\0') {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            start = last[c] + 1;
        }
        last[c] = i;

        int len = i - start + 1;
        if (len > best) {
            best = len;
        }

        i++;
    }

    printf("%d\n", best);
    return 0;
}
