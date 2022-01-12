//completed
//Circumference of Circle when radius is given
#include<stdio.h>
#include<math.h>
void main()
{
    float r,circumference;
    printf("Enter the radius of the Circle ");
    scanf("%f",&r);
    circumference=3.142857142857143*2*r;
    printf("Circumference of the Circle is " "%.2f",circumference);
    getchar();
}