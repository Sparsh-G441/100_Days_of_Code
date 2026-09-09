//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() 
{
    int binary, temp;
    int complement = 0;
    int place = 1;
    int total_digits = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    temp = binary;

    if (temp == 0) 
    {
        printf("1's complement: 1\n");
        return 0;
    }

    while (temp > 0) 
    {
        int rem = temp % 10; 
        total_digits++; 

        if (rem == 1) 
        {
            
        } 
        else if (rem == 0) 
        {
            complement = complement + (1 * place);
        } 
        else 
        {
            printf("Invalid binary digit!\n");
            return 1;
        }

        place = place * 10; 
        temp = temp / 10;   
    }

    int result_digits = 0;
    temp = complement;
    if (temp == 0) 
    {
        result_digits = 1;
    }
    while (temp > 0) 
    {
        result_digits++;
        temp /= 10;
    }

    printf("1's complement: ");

    int missing_zeros = total_digits - result_digits;
    while (missing_zeros > 0) 
    {
        printf("0");
        missing_zeros--;
    }

    printf("%d\n", complement);

    return 0;
}
