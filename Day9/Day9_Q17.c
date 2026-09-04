//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);

    if (b*b - 4*a*c > 0)
    {
        printf("Roots are real and different: %d, %d ", c,a);
    }
    else if (b*b - 4*a*c == 0)
    {
        printf("Roots are real and equal: %d",a);
    }
    else
    {
        printf("Roots are complex");
    }

    return 0;
}