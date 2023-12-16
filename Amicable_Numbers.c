#include<stdio.h>
int main()
{
	int m,n,x,y;
	scanf("%d%d",&m,&n);
	y=0;
	x=1;
	while(x<=m/2)
	{
		if(m%x==0)
		{
			y=y+x;
		}
		x++;
	}
if(y==n)
{
	printf("Amicable");
}
else
printf("Not Amicable");
}