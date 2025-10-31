#include<stdio.h>
int main()
{
	int arr[10],n,i;
	printf("ENTER THE VALUE OF n AND PRESS ENTER");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER");
    	scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("THE REVERSAL OF THE ARRAY IS:");
		printf("%d\t",arr[i]);
	}
	return 0;
}
