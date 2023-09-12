/* c program to accept marks for three subjects and find the total marks secured and average */
#include<stdio.h>
void main()
{
	float m1,m2,m3,avg,tot;
	printf("enter marks for three subjects=");
	scanf("%f%f%f",&m1,&m2,&m3);
	tot=m1+m2+m3;
	avg=tot/3;
	printf("\n total marks secured=%.2f",tot);
	printf("\n average=%.2f",avg);
} 
