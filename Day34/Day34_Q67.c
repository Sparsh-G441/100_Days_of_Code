/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>

int main()
{
    int a[100], i, n, p, ele;

    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position and element to be inserted: ");
    scanf("%d %d", &p, &ele);

    for (i = n; i >= p; i--)
    {
        a[i] = a[i - 1];
    }

    a[p] = ele;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}