/*
Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using
fgetc() and fputc().
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    char srcName[100], destName[100];
    FILE *src, *dest;
    int ch;

    scanf("%s", srcName);
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 0;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(src);
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
