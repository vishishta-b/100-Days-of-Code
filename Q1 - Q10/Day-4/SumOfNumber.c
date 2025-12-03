//Write a program to find and display the sum of the first n natural numbers.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("Sum=%d\n", sum);
    return 0;
}
