#include<stdio.h>
int main()
void ToLowerCase();
{
     ToLowerCase();
     return 0;
}
void ToLowerCase()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]<=90&&str[i]>=65)
        {
            str[i]=str[i]-32;
        }
        else
        str[i]=str[i];
    }
    printf("%s",str);
   
}
