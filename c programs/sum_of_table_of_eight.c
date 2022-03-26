// Completed
// A program to find the sum of table of a entered Number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i , n, a, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <=10; i++)
    {
        a = n * i;

        sum += a;
    }
    printf("%d", sum);

    return 0;
}
