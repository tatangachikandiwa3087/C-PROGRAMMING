#include<stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR AND PRESS ENTER: ");
	scanf("%d",&year);
	if(year%4==0)
	printf("THE YEAR IS A LEAP YEAR");
	else
	printf("THE YEAR IS NOT A LEAP YEAR");
	return 0;
}
