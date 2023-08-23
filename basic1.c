/* c program to calculate area and perimeter of a rectangle */
#include<stdio.h>
void main()
{
	float l,b,area,perimeter;
	printf("enter length of rectangle:");
	scanf("%f",&l);
	printf("enter breadth of rectangle:");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("\n area of rectangle=%.2f",area);
	printf("\n perimeter of rectangle=%.2f",perimeter);
}
