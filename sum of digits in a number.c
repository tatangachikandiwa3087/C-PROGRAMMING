#include<stdio.h>
int main()
{
	int number, sum=0;
	printf("ENTER ANY NUMBER AND PRESS ENTER: ");
	scanf("%d",& number);
	while(number!=0)
	{
		int rem=number%10;
		sum=sum+rem;
		number/=10;
	}
	printf("DIGIT SUM IS %d",sum);
	return 0;
}
