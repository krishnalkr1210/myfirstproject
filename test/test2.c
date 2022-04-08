#include <stdio.h>

int main()
{
    int x=3, y,i;
    for ( i = 1; i <=x; i++)
    {
        x=x*i;
    }
    printf("product is %d",x);

    return 0;
}