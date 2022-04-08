#include <stdio.h>

int main()
{
    int n=4;
    int rem;
    int a[10];
    int i=0;
    while (n)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    printf("%d",a[i]);
    
    return 0;
}