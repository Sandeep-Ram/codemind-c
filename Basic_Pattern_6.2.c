
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int h=n;
    for(i=1;i<=n;i++){
           for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("%d ",h);
        }
     h--;
        printf("
");
    }
}
