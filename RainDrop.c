#include<stdio.h>
int main()
{
	int n,x,y,z;
	scanf("%d",&n);
	x=n%3;
	y=n%5;
	z=n%7;
	if(x==0 && y==0 && z==0){
	    printf("PlingPlangPLong");
	    
	}
	else if(x==0 && y==0){
	    printf("PlingPlang");
	}
		else if(x==0 && z==0){
	    printf("PlingPlong");
	}
		else if(z==0 && y==0){
	    printf("PlangPling");
	}
		else if(x==0){
	    printf("Pling");
	}
		else if(y==0){
	    printf("Plang");
	}
		else if(z==0){
	    printf("Plong");
	}
	else {
	    printf("%d",n);
	}
}