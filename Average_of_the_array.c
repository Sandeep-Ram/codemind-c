#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int acet[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&acet[i]);
    }
    int sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+acet[i];
    }
avg=float(sum)/n;
printf("%.2f",avg);
}