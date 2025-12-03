// Write a program to input a character and check whether it is a vowel or consonant using if–else.
//Name: Vishishta Biswas
//SAP ID: 590025579 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("Not an alphabet\n");
    }
    return 0;
}
