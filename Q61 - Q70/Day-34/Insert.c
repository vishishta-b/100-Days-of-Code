// Insert an element in an array at a given position.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, pos, val;
    scanf("%d", &n);
    int a[n + 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d %d", &pos, &val);
    }
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
        a[pos] = val;
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
