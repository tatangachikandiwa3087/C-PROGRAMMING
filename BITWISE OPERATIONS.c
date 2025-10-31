#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND: %d\n",c);
	c=a|b;
	printf("Bitwise OR: %d\n",c);
	c=a^b;
	printf("Bitwise EXOR: %d\n",c);
	c=a>>b;
	printf("Bitwise RIGHT SHIFT: %d\n",c);
	c=a<<b;
	printf("Bitwise LEFT SHIFT: %d\n",c);
	return 0;
}
