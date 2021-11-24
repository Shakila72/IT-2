#include<stdio.h>

int main()
{
 float a,b,c;
 printf("Enter side of square, radius of circle, base of triangle, height of rectangle\n");
 scanf("%f",&a);
 printf("Enter height of triangle, width of rectangle\n");
 scanf("%f",&b);
 c=a*a;
 printf("Area of square=%f ",c);
 c=3.14*a*a;
 printf("Area of circle=%f ",c);
 c=0.5*a*b;
 printf("Area of triangle=%f ",c);
 c=a*b;
 printf("Area of rectangle=%f",c);
    }

