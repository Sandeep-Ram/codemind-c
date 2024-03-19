#include<stdio.h>
int main(){
    int n,i,j,c=1;
    scanf("%d",&n);

    for(i=n;i>0;i--){
        int f=n;
       int h=1;
           for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
           
            printf("%d ",j);
             f--;
        }
        
   
        printf("
");
    c++;
}
}