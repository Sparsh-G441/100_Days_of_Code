//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int findHCF(int a, int b) 
{
    while (b != 0) 
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}


int findLCM(int a, int b) 
{
    return (a / findHCF(a, b)) * b;
}

int main() 
{
    int n1, n2;
    
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &n1, &n2);

    if (n1 <= 0 || n2 <= 0) 
    {
        printf("Please enter positive integers.\n");
        return 0;
    }

    int lcm = findLCM(n1, n2);

    printf("LCM: %d\n", lcm);

    return 0;
}