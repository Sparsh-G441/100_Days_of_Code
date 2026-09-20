/*Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include<stdio.h>

int main()
{
    int i, n, a[20], ecount = 0, ocount = 0;

    printf("Enter number of elemnts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            ecount++;
        if (a[i] % 2 == 1)
            ocount++;
    }

    printf("Even = %d, Odd = %d", ecount, ocount);

    return 0;
}