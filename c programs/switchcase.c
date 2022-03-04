//Completed
//Use Of Switch Case

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b;
    while (1)
    {
        printf("\n Press 1 to add two numbers");
        printf("\n Press  2 to check the number Even or Odd");
        printf("\n Press 3 to find the area of the rectangle");
        printf("\n Press 4 to exit");
        printf("\n Enter your choice ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\n Enter Two Numbers : ");
            scanf("%d%d", &a, &b);
            printf("\n Sum of %d and %d is %d", a, b, a + b);
            break;

        case 2:
            printf("\n Enter a Number : ");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                printf("%d is an Even Number.", a);
            }

            else
            {
                printf("%d is an Odd Number.", a);
            }
            break;

        case 3:
            printf("\n Enter length and breadth of the rectangle : ");
            scanf("%d%d", &a, &b);
            printf("Area of the rectangle is %d.", a * b);
            break;

        case 4:
            exit(1);

        default:
            printf("\n Wrong Choice");
        }
    }

    return 0;
}
