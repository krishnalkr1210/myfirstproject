
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    float d,v1,v2;
    scanf("\nEnter three coefficients");
    scanf("%d%d%d",&a,&b,&c);
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