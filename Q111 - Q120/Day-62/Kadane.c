/*
Write a program to take an integer array arr as input.
Find the maximum sum of any contiguous subarray using Kadane's algorithm.
Print the maximum sum as output. If all elements are negative,
print the largest (least negative) element.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long current = arr[0];
    long long best = arr[0];

    for (i = 1; i < n; i++)
    {
        if (current + arr[i] < arr[i])
        {
            current = arr[i];
        }
        else
        {
            current = current + arr[i];
        }
        if (current > best)
        {
            best = current;
        }
    }

    printf("%lld\n", best);
    return 0;
}
