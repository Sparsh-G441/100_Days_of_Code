/*Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

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
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }

        i++;
    }

    printf("New string: %s", a);

    return 0;
}