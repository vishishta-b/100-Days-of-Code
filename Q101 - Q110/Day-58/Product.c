// answer[i] = product of all elements except a[i] 
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main() 
{
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    long long prefix[n], suffix[n];

    for (i = 0; i < n; i++) 
    {
        if (i == 0) {
            prefix[i] = a[i];
        } else {
            prefix[i] = prefix[i - 1] * a[i];
        }
    }

    for (i = n - 1; i >= 0; i--) 
    {
        if (i == n - 1) {
            suffix[i] = a[i];
        } else {
            suffix[i] = suffix[i + 1] * a[i];
        }
    }

    for (i = 0; i < n; i++) 
    {
        long long left = (i == 0) ? 1 : prefix[i - 1];
        long long right = (i == n - 1) ? 1 : suffix[i + 1];
        long long prod = left * right;
        printf("%lld ", prod);
    }
    printf("\n");
    return 0;
}
