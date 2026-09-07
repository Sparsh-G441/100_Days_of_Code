//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, N, original, len = 0, sum = 0, remainder;
    
    printf("Enter n: ");
    scanf("%d", &n);

    original = N = n;

    while (n > 0)
    {
        n /= 10;
        len += 1;
    }

    while (N > 0)
    {
        remainder = N % 10;
        sum += pow(remainder,len);
        N /= 10;
    }

    if (original == sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}