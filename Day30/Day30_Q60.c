/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main()
{
    int i, n, po= 0, ne = 0, z = 0, a[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            po++;

        if (a[i] < 0)
            ne++;

        else if (a[i] == 0)
            z++;
    }

    printf("Positive = %d, Negative = %d, Zero = %d", po,ne,z);

    return 0;
}