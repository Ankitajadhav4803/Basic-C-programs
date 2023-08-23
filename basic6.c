/* c program to accept initial velocity(u),acceleration(a),time(t) and print the final velocity(v) and distance(s) travelled */
#include<stdio.h>
void main()
{
	float u,a,t,v,s;
	printf("enter initial velocity,acceleration and time=");
	scanf("%f%f%f",&u,&a,&t);
	v=u+(a*t);
	s=u+(a*t*t);
	printf("\n final velocity=%.2f",v);
	printf("\n distance travelled=%.2f",s);
}
