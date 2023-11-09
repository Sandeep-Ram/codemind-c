#include<stdio.h>
int main() {
    int a,b,i,m=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        if(i%3==0){
            m++;
        }
    }
    printf("%d",m);
}