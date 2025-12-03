// Write a program to find the sum of digits of a number.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, sum = 0, digit;
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}
