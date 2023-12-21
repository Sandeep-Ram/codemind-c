#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=64+n;i>64;i--)
    {
        for(j=n;j>=i-64;j--)
        {
            printf("%c ",i);
            
        }
        printf("
");
    }
}