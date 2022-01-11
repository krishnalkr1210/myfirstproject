//Completed
//Area of a right angled traiangle when base and height is given

#include<stdio.h>
void main()
{
    
    float ar,a,b,h;
    printf("Enter base of the triangle ");
    scanf("%f",&b);
    printf("Enter height of the triangle ");
    scanf("%f",&h);
    ar=0.5*b*h;
    printf( "Area of triangle is " "%.2f",ar);
}