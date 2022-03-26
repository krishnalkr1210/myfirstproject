//Completed
// I/O operation In string  

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char s[20];
    puts("Enter String : ");
    gets(s);
    for ( i = 0; s[i]!='\0'; i++)
    {
        printf("%c",s[i]);   
    }
    
    return 0;
}
