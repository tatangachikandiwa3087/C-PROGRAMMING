#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("ENTER THE PRINCIPAL VALUE AND PRESS ENTER: ");
	scanf("%f",& p);
	printf("ENTER THE RATE VALUE AND PRESS ENTER: ");
	scanf("%f",& r);
	printf("ENTER THE TIME VALUE AND PRESS ENTER: ");
	scanf("%f",& t);
	si=(p*r*t)/100.0;
	printf("THE SIMPLE INTEREST IS %f",si);
	return 0;
}
