/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>

int main()
{
    int g;

    printf("Enter percentage: ");
    scanf("%d", &g);

    if (90 <= g && g <= 100)
    {
        printf("Grade A");
    }
    else if (80 <= g && g <= 89)
    {
        printf("Grade B");
    }
    else if (70 <= g && g <= 79)
    {
        printf("Grade C");
    }
    else if (60 <= g && g <= 69)
    {
        printf("Grade D");
    }
    else if (0 <= g && g < 60)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}