/* c program to calculate arithmetic mean and harmonic mean of the two numbers */
#include<stdio.h>
int main()
{
	float a,b,am,hm;
	printf("enter two numbers:");
	scanf("%f%f",& a,& b);
	am=(a+b)/2;
	hm=2*a*b/(a+b);
	printf("\n arithmetic mean=%.2f",am);
	printf("\n harmonic mean=%.2f",hm);
}
	
