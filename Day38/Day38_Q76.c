/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>

int main()
{
    int a[100][100], b[100][100], i, j, m, n, c = 1;

    printf("Enter order of matrix: ");
    scanf("%d %d", &m, &n);
    
    if (m != n)
    {
        printf("Not a square matrix. FALSE");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                c = 0;
            }
        }
    }

    if (c = 1)
    {
        printf("True");
    }
    else printf("False");

    return 0;
}