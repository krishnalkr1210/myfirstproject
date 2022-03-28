

#include<stdio.h>
void sum(int a , int b); //Function Prototype

int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter Two Numbers ");
    scanf("%d%d",&y,&x);
    // printf("Enter Second Number ");
    // scanf("%d",&y);

    sum(x,y); //Function call
    return 0;
}

// Function Definition
void sum(int a , int b){
    printf("Sum of %d and %d is %d",a,b,a+b);
}