/* c program to accept two numbers from user and perform all arithmetic operations on them */
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers=");
	scanf("%d%d", &x, &y);
	printf("\n addition=%d",x+y);
	printf("\n substraction=%d",x-y);
	printf("\n multiplication=%d",x*y);
	printf("\n division=%d",x/y);
	printf("\n modular division=%d",x%y);
}
