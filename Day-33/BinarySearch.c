// Search in a sorted array using binary search.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, key, l = 0, r, mid, ans = -1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    r = n - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            break;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (ans == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", ans);
    return 0;
}
