/* c program to accept three dimensions length (l), breadth (b) and height (h) of a cuboid and print surface area of and volume */
#include<stdio.h>
void main()
{
	float l,b,h,sarea,volume;
	printf("enter length,breadth,height of a cuboid=");
	scanf("%f%f%f",&l,&b,&h);
	sarea=2*((l*b)+(l*h)+(b*h));
 volume=l*b*h;
	printf("\n surface area of a cuboid=%.2f",sarea);
 printf("\n volume of a cuboid=%.2f", volume);
}
