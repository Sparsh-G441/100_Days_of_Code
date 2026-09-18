/*Q52: Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() 
{
    int stars = 1;

    for (int k = 1; k <= 5; k++) 
    {
        for (int i = 0; i < stars; i++) 
        {
            printf("*\n");
        }
        
        printf("\n");

        if (k < 3) 
        {
            stars += 2;
        } 
        else 
        {
            stars -= 2;
        }
    }

    return 0;
}
