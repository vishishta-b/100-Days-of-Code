// Find the maximum and minimum element in an array.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, mx, mn;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mx = mn = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
        if (a[i] < mn)
        {
            mn = a[i];
        }
    }
    printf("Max=%d, Min=%d\n", mx, mn);
    return 0;
}
