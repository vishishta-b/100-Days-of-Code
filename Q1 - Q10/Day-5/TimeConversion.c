//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
//Name: Vishishta Biswas
//SAP ID: 590025579 

#include <stdio.h>
int main() 
{
    int sec;
    scanf("%d", &sec);
    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
