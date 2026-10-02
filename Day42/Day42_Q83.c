/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include<stdio.h>

int main()
{
    char a[200];
    int i = 0, v = 0, c = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0' && a[i] != '\n')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }

    printf("Vowels = %d, Consonants = %d", v, c);

    return 0;
}