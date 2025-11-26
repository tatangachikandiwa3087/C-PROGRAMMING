#include<stdio.h>
int main()
{
	char a[50];
	int i,count=0;
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<=91&&a[i]>=65)
		count++;
	}
	printf("%d",count);
	return 0;
}
