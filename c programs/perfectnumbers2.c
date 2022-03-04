//Completed
//Program to find Perfect numbers between 1 to 1000.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=1000,i,j,c;
    for ( i = 1; i <=n ; i++)
    {
        c=0;
        for ( j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                 c+=j;
            }
            
        }
      if (c==i)
      {
          printf("%d ",i);
          
      }
        
    }
    
    
    return 0;
}
