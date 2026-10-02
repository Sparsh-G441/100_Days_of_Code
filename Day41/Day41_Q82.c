/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

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
        printf("%c\n", a[i]);
        i++;
    }

    return 0;
}