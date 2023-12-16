#include<stdio.h>
int main()
{
	int n,l,r;
	scanf("%d",&n);
	l=0;
	while(n>0)
	{
		r=n%10;
		if(r>l)
		{
			l=r;
		}
		n=n/10;
	}
	printf("%d",l);
}