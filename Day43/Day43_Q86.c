/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, len = 0, c = 1;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0' && a[i] != '\n')
    {
        len++;
        i++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (a[i] != a[len - 1 - i])
        {
            c = 0;
        }
    }

    if (c == 1)
    {
        printf("Palindrome");
    }
    else printf("Not Palindrome");

    return 0;
}