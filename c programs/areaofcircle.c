//completed
//Area of Circle when radius is given
#include<stdio.h>
#include<math.h>
int main()
{
    float r,area;
    printf("Enter the radius ");
    scanf("%f",&r);
    area=3.142857142857143*r*r;
    printf("Area of the Circle is " "%.2f",area);
    return 0;
}