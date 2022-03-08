#include<stdio.h>
int main()
{
	int n=371,r,sum=0,temp;
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
	
}
