// Completed
// Factorial Number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 10, i, factorial = 1;
    // printf("Enter a Number ");
    // scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial = %d", factorial);
    return 0;
}
