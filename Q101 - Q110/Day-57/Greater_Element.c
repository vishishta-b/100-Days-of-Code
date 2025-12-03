// Previous greater element to the left for each element
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int a[n], ans[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        int prev = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[i])
            {
                prev = a[j];
                break;
            }
        }
        ans[i] = prev;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", ans[i]);
        if (i != n - 1)
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
