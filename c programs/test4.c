#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c, j, i, n = 1000;
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
           {c++;
                break;}
        
        
        }

        if (c==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
