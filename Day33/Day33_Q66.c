/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>

int main()
{
    int i, a[100], element, n;
    
    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    i = 0;
    int p = 0;
    while (i < n && element > a[i])
    {
        p++;
        i++;
    }

    for (i = n - 1; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}