#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	i=n*2;
		while(i>0)
		{
			if(i%2==0)
			{
				printf("%d ",i);
			}
			i--;
		}
}