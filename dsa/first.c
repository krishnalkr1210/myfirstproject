

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int info;
    struct node *next;

}N;
void push()
{
    N *p;
    p=(N *)malloc(sizeof(N));
    int val;
    printf("Enter Your Number to push");
    scanf("%d",val);
    p->info=val;
    p->next=top;
    top=p;

    

}

void pop()
{
    if (top==-1)
    {
        printf("\nStack is empty ");
    }
    else
    {
        printf("Popped element from the stack is %d",s);
    }
    
}
int main()
{
    
    return 0;
}