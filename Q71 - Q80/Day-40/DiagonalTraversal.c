// Perform diagonal traversal of a matrix.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int r, c, i, j, s;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (s = 0; s <= r + c - 2; s++)
    {
        if (s % 2 == 0)
        {
            for (i = s; i >= 0; i--)
            {
                j = s - i;
                if (i < r && j < c)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for (j = s; j >= 0; j--)
            {
                i = s - j;
                if (i < r && j < c)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }
    return 0;
}
