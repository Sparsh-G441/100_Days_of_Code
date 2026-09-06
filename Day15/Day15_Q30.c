//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter num: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }

    printf("%d", reversed);

    return 0;
}