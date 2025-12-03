//Write a program to calculate the area and circumference of a circle given its radius.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
#define PI 3.14159

int main() 
{
    float r;
    scanf("%f", &r);
    float area = PI * r * r;
    float circ = 2 * PI * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    return 0;
}
