/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main()
{
    int stars = 1;

    for (int i = 1; i <= 9; i++)
    {
        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }

        if (i < 5)
        {
            stars += 2;
        }
        else
        {
            stars -= 2;
        }
        printf("\n");
    }
    return 0;
}