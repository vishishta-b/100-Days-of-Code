// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
// Name: Vishishta Biswas
// SAP ID: 590025579

#include <stdio.h>

int main()
{
    FILE *fp;
    int x;
    long long sum = 0;
    int count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening numbers.txt\n");
        return 0;
    }

    while (fscanf(fp, "%d", &x) == 1)
    {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found.\n");
    }
    else
    {
        double avg = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
