#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=65 && x<=90)
    {
        printf("uppercase alphabet");
    }
    else if(x>=97 && x<=122)
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}