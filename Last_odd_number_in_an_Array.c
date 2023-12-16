#include<stdio.h>
int main()
{
	int n,o,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	o=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
		   o=a[i];	
		}
	}
	printf("%d",o);
}