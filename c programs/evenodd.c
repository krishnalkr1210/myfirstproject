//Go to statement
//Even Or odd using go to

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a Number :");
    scanf("%d",&x);
    if (x%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("\n %d is a Even Number",x);
    odd:
    printf("\n %d is a odd Number",x);

        return 0;


    

    
    
}
