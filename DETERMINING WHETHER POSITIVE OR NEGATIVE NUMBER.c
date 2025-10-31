#include<stdio.h>
int main()
{
	int number;
	printf("ENTER ANY NUMBER AND PRESS ENTER: ");
	scanf("%d",&number);
	if(number<0)
	printf("THE NUMBER IS A NEGATIVE NUMBER");
	else
	printf("THE NUMBER IS A POSITIVE NUMBER");
	return 0;
}
