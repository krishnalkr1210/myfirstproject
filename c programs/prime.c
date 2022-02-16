//Completed☑️
// Large number among three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First Number ");
    scanf("%d", &a);

    printf("Enter Second Number ");
    scanf("%d", &b);

    printf("Enter Third Number ");
    scanf("%d", &c);

    

    if (a > b && a > c)
    {
        printf("%d is largest number ", a);
    }

    else if (b > a && b > c)
    {
        printf("%d is largest number ");
    }

    else if (c > a && c > b)
    {
        printf("%d is largest number ", c);
    }

    return 0;
}
