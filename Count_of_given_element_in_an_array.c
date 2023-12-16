#include<stdio.h>
int main()
{
    int n,c=0,i,z;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}