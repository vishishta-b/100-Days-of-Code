// Find the sum of each row of a matrix and store it in an array.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)
    {
        int s = 0;
        for (j = 0; j < c; j++)
            s += a[i][j];
        printf("%d ", s);
    }
    return 0;
}
