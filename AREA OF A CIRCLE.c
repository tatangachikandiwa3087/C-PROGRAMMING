#include<stdio.h>
int main()
{
	float r, area;
	printf("ENTER THE RADIUS VALUE AND PRESS ENTER: ");
	scanf("%f",&r);
    float pi=3.1415;	
    area=pi*r*r;
    float acc=2*pi*r;
	printf("AREA OF THE CIRCLE IS %f\nAREA OF CIRCUMFERENCE OF THE CIRCLE IS %f",area, acc);
	return 0;	
}
