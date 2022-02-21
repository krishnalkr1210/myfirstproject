// Completed
// Fabonacci series
#include <stdio.h>
int main()
{
    int i, n , temp, a = 0, b = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("%d %d ", a, b);

    for (i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        printf("%d ", temp);
    }

    return 0;
}
