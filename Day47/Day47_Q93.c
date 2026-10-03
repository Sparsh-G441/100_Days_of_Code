/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>

int main()
{
    char a[200], b[200];
    int count[256] = {0};
    int i = 0,j = 0, len = 0, len1 = 0, isanagram = 1;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] == '\n')
        {
            a[i] = '\0';
            break;
        }
        count[a[i]]++;
        len++;
        i++;
    }

    printf("Enter another string: ");
    fgets(b, sizeof(b), stdin);

    while (b[j] != '\0')
    {
        if (b[j] == '\n')
        {
            b[j] = '\0';
            break;
        }
        count[b[j]]--;
        len1++;
        j++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            isanagram = 0;
            break;
        }
    }

    if (isanagram == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}