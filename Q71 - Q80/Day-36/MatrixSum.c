// Find the sum of all elements in a matrix.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int r, c, i, j, s = 0;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            s += a[i][j];
        }
    printf("%d\n", s);
    return 0;
}
