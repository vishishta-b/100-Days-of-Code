// First and last occurrence of target in sorted array
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    int n, i, target;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    int l = 0, r = n - 1;
    int first = -1, last = -1;

    /* find first occurrence */
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == target)
        {
            first = mid;
            r = mid - 1; /* go left */
        }
        else if (a[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    // find last occurrence
    l = 0;
    r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == target)
        {
            last = mid;
            l = mid + 1; /* go right */
        }
        else if (a[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (first == -1)
    {
        printf("-1 -1\n");
    }
    else
    {
        printf("%d %d\n", first, last);
    }
    return 0;
}
