

#include<stdio.h>
int rec1(int k)
{
    static int sum=0,r;
    if(k!=0)
    {
        r=k%10;
        sum=sum+r;
        rec1(k/10);
    }
    return sum;
}

void main()
{
    int n;
    printf("Enter a number : ");
        scanf("%d",&n);
        printf("\nSum of the digit of %d is %d",n,rec1(n));
}