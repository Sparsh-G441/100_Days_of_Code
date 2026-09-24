/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<Stdio.h>

int main()
{
    int a[10] = {0}, max, result, i, num;

    printf("Enter integer n: ");
    scanf("%d", &num);

    int ognum = num;

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        int digit = num % 10;
        a[digit]++;
        num /= 10;
    }

    max = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    result = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == max)
        {
            result = i;
            break;
        }
    }

    printf("Digit with max frequency is %d", result);

    return 0;
}