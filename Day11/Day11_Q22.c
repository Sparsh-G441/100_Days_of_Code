//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main()
{
    int c,s;

    printf("Enter cost price and sell price: ");
    scanf("%d %d", &c, &s);

    if (s > c)
    {
        printf("Profit %d%%", (s - c) * 100 / c);
    }
    else if (c > s)
    {
        printf("Loss %d%%", (c - s) * 100 / c);
    }
    else if (s == c)
    {
        printf("No Profit No Loss");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}