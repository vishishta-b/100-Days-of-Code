/*
Write a program to take an integer array arr and an integer k as inputs.
Find the kth smallest element in the array (1-based k).
Print the kth smallest element as output.
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    /* Simple selection sort */
    for (i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
        }
    }

    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    } else {
        printf("-1\n");
    }

    return 0;
}
