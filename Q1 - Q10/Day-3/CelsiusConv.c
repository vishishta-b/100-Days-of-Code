//Write a program to convert temperature from Celsius to Fahrenheit.
//Name: Vishishta Biswas
//SAP ID: 590025579

#include <stdio.h>
int main() 
{
    float c;
    scanf("%f", &c);
    float f = (c * 9/5) + 32;
    printf("Fahrenheit=%.2f\n", f);
    return 0;
}
