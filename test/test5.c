#include <stdio.h>

int main()
{
    struct address
    {
        char area [20];
        char district [20];

    };
    struct person
    {
        char name[20];
        struct address add;
    };
    struct person p;
    p.name;
    p.add.area;
    p.add.district;
    printf("\n Enter Name,area and district");
    scanf("%[^\n],%[^\n],%[^\n]");
    printf("\n Your name = %s",p.name);
    return 0;
}