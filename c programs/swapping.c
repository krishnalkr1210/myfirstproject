//swapping without third variable
#include<stdio.h>
int main ()
{
    int a,b,t;
    printf("Enter two values ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nvalues before swapping are a=%d b=%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nvalues after swapping are a=%d b=%d",a,b);
    return 0;

}