// Index of first element >= x in sorted array
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() 
{
    int n, i, x;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r) 
    {
        int mid = l + (r - l) / 2;
        if (a[mid] >= x) 
        {
            ans = mid;
            r = mid - 1;   /* try to find earlier one */
        } else 
        {
            l = mid + 1;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}
