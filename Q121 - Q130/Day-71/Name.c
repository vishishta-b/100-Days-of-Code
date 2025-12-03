// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }

    scanf(" %[^\n]", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);
    printf("Data written to info.txt successfully.\n");

    return 0;
}
