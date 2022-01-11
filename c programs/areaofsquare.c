//completed
//Area of Square when side is given
#include<stdio.h>
#include<math.h>
void main()
{
    float b,area;
    printf("Enter the side of the Square ");
    scanf("%f",&b);
    area=pow(b,2);
    printf("Area of Square is " "%.2f",area);
    getchar();
}