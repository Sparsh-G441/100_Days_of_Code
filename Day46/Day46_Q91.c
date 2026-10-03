/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, len = 0, j;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] == '\n')
        {
            a[i] = '\0';
            break;
        }
        len++;
        i++;
    }

    for (i = 0; i < len; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            for (j = i; j < len; j++)
            {
                a[j] = a[j + 1];
            }
            len--;
            i--;
        }
    }

    printf("New String: %s", a);

    return 0;
}