#include<stdio.h>
int main()
{
	int a, b, i, j;
	float c;
	double d, e;
	scanf("%d%d%d%f%1f",&a,&b,&i,&c,&d);
	e=(a/b*c)-b+(a*d/3);
	j=(i++)+(++i);
	printf("e=%1f\n",e);
	printf("j=%d\n",j);
	return 0;
}
