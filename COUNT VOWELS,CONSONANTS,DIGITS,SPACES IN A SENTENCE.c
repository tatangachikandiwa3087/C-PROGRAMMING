#include<stdio.h>
int main()
{
    char a[30];
    printf("ENTER THE SENTENCE AND PRESS ENTER: \n");
	scanf("%[^\n]s",&a);
	int i,v=0,c=0,s=0,d=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		v++;
		if(a[i]==' ')
		s++;
		if(a[i]<='9'&&a[i]>='0')
		d++;
		else
		c++;
	}
	printf("Vowels are: %d\n",v);
	printf("Consonants are: %d\n",c);
	printf("Digits are: %d\n",d);
	printf("Spaces are: %d\n",s);
	return 0;
}
