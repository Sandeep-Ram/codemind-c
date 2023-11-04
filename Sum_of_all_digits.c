#include<stdio.h>
int main()
{
    int n,s=0,f=0;
    scanf("%d",&n);
    while(n){
        f=n%10;
        n=n/10;
        s=s+f;
    }
    printf("%d",s);
    
}