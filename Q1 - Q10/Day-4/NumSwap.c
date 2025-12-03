//Write a program to swap two numbers using a third variable.
//Name: Vishishta Biswas
//SAP ID: 590025579

#include <stdio.h>
int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap: a=%d, b=%d\n", a, b);
    return 0;
}
