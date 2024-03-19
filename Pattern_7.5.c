#include<stdio.h>
int main(){
    int n,i,j,c=1;
    scanf("%d",&n);
int f=n;
    for(i=n;i>0;i--){
        
       int h=1;
           for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
           
            printf("%c ",c+64);
           
        }
          f--;
   
        printf("
");
    c++;
}
}