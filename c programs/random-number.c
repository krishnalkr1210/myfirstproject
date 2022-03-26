//Completed
//Generate a random number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int number;
    srand(time(0));
    number=rand()%100+1;
    printf("The random Number is %d",number);
    return 0;
}
