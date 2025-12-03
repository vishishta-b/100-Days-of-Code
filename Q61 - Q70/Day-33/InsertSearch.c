// Insert an element in a sorted array at the appropriate position.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, x, pos = 0;
    scanf("%d", &n);
    int a[n + 1];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    while (pos < n && a[pos] < x)
        pos++;
    for (i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = x;
    for (i = 0; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}
