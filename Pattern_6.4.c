#include<stdio.h>
int main(){
    int n,i,j,c=1;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        int h=n;
        h=h-i;
           for(int k=n-c;k>0;k--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
           
            printf("%c ",h+64);
             
        }
        h++;
   
        printf("
");
    c++;
}
}