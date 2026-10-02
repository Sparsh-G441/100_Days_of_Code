/*Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0' && a[i] != '\n')
    {
        if (a[i] > 'a' && a[i] < 'z')
        {
            a[i] -= 32;
        }
        i++;
    }

    printf("New string: %s", a);

    return 0;
}