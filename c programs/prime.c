// completed
// Checking the number prime or Composite
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, f=0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f++;
            // break;
        }
    }

    if (f == 0)
    {
        printf("%d is a Prime Number", n);
    }

    else
    {
        printf("%d is a Composite Number", n);
    }

    return 0;
}
