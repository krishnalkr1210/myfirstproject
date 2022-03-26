

#include<stdio.h>
int sumd(int k)
{
    int sum=0,r;
    while (k!=0)
    {
        r=k%10;
        sum=sum+r;
        k=k/10;
    }
    return sum;
    
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\nSum of the digit of %d is %d",n,sumd(n));
}