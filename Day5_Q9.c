//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,s,c;
    int t;

    printf("Enter principal, rate, time: ");
    scanf("%f %f %d", &p,&r,&t);

    s = (p * r * t)/ 100;
    c = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", s,c);

    return 0;
}