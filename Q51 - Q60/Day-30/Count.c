// Count even and odd numbers in an array.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
