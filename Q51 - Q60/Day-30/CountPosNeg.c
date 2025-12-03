// Count positive, negative, and zero elements in an array.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, pos = 0, neg = 0, zer = 0, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zer);
    return 0;
}
