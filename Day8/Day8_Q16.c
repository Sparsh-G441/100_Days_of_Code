//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>

int main()
{
    int a,b,c, max; 

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    
    printf("Largest is %d", max);

    return 0;

}