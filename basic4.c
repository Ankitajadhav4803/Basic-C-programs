/* c program to calculate surface area of a cuboid */
#include<stdio.h>
int main()
{
	float l,b,h,sarea;
	printf("enter length,breadth,height of a cuboid=");
	scanf("%f%f%f",&l,&b,&h);
	sarea=2*((l*b)+(l*h)+(b*h));
	printf("\n surface area of a cuboid=%.2f",sarea);
}
