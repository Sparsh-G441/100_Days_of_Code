//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter num: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Not Palindrome");
        return 0;
    }

    int original = num;

    while (num > 0)
    {
        int remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }

    if (original == reversed)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}