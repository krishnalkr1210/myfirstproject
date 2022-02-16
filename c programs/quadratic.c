//Completed
//Quadartic Equations
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,v1,v2;
    printf("\nEnter First coefficient ");
    scanf("%d",&a);
    printf("\nEnter Second coefficient ");
    scanf("%d",&b);
    printf("\nEnter Third coefficient ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    //or d=pow(b,2)-(4*a*c);
    if(d>=0)
    {
        v1=(-b+sqrt(d))/(2*a);
        v2=(-b-sqrt(d))/(2*a);
    }
    else
    {
        printf("value not possible");
    }
    getchar();
}