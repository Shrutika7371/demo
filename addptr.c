#include<stdio.h>
int main()
{
	int a,b,*p,*q,c;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("addition is %d",c);
}
