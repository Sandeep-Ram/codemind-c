#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else if(x<y)
		{
			y=y-x;
		}
	}
	printf("%d",x);
}