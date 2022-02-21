//Completed
//Table of a number
#include<stdio.h>
int main()
{
    int a,i,p;
    printf("Enter the Number ");
    scanf("%d",&a);
    for ( i = 1; i < 11; i++)
    {
        p=a*i;
        printf("\n%d * %d = %d",a,i,p);
    }
    return 0;
}

