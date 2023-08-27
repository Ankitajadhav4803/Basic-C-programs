/* c program to accept inner and outer radius of a ring and print the perimeter and area of the ring */
#include<stdio.h>
void main()
{
	float ir,or,perimeter,area;
	printf("enter inner and outer radius of the ring=");
	scanf("%f%f",&ir,&or);
	perimeter=2*3.14*(ir+or);
	area=3.14*((ir*ir)-(or*or));
	printf("\n perimeter of the ring=%.2f",perimeter);
	printf("\n area of the ring=%.2f",area);
}
