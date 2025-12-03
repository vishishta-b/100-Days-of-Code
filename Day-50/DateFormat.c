// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char d[20];
    int i = 0;
    scanf("%s", d);
    while (d[i] != '\0' && d[i] != '/')
    {
        printf("%c", d[i]);
        i++;
    }
    if (d[i] == '/')
    {
        i++;
    }
    if (d[i] == '0' && d[i + 1] == '4')
    {
        i += 2;
    }
    if (d[i] == '/')
    {
        i++;
    }
    printf("-Apr-");
    while (d[i] != '\0')
    {
        printf("%c", d[i]);
        i++;
    }
    printf("\n");
    return 0;
}
