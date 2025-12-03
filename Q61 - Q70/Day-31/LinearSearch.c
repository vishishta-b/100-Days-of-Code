// Search for an element in an array using linear search.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main()
{
    int n, i, key, idx = -1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    for (i = 0; i < n; i++)

    {
        if (a[i] == key)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("Found at index %d\n", idx);
    }
    return 0;
}
