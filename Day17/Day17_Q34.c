//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int main()
{
    int n;
    int condition = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("Not Prime");
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            condition = 0;
        }
    }

    if (condition == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}