#include<stdio.h>
int main()
{
	int a,b,c, big;
	printf("ENTER ANY RANDOM NUMBER AND PRESS ENTER: ");
	scanf("%d",&a);
	printf("ENTER ANY RANDOM NUMBER AND PRESS ENTER: ");
	scanf("%d",&b);
	printf("ENTER ANY RANDOM NUMBER AND PRESS ENTER: ");
	scanf("%d",&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("THE BIGGEST NUMBER IS %d",big);
	return 0;
}
