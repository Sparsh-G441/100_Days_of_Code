//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<Stdio.h>

int main()
{
    int n, p = 1, remainder;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 10;
        if (remainder % 2 != 0)
        {
            p *= remainder;
        }
        n /= 10;
    }

    printf("%d", p);

    return 0;
}