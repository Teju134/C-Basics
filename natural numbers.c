#include<stdio.h>
void main()
{
	int n,a,b,c;
	n=10;
	a=n*(n+1)/2;
	b=n*(n+1);
	c=n*n;
	printf("sum of frist %d natural numbers is %d\n",n,a);
	printf("sum of frist %d even numbers is %d\n",n,b);
	printf("sum of frist %d odd numbers is %d\n",n,c);
}
