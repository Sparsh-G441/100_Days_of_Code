//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>

int main()
{
    float l, b, a, p;

    printf("Enter length and breadth with a space: ");
    scanf("%f %f", &l, &b);
    a = l*b;
    p = 2*(l+b);
    
    printf("Area=%.2f, Perimeter=%.2f", a,p);
    return 0;
    
}