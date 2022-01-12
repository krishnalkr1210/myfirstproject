//Completed
//Area of a triangle using heron's formula
#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,s,area;
    printf("Enter Number");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",area);
    getchar();
}

    
    
