// Majority element (appears > n/2 times) 
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>
int main() 
{
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int candidate = 0;
    int count = 0;

    /* Boyer-Moore to find candidate */
    for (i = 0; i < n; i++) 
    {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate) 
        {
            count++;
        } else {
            count--;
        }
    }

    /* verify */
    count = 0;
    for (i = 0; i < n; i++) 
    {
        if (a[i] == candidate) 
        {
            count++;
        }
    }

    if (count > n / 2) 
    {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
