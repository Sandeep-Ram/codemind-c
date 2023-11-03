#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    while(a<=b)
    {
        printf("%d x %d = %d
",n,a,n*a);
        a=a+1;
    }
}