#include<stdio.h>
#include<math.h>
int main()
{
	float u,t,s, a;
	printf("ENTER THE INITIAL SPEED AND PRESS ENTER: ");
	scanf("%f",& u);
	printf("ENTER THE TIME TAKEN AND PRESS ENTER: ");
	scanf("%f",& t);
//	printf("ENTER THE ACCELARATION AND PRESS ENTER: ");
	//scanf("%f",& a);
	a=9.81;
	s=u*t+(a*pow(t,2))/2.0;
	printf("THE DISPLACEMENT IS %f",s);
	return 0;
}
