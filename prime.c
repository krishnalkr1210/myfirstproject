

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,f;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (n%2==0)
        {
            f++;
        }
        printf("%d",i);
    }
    
    return 0;
}
