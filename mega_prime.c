#include<stdio.h>
int main()
{
	int n,i,flag=1,d;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
	    flag=1;
		while(n!=0){
			d=n%10;
		n/=10;
	
	if(d!=2&&d!=3&&d!=5&&d!=7){
	    flag=0;
	    break;
	} 
		}
		if(flag) printf("Mega Prime");
		else
		printf("Not Mega Prime");
		
		
}

	else
	{
		printf("Not Mega Prime");
		
	}
}

