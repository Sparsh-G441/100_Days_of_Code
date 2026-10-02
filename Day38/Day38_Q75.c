/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include<stdio.h>

int main()
{
    int a[100][100], b[100][100], m, n, i, j, x, y;

    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter rows and columns of matrix 2: ");
    scanf("%d %d", &x, &y);

    if (m != x || n != y)
    {
        printf("Order must be same.");
        return 0;
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", (a[i][j] + b[i][j]));
        }
        printf("\n");
    }

    return 0;
}