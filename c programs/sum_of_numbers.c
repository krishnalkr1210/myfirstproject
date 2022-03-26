//Completed
//Find the sum of first n natural number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n , i = 0, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of first %d number is %d", n, sum);
    return 0;
}
