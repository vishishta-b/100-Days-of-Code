/*
Write a program that reads text from input.txt, converts all lowercase
letters to uppercase, and writes the result to output.txt.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    FILE *in, *out;
    int ch;

    /* Open input.txt for reading */
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt\n");
        return 0;
    }

    /* Open output.txt for writing */
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output.txt\n");
        fclose(in);
        return 0;
    }

    /* Read characters, convert to uppercase if needed, write to output */
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   /* convert to uppercase */
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion complete.\n");
    return 0;
}
