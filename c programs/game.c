#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, n, i, counter = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Enter a Number between 1 to 100 ");
    scanf("%d", &n);
    do
    {
        if (n > number)
        {
            printf("Enter a smaller Number ");
            scanf("%d", &n);
        }

        else if (n < number)
        {
            printf("Enter a larger Number ");
            scanf("%d", &n);
        }

        // else
        // {
        //     printf("You guessed it in %d attempts",counter);
        // }

        counter++;

    } while (n != number);
    printf("You guessed it in %d attempts", counter);

    return 0;
}
