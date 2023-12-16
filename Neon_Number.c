#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,a,b,c;
	scanf("%d",&n);
	x=pow(n,2);
	c=x;
	a=0;
	while(x)
	{
		b=x%10;
		a=a+b;
		x=x/10;
	}
	if(n==a)
	{
		printf("Neon Number");
	}
	else
	printf("Not Neon Number");

}