/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, sp = 0, s = 0, d = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0' && a[i] != '\n')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }

        if (a[i] >= 'A' && a[i] <= 'Z')
        {
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            d++;
        }
        else if (a[i] == ' ')
        {
            s++;
        }
        else sp++;

        i++;
    }

    printf("Spaces = %d, Digits = %d, Special = %d", s, d, sp);

    return 0;
}