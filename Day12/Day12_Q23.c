/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>

int main()
{
    int d, rate;

    printf("Enter number of days: ");
    scanf("%d", &d);

    if (1 <= d && d <= 5)
    {
        rate = 2 * d;
        printf("Fine Rs.%d", rate);
    }
    else if (6 <= d && d <= 10)
    {
        rate = 10 + 4 * (d - 5);
        printf("Fine Rs.%d", rate);
    }
    else if (11 <= d && d <= 30)
    {
        rate = 30 + 6 * (d - 10);
        printf("Fine Rs.%d", rate);
    }
    else if (d == 0)
    {
        printf("No Fine");
    }
    else
    {
        printf("Membership cancelled");
    }

    return 0;
}