/* c program to accept dimensions of a cylinder and print the surface area and volume of a cylinder */
#include<stdio.h>
void main()
{
	float r,h,sarea,volume;
	printf("enter radius,height of a cylinder=");
	scanf("%f%f",&r,&h);
	sarea=(2*3.14*r*h)+(2*3.14*r*r);
	volume=3.14*r*r*h;
	printf("\n surface area of a cylinder=%.2f",sarea);
	printf("\n volume of a cylinder=%.2f",volume);
}
