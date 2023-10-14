#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=(5*x);
    if(z>=y)
    {
        printf("YES");
    }
    else if(z!=y)
    {
        printf("NO");
    }
}