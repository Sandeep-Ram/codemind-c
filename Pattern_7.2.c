#include<stdio.h>
int main(){
    int n,i,j,c=1;
    scanf("%d",&n);
int f=n;
    for(i=n;i>0;i--){
        int h=n;
        h=1;
           for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
           
            printf("%d ",f);
             
        }
        f--;
   
        printf("
");
    c++;
}
}