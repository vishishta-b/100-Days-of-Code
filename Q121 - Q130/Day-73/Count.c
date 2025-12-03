/*
Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces
or newlines.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;

    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
