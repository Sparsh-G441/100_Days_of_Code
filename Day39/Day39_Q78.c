/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>

int main()
{
    int a[100][100], i, j, m, n, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d %d", &m, &n);
    
    if (m != n)
    {
        printf("Not a sqaure matrix.");
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}