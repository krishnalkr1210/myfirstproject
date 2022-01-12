#include<stdio.h>
#include<math.h>
void main ()
{
    int a,b,max;
    printf("Enter two numbers");
    scanf("%d%D",&a,&b);
    max=(a>b)?a:b;
    printf("\n big=%d",max);
    getchar();


}