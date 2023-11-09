#include<stdio.h>
int main() {
    int i,n,m=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++) {
        if(n%i==0){
            m++;
        }
    }
    if(m==1){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
}