/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, len = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0' && a[i] != '\n')
    {
        len++;
        i++;
    }

    for (i = 0; i < len / 2; i++)
    {
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }

    printf("Reversed string: %s", a);

    return 0;
}