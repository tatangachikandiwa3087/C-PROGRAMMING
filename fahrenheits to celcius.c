#include<stdio.h>
int main()
{
	float temp;
	printf("ENTER THE TEMPERATURE IN DEGREES CELCIUS AND PRESS ENTER");
	scanf("%f",&temp);
	float farenheit;
	farenheit=temp-32.0*(5.0/9.0);
	printf("THE TEMPERATURE IN FARENHEITS IS %f",farenheit);
	return 0;
}
