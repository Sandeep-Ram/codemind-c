#include<stdio.h>
int main()
{
	char str[20],str1[20];
	scanf("%[^
]s",str);
	int i;
	for(i=0;str[i]!=NULL;i++)
	{
		str1[i]=str[i];
	}
	str1[i]=NULL;
	printf("%s",str1);
}