#include<stdio.h>
int main() {
    int n,i=0,f,a=0,b=1;
    scanf("%d",&n);
       while (a < n) 
       {
        if (i >= 0)
        {
            printf("%d ", i);
        }
        f = i + b;
        i = b;
        b = f;
        a++;
    }
    
}