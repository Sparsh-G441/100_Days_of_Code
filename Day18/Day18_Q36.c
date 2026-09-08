//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int HCF(int a, int b)
{
    while (b != 0) 
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() 
{
    int n1, n2;

    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &n1, &n2); 

    int hcf = HCF(n1, n2);

    printf("HCF(GCD) = %d\n", hcf);

    return 0;
}
