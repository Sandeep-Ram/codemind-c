#include<stdio.h>
int main()
{
	int i=1,n,m=1;
	scanf("%d",&n);
	while(i<=n){
		m=m*i;
		i++;
	}
	printf("%d",m);
}