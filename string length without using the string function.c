#include<stdio.h>
int main()
{
   int i,l=0;
   char s[30];
   printf("ENTER THE STRING AND PRESS ENTER: \n");
   scanf("%[^\n]s",&s);
   for(i=0;s[i]!='\0';i++)
   l++;
   printf("The string length is %d",l);
   return 0;	
}
