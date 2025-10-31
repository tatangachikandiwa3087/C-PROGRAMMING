#include<stdio.h>
int main()
{
	int l, b;
	float area;
	printf("ENTER THE VALUE OF l AND PRESS ENTER: ");
	scanf("%d",&l);
	printf("ENTER THE VALUE OF b AND PRESS ENTER: ");
	scanf("%d",&b);
	area=l*b;
	printf("THE AREA OF THE RECTANGLE IS %f",area);
	return 0;
}
