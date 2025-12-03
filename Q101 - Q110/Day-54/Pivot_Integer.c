// Find x such that 1+...+x = x+...+n, else -1 
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main() 
{
    long long n;
    scanf("%lld", &n);
    long long total = n * (n + 1) / 2;  /* sum 1..n */
    long long x;
    for (x = 1; x <= n; x++) 
    {
        long long left = x * (x + 1) / 2;                 /* 1..x */
        long long beforeX = (x - 1) * x / 2;              /* 1..x-1 */
        long long right = total - beforeX;                /* x..n */
        if (left == right) 
        {
            printf("%lld\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
