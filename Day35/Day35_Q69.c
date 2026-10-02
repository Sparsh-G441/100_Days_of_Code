/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<Stdio.h>

int main()
{
    int a[100], n, i, smax;

    printf("Enter elements of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    smax = a[n - 1];

    for (i = 0; i < n; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
    }

    if (smax == max)
    {
        smax = a[n - 2];
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (smax < a[i])
        {
            if (a[i] == max)
            {
                continue;
            }
            else
            {
                smax = a[i];
            }
        }
    }

    printf("Second largest = %d", smax);

    return 0;
}