#include<stdio.h>
int main()
{
	float temp;
	printf("ENTER THE TEMPERATURE IN DEGREES CELCIUS AND PRESS ENTER");
	scanf("%f",&temp);
	float farenheit;
	farenheit=(9.0/5.0)*temp+32.0;
	printf("TTHE TEMPERATURE IN FARENHEITS IS %f",farenheit);
	return 0;
}
