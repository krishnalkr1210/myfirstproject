//uncomplete
//Checking the number prime or not
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,i,f;
    printf("Enter a number");
    scanf("%d",&n);

    for (i=2; i<n; i++)
    {
        if(n%2==0)
        {
            f++;
            // break;

        }
    }
    
    if(f==0)
    {
        printf("prime");
    }

    else{
        printf("not prime");
    }

    return 0;
}
