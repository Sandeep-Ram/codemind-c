#include<stdio.h>
int main()
{
    int x;
    float d,h,g;
    scanf("%d",&x);
    if(x<=10000)
    {
        d=((80*x)/100.0);
        h=((20*x)/100.0);
        g=x+d+h;
        printf("%.2f",g);
  }
    else if(x<=20000)
    {
        d=((90*x)/100.0);
        h=((25*x)/100.0);
        g=x+d+h;
        printf("%.2f",g);
        
    }
    else if(x>20000)
    {
        d=((95*x)/100.0);
        h=((30*x)/100.0);
        g=x+d+h;
        printf("%.2f",g);
    }
}