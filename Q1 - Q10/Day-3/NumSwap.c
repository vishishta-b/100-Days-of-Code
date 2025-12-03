//Write a program to swap two numbers using a third variable.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

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
