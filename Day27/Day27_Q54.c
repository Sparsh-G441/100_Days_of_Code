/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include<stdio.H>

int main()
{
    int i,j,k,l;
    int space = 3;
    int star = 1;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= star; k++)
        {
            printf("*");
        }
        for (l = 1; l <= space; l++)
        {
            printf(" ");
        }
        if (i < 4)
        {
            space -= 1;
            star += 2;
        }
        else
        {
            space += 1;
            star -= 2;
        }

        printf("\n");
    }
    return 0;
}