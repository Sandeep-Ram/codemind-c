#include<stdio.h>
#include<string.h>
int main()
{
    int i=1,l=1;
    char str[20];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==32)
        {
            l++;
        }
    }
    printf("%d",l++);
}