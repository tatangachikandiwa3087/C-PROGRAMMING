#include<stdio.h>
int main()
{
	float fahrenheit, celcius;
	printf("ENTER THE FAHRENHEITS AND PRESS ENTER");
	scanf("%f",&fahrenheit);
	celcius = (fahrenheit - 32) * 5 / 9;
	printf("THE CELCIUS IS %f",celcius);
	return 0;
}
