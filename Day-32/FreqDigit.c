// Find the digit that occurs the most times in an integer number.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    long long n;
    int cnt[10] = {0}, d, best = 0, i, ans = 0;
    scanf("%lld", &n);
    if (n == 0)
        cnt[0] = 1;
    while (n > 0)
    {
        d = n % 10;
        cnt[d]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (cnt[i] > best)
        {
            best = cnt[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
