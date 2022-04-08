

#include <stdio.h>
int product(int x);

int main()
{
    int a=5;
    printf("product is %d",product(a));
    
    return 0;
}

int product(int x)
{
    int i, y,z=0;
    for ( i = 1; i <=x; i++)
    {
        y=x*i;
        z+=y;
    }
    return z;
    
}