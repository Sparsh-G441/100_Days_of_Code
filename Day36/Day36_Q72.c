/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>

int main()
{
    int a[100][100], i, j, m, n, sum = 0;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}