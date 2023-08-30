/* c program to calculate simple interest */
#include<stdio.h>
void main()
{
	float p,r,si;
	int n;
	printf("enter the principle sum=");
	scanf("%f",&p);
	printf("enter the rate of interest=");
	scanf("%f",&r);	
	printf("enter the number of years=");
	scanf("%d",&n);
	si=(p*r*n)/100;
	printf("\n simple interest=%.2f",si);
}
