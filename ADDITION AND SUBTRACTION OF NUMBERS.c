#include<stdio.h>
int main()
{
	int a, b, sum, difference;
	printf("ENTER THE FIRST NUMBER AND PRESS ENTER: ");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER AND PRESS ENTER: ");
	scanf("%d",&b);
	sum=a+b;
	difference=a-b;
	printf("THE SUM OF %d and %d is %d",a,b,sum);
	printf("\n");
	printf("THE DIFFERENCE OF %d and %d is %d",a,b,difference);
	return 0;
}
