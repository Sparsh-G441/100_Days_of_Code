/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() 
{
    int a[100][100], i, j, m, n, k;

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
    

    int maxd = m + n - 1;

    for (i = 0; i < maxd; i++) 
    {
        if (i % 2 == 0) 
        {
            j = (i < m - 1) ? i : m - 1;
            k = i - j;
            while (j >= 0 && k < n) 
            {
                printf("%d ", a[j][k]);
                j--;
                k++;
            }
        } 
        else 
        {
            k = (i < n - 1) ? i : n - 1;
            j = i - k;
            while (k >= 0 && j < m) 
            {
                printf("%d ", a[j][k]);
                j++;
                k--;
            }
        }
    }
    printf("\n");

    return 0;
}
