// Completed
// Checking a Number prime or not

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, c = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            c = 0;
        }
    }
    if (c)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is not a Prime Number", n);
    }

    return 0;
}
