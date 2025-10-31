#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("ENTER THE PRINCIPAL VALUE AND PRESS ENTER: "); 
	scanf("%f",&p);
	printf("ENTER THE RATE VALUE AND PRESS ENTER: ");
	scanf("%f",&r);
	printf("ENTER THE TIME VALUE AND PRESS ENTER: ");
	scanf("%f",&t);
	ci=(p*pow(1+r/100.0,t))-p;
	printf("The compound interest is %f",ci);
	return 0;
}
