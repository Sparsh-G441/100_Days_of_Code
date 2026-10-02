/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<Stdio.h>

int main()
{
    int a[100], n, i, k;

    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < n /2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < k / 2; i++)
    {
        int temp = a[i];
        a[i] = a[k - 1 - i];
        a[k - 1 - i] = temp;
    }

    int s = k;
    int e = n - 1;
    while (s < e)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;    
}