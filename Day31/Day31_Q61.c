/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>

int main()
{
    int i, n, a[20], f = -1, e;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &e);

    for (i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            printf("\nElement found at index %d", i);
            f++;
        }
    }

    if (f == -1)
    printf("\n%d", f);

    return 0;
}