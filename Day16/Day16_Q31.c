//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main()
{
    int n, power = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (power <= n / 2)
    {
        power *= 2;
    }

    while (power > 0)
    {
        if (n >= power)
        {
            printf("1");
            n -= power;
        }
        else
        {
            printf("0");
        }
        power /= 2; 
    }

    return 0;
}