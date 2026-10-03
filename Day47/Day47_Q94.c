/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main()
{
    char a[500];
    int i = 0, clen = 0, cstart = 0;
    int mlen = 0, mstart = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] == '\n')
        {
            a[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (1)
    {
        if (a[i] != ' ' && a[i] != '\0')
        {
            if (clen == 0)
            {
                cstart = i;
            }
            clen++;
        }
        else
        {
            if (clen > mlen)
            {
                mlen = clen;
                mstart = cstart;
            }
            clen = 0;
        }

        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    printf("Longest Word: ");
    for (i = mstart; i < mstart + mlen; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}
