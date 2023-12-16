#include<stdio.h>
int main()
{
	int n,i,f=0;
	//float av;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 int s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	int av=(float)s/n;
	for(i=0;i<n;i++)
	{
	    if(av==a[i])
	    {
	        f=1;
	        break;
	    }
	}
	if(f==1)
	printf("True");
	else if(f==0)
	printf("False");
	
}