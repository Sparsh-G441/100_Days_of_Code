//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include<stdio.h>

int main()
{
    int i, s, m, h;
    printf("Enter time in seconds: ");
    scanf("%d", &i);

    s = i % 60;
    m = (i / 60) % 60;
    h = i / 3600;
    
    printf("%d:%d:%d", h,m,s);

    return 0;

}