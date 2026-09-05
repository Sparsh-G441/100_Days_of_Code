//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>

int main()
{
    int a,b;
    char op;

    printf("Enter 2 operands: ");
    scanf("%d %d", &a, &b);

    printf("Enter operation: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
        printf("\nSum = %d", a + b);
        break;

        case '-':
        printf("\nDifference = %d", a - b);
        break;

        case '*':
        printf("\nProduct = %d", a * b);
        break;

        case '/':
        if (b == 0)
        {
            printf("\nZero Division Error");
        }
        else
        {
            printf("\nQuotient = %d", a / b);
        }
        break;

        case '%':
        if (b == 0)
        {
            printf("\nZero Modulus Error");
        }
        else
        {
            printf("\nRemainder = %d", a % b);
        }
        break;

        default:
        printf("\nInvalid Operation");
        break;
    }

    return 0;
}