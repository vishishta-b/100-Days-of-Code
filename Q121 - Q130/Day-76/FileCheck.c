/*
Ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    char filename[100];
    FILE *fp;
    int ch;

    /* Read filename from user */
    scanf("%s", filename);

    /* Try to open file in read mode */
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exist.\n");
        return 0;
    }

    /* Read and print contents */
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
