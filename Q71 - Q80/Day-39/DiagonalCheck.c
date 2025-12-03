// Check if the elements on the diagonal of a matrix are distinct.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, m, i, j;
    int distinct = 1;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n && i < m; i++)
    {
        for (j = i + 1; j < n && j < m; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
            }
        }
    }
    if (distinct == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
