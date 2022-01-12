//completed
//Area of Rectangle when length and breadth is given
#include<stdio.h>
#include<math.h>
void main ()
{
    float l,b,area;
    printf("Enter the length of the Rectangle ");
    scanf("%f",&l);
    printf("Enter the breadth of the Rectangle ");
    scanf("%f",&b);
    area=l*b;
    printf("Area of the Rectangle is " "%.2f",area);
    getchar();
}