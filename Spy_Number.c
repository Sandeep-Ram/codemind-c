#include<stdio.h>
int main()
{
	int n,a,b,x;
	scanf("%d",&n);
	a=0;
	x=1;
	while(n!=0)
	{
		b=n%10;
		a=a+b;
		x=(x*b);
		n=n/10;
	}
	if(a==x)
	{
		printf("Spy Number");
	}
	else
	printf("Not Spy Number");	
}