#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("\nBefore swapping\na=%d\nb=%d",a,b);
	b=(a+b)-(a=b);
	printf("\nAfter swapping\na=%d\nb=%d",a,b);
	return 0;
}