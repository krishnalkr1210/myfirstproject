#include <stdio.h>
#include <conio.h>

int main()
{
    int n[2][2], i, j;
    printf("\n  enter values in matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    printf("\nHere is your matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}
