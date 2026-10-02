/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>

int main()
{
    char a[300], ele;
    int i = 0, c = 0;
    
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter element to count: ");
    scanf("%c", &ele);

    while (a[i] != '\0' && a[i] != '\n')
    {
        if (a[i] == ele)
        {
            c++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d", ele, c);

    return 0;
}