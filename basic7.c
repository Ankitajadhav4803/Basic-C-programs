/* c program to accept temperatures in fahrenheit(f) and print it in celsius(c) and kelvin(k) */
#include<stdio.h>
void main()
{
	float f,c,k;
	printf("enter temperature in fahrenheit=");
	scanf("%f",&f);
	c=(0.5)*(f-32);
	k=c+273.15;
	printf("\n temperature in celsius=%.2f",c);
	printf("\n temperature in kelvin=%.2f",k);
}

