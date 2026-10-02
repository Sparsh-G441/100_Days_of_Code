/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main()
{
    int a[100][100], s[100] = {}, i, j, m, n;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            s[i] += a[i][j];
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("%d ", s[i]);
    }

    return 0;
}