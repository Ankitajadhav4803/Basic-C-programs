/* c program to accept a character from the keyboard and display its previous and next character in order */
#include<stdio.h>
void main()
{
	char ch;
	printf("enter character=");
	scanf("%c",&ch);
	printf("\n previous character=%c",ch-1);
	printf("\n next character=%c",ch+1);
}
