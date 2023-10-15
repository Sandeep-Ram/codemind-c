#include<stdio.h>
int main()
{
    float x,a,b,p;
    scanf("%f",&x);
    if(x<200)
    {
        a=(x*1.20);
        if(a<400)
        {
            b=(100+a);
            printf("%.2f",b);
        }
    }
    else if(x>=200 && x<400)
    {
        a=(x*1.50);
        if(a>400)
        {
            p=(15*a)/100;
            b=(a+p);
            printf("%.2f",b);
        }
        else if(a<400)
        {
            b=(100+a);
            printf("%.2f",b);
        }
        
        
    }
        else if(x>=400 && x<600)
        {
            a=(x*1.80);
            if(a>400)
            {
                p=(15*a)/100;
                b=(a+p);
                printf("%.2f",b);
            }
        }
        else if(x>=600)
        {
            a=(x*2.00);
            if(a>400)
            {
                p=(15*a)/100;
                b=(a+p);
                printf("%.2f",b);
            }
        }
    }