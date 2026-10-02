/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include<stdio.h>

int main()
{
    int a[100][100], i, j, m, n, c = 1;

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
    }

    for (i = 0; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (a[i][i] == a[j][j])
            {
                c = 0;
                break;
            }
        }
    }

    if (c == 1) 
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
    return 0;
}