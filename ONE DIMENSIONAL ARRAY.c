#include<stdio.h>
int main()
{
	int arr[50];
	int n,sum,i;
	printf("ENTER THE VALUE OF n AND PRESS ENTER");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER ELEMENT OF THE ARRAY AT POSITION");
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	sum+=arr[i];
	printf("The sum is %d", sum);
	return 0;
}
