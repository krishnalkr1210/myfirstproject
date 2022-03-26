

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int n=10,guess,nguess=1;
    // srand(time(0));
    // n=rand()%100+1;


    printf("Enter a number ");
    scanf("%d", &guess);
    
    do
    {
        
        
        if (guess>n)
        {
            printf("\nEnter a lesser number");
            scanf("%d", &guess);
        }

        else if (guess<n)
        {
            printf("\nEnter a Higher number");
            scanf("%d", &guess);
        }

        else (guess=n);
        {
            printf("\nYou guessed in %d attempts", nguess);
        }
        nguess++;
        
        
    } while (guess!=n);
    
    
    return 0;
}

