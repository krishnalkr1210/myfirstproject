//completed
//palindrome number

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,n1,rev=0,rem;
    printf("Enter a Number : ");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if (rev==n1)
    {
        printf("%d is a Palindrome Number", n1);
    }
    else
    {
        printf("%d is not a Palindrome Number", n1);
    }
    
    

    return 0;
}
