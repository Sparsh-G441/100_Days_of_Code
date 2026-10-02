/*Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, len = -1;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] == '\n') a[i] = '\0';
        len++;
        i++;
    }

    printf("Length of string is %d", len);

    return 0;
}