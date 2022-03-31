// Write a Program in C to input roll number,name,,course and fee as a parameter after that Print all records using Function.

#include <stdio.h>
#include <string.h>
int rol, fe;
char nam[20], cs[5];

void getinput(int roll, char name[20], char course[5], int fee)
{
    rol = roll;
    fe = fee;
    strcpy(nam, name);
    strcpy(cs, course);
}

void showrecord()
{
    printf("Roll no = %d\n Name = %s\n course = %s\n fee = %d", rol, nam, cs, fe);
}

int main(int argc, char const *argv[])

{
    int r, f;
    char n[20], c[5];
    printf("\nEnter Roll Number ");
    scanf("%d", r);
    printf("\nEnter Name ");
    scanf("%s", &n);
    printf("\nEnter Course ");
    scanf("%s", &c);
    printf("\nEnter Fee ");
    scanf("%d", &f);

    getinput(r, n, c, f);

    showrecord();
    return 0;
}
