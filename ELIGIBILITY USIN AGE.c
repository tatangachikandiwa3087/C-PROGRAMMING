#include<stdio.h>
int main()
{
	int age;
	printf("ENTER THE AGE AND PRESS ENTER: ");
	scanf("%d",&age);
	if(age<18)
	printf("YOU ARE NOT YET ELIGIBLE");
	else
	printf("YOU ARE ELIGIBLE");
	return 0;
	
}
