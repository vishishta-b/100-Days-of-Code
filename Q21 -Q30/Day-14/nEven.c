//Write a program to print the sum of the first n even numbers.
//Name: Vishishta Biswas
//SAP ID: 590025579 

#include <stdio.h>

int main() 
{
    int n, i;
    int product = 1;
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) 
    {
        product = product * i;
    }

    printf("%d\n", product);
    return 0;
}
