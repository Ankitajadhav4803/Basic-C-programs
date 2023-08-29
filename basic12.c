/* c program to accept the x and y coordinates of two points and compute the distance between the two points */
#include<stdio.h>
#include<math.h>
void main()
{
	int x1,x2,y1,y2,d1,d2,distance;
	printf("enter the coordinates of the point x(x1,y1)=");
	scanf("%d%d",&x1,&y1);
	printf("enter the coordinates of the point y(y1,y2)=");
	scanf("%d%d",&x2,&y2);
	d1=(x2-x1)*(x2-x1);
	d2=(y2-y1)*(y2=y1);
	distance=sqrt(d1+d2);
	printf("\n distance between the two points=%d",distance);
}
