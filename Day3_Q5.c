//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in degree celsius: ");
    scanf("%f", &c);

    f = (9*c)/5 + 32;

    printf("Fahrenheit=%.1f", f);
    return 0;

}