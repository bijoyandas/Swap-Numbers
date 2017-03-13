#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("\nBefore swapping\na=%d\nb=%d",a,b);
	b=(c=a+b)?a:b;
	a=c-b;
	printf("\nAfter swapping\na=%d\nb=%d",a,b);
	return 0;
}