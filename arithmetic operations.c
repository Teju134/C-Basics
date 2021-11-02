#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h,m,t,i,j,k,l,z;
	a = 234;
	b = 345;
	c = 424;
	d = 312;
	e = 643; 
	f = 754;
	g = 813;
	h = 935;
	m = 100;
	t = 550;
	
	i = a+b;
	j = c-d;
	k = e*f;
	l = g/h;
	z = m%t;
	
	printf("sum of %d and %d is %d\n",a,b,i);
	printf("difference of %d and %d is %d\n",c,d,j);
	printf("product of %d and %d is %d\n",e,f,k);
	printf("quotient of %d and %d is %d\n",g,h,l);
	printf("remainder of %d and %d is %d\n",m,t,z);
}
