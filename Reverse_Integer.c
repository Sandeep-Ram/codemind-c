#include<stdio.h>
int main() {
    int n,i=0,j,z;
    scanf("%d",&n);
    while(n!=0) {
        j=n%10;
        i=(i*10)+j;
        n=n/10;
    }
        printf("%d",i);
    
}