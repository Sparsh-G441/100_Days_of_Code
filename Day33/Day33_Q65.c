/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>

int main()
{
    int a[20], n, i, target, result = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Array can not have 0 elements.");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == target)
        {
            result = mid;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1; 
        }
    }

    if (result == -1)
    {
        printf("%d", result);
    }
    else
    {
    printf("Found at index %d", result);
    }
    
    return 0;
}