#include<stdio.h>
int main()
{
	int b, h;
	float area;
	printf("ENTER THE VALUE OF BASE AND PRESS ENTER: ");
	scanf("%d",&b);
	printf("ENTER THE VALUE OF HEIGHT AND PRESS ENTER: ");
	scanf("%d",&h);
	area=(b*h)/2;
	printf("THE AREA OF THE TRIANGLE IS %f",area);
	return 0;
}
