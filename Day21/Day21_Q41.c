//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<Stdio.h>

int main()
{
    int n, temp, original, swapped = 0, fd, ld, place = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    temp = n;
    original = temp;

    if (n < 10)
    {
        printf("%d", n);
        return 0;
    }

    ld = n % 10;
    while (temp >= 10)
    {
        temp /= 10;
        place *= 10;
    }

    fd = temp;
    swapped = (ld * place) + ((n % place) / 10 * 10) + fd;
    printf("Swapped = %d", swapped);
    return 0;
}