/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>

int main()
{
    int u, rate;

    printf("Enter number of units: ");
    scanf("%d", &u);

    if (u <= 100)
    {
        rate = 5 * u;
        printf("Bill: Rs.%d", rate);
    }
    else if (101 <= u && u <= 200)
    {
        rate = 500 + 7 * (u - 100);
        printf("Bill: Rs.%d", rate);
    }
    else if (201 <= u && u <= 300)
    {
        rate = 1200 + 10 * (u - 200);
        printf("Bill: Rs.%d", rate);
    }
    else
    {
        rate = 2200 + 12 * (u - 300);
        printf("Bill: Rs.%d", rate);
    }

    return 0;
}