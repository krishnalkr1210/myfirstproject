//Completed
//Calculator using Switch Case

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    printf("\t ==================");
    printf("\n\t MENU");
    printf("\t ==================");
    printf("\n\t [1] ADDITION ");
    printf("\n\t [2] SUBTRACTION ");
    printf("\n\t [3] MULTIPLICTATION ");
    printf("\n\t [4] DIVISION ");
    printf("\n\t [5] REMAINDER ");
    printf("\n\t [6] LARGER OUT OF TWO ");
    printf("\n\t [0] EXIT ");
    printf("\n\t ================== ");
    printf("\n\n\t ENTER YOUR CHOICE ");
    scanf("%d",&c);
    printf("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);    
    



    switch (c)
    {
    case 1:
        printf("\n Addition : %d", a + b);
        break;

    case 2:
        printf("\n Subtraction : %d", a - b);
        break;

    case 3:
        printf("\n Multiplication : %d", a * b);
        break;

    case 4:
        printf("\n Division : %d", a / b);
        break;

    case 5:
        printf("\n Remainder : %d", a % b);
        break;

    case 6:
        if (a>b)
        {
            printf("%d is larger out of two",&a);
        }

        else if (b>a)
        {
            printf("%d is larger out of two",&b);
        }

        else
        {
            printf("Both are equal.");
        }
        break;

    case 7:
        exit(1);
            
            
    
    default:
        printf("Wrong Choice Input");
        break;
    }

    return 0;
}
