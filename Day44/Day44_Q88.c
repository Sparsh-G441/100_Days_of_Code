/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

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
        if (a[i] == ' ')
        {
            a[i] = '-';
        }
        i++;
    }

    printf("New String: %s", a);

    return 0;
}