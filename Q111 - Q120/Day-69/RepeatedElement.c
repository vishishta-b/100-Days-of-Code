/*
Write a program to take an integer array as input.
Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.
(We assume the array size is n and values are in range [0..n-1].)
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    int n, i, ans = -1;
    scanf("%d", &n);

    int seen[n];
    for (i = 0; i < n; i++) {
        seen[i] = 0;
    }

    for (i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x >= 0 && x < n) {
            if (seen[x] == 1 && ans == -1) {
                ans = x;
            } else {
                seen[x] = 1;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
