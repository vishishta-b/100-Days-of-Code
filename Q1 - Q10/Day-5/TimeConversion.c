//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

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
