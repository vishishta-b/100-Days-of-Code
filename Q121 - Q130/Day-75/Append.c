// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    char filename[100];
    char line[500];
    FILE *fp;

    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    scanf(" %[^\n]", line);

    fprintf(fp, "%s\n", line);

    fclose(fp);
    printf("Line appended successfully.\n");

    return 0;
}
