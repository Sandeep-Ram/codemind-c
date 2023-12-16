#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int acet[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&acet[i]);
    }
    int sum1=0;
    for(i=0;i<n;i++)
    {
        if(acet[i]%2!=0)
        sum1=sum1+acet[i];
    }
     int sum2=0;
    for(i=0;i<n;i++)
    {
        if(acet[i]%2==0)
        sum2=sum2+acet[i];
    }
    
    int s3=abs(sum1-sum2);
    printf("%d",s3);
}