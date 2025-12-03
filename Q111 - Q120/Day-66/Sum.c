/*
Write a program to take an integer array nums (only positive integers) and an integer target.
Find two distinct indices i and j such that nums[i] + nums[j] = target.
Assume at most one solution exists.
Print the two indices separated by a space.
If no solution exists, print "-1 -1".
*/
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main() {
    int n, i, j, target;
    scanf("%d", &n);

    int nums[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
