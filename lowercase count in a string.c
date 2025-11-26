#include<stdio.h>
int main()
{
	char s[50];
	int i,count=0;
	scanf("%[^\n]s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]<=122&&s[i]>=97)
		count++;
	}
	printf("%d",count);
	return 0;
}
