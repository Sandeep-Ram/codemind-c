#include<stdio.h>
int main()
{
    int i,n,m,s=0;
    scanf("%d",&n);
    while(n)
    {
        m=n%10;
        n=n/10;
        s++;
    }
     printf("%d",s);
        
    
}