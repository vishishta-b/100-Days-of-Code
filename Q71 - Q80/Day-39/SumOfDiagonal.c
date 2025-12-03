// Find the sum of main diagonal elements for a square matrix.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, m, i, j, s = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n && i < m; i++)
        s += a[i][i];
    printf("%d\n", s);
    return 0;
}
