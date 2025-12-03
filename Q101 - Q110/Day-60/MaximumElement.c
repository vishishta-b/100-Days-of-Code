// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, k, i, j;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        int mx = a[i];
        for (j = i + 1; j < i + k; j++)
        {
            if (a[j] > mx)
            {
                mx = a[j];
            }
        }
        printf("%d", mx);
        if (i != n - k)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
