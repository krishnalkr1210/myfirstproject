//Completed
//Number of vowels in a String

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,v=0;
    char s[20];
    puts("Enter String: ");
    gets(s);
    for ( i = 0; s[i]!='\0'; i++)
    {
        switch (s[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        v++;
        
        default:
            break;
        }
    }

    printf("%d is the total number of Vowels in this string.",v);
    

    return 0;
}
