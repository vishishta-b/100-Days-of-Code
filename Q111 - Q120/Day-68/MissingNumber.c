/*
Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    long long expected = (long long)n * (n + 1) / 2;
    long long sum = 0;

    for (i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    long long missing = expected - sum;
    printf("%lld\n", missing);
    return 0;
}
