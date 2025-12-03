// Check if one string is a rotation of another.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    int la = 0, lb = 0, i, j, k, ok;
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    i = 0;
    while (a[i] != '\0')
    {
        la++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        lb++;
        i++;
    }
    if (la != lb)
    {
        printf("Not rotation\n");
        return 0;
    }
    for (k = 0; k < la; k++)
    {
        ok = 1;
        for (j = 0; j < la; j++)
        {
            char ca = a[(k + j) % la];
            char cb = b[j];
            if (ca != cb)
            {
                ok = 0;
                break;
            }
        }
        if (ok == 1)
        {
            printf("Rotation\n");
            return 0;
        }
    }
    printf("Not rotation\n");
    return 0;
}
