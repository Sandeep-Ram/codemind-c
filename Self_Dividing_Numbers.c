#include <stdio.h>
int main()
{
   int n,y,z;
   scanf("%d%d",&y,&z);
   for(n=y;n<=z;n++)
   {
   int temp = n;
   
   int flag=1;
   while (temp>0)
   {
      int r=temp%10;
      if (r==0 || n%r!=0)
	  {
         flag=0;
         break;
      }
      temp/=10;
   }
   if (flag==1)
      printf("%d ",n);
}
}