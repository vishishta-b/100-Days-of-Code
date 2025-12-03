// Pivot index where left sum == right sum 
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() 
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    long long total = 0;
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        total += a[i];
    }
    long long left = 0;
    for (i = 0; i < n; i++) 
    {
        long long right = total - left - a[i];
        if (left == right) 
        {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}
