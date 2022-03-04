// Complteted
// Perfect Number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, c = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            c += i;
        }
    }

    if (c == n)
    {
        printf("%d is a Perfect Number.", n);
    }
    else
    {
        printf("%d is not a Perfect Number.", n);
    }

    return 0;
}
