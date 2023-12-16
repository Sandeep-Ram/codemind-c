#include<stdio.h>
int main()
{
	int n;
	float y,x,d,i;
	scanf("%d",&n);
	y=0.00;
	d=1;
	i=0;
	while(i<n)
	{
		x=(1/(1+(i*d)));
		y=y+x;
		i++;
		
	}
   printf("%.2f",y);
}