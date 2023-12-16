#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,c,x,s,z,y,a;
	scanf("%d",&n);
	a=n;
	y=n;
	i=0;
	while(n)
	{
		j=n%10;
		i=i+1;
		n=n/10;
	}
	c=i;
	s=0;
	for(x=c;x>=1;x--)
	{
		z=y%10;
		s=pow(z,x)+s;
		y=y/10;
	}
//	printf("%d",s);
	if(a==s)
	{
		printf("True");
	}
	else
	printf("False");
}