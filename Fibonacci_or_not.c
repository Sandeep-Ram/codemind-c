#include<stdio.h>
int main() {
    int n,i=0,f,a=1,b=1,m;
    scanf("%d",&m);
       while (a <= m) 
       {
        
        f = i + b;
        i = b;
        b = f;
        if(m==f){
            printf("True");
            break;
        }
       
        a++;
    }
     if(m!=f) {
            printf("False");
     }
}