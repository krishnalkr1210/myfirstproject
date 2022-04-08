//C program to convert Decimal to Binary using Stack

#include <stdio.h>
#define M 20
int stack[M];
int top = -1;
int push(long int k)
{
    if (top == M - 1)
        printf("\nStack is Full. ");
    {
        stack[++top] = k;
    }
}

long int pop()
{
    return stack[top--];
}
int main()
{
    long int n;
    printf("\nEnter any decimal Number: ");
    scanf("%ld", &n);
    while (n > 0)
    {
        push(n % 2);
        n = n / 2;
    }
    printf("\n Equivalent Binary Number is : ");
    while (top != -1)
    {
        printf("%2ld", pop());
    }

    return 0;
}