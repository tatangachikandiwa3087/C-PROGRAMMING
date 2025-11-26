#include<stdio.h>
int main()
{
   int i,k,j;
   char s[30],p[30];
   printf("ENTER THE STRING AND PRESS ENTER: \n");
   scanf("%s\n",&s);
   printf("ENTER THE STRING AND PRESS ENTER: \n");
   scanf("%s",&p);
   for(i=0;s[i]!='\0';i++)
   for(j=0;p[j]!='\0';j++)
   s[i+j]=p[j];
   s[i+j]='\0';
   printf("%s",s);
   return 0;
}
