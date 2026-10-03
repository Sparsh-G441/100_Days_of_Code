/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include<Stdio.h>

int main()
{
    char a[200], repeat = '\0';
    int i = 0, len = 0, j = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != 0)
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
        for (j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                repeat = a[i];
                break;
            }
        }
        if (repeat != '\0')
        {
            break;
        }
    }

    printf("'%c'", repeat);

    return 0;
}