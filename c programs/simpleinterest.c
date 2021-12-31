
#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,t,si;
    scanf("\nEnter principal,rate and time");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nSimple Interst=%f",si);
    getchar();
}