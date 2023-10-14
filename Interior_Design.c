#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,t1,t2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    t1=x1+y1;
    t2=x2+y2;
    if(t1>t2)
    {
        printf("%d",t2);
    }
    else
    {
        printf("%d",t1);
    }
}