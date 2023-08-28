/* c program to accept two integers from the user and interchange them.display the interchanged numbers */
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter two integers=");
	scanf("%d%d",&a,&b);
	printf("\n values of two integers before interchanging\n a=%d\n b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n values of two integers after interchanging\n a=%d\n b=%d",a,b);
}
