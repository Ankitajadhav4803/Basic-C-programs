/* c program to calculate area and circumference of a circle */
#include<stdio.h>
void main()
{
	float r,area,circumference;
	printf("enter radius of circle:");
	scanf("%f",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("\n area of circle=%.2f",area);
	printf("\n circumference of circle=%.2f",circumference);
}
