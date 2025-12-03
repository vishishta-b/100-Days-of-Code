// Max sum of all subarrays of size k 
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() 
{
    int n, k, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) 
    {
        printf("0\n");
        return 0;
    }

    long long sum = 0;
    for (i = 0; i < k; i++) 
    {
        sum += a[i];
    }

    long long best = sum;

    for (i = k; i < n; i++) 
    {
        sum += a[i];
        sum -= a[i - k];
        if (sum > best) 
        {
            best = sum;
        }
    }
    printf("%lld\n", best);
    return 0;
}
