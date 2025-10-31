#include<stdio.h>
int main()
{
	int arr[10],n,i, min,max;
	printf("ENTER THE VALUE OF n AND PRESS ENTER: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
    {
    	printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
    	scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	printf("MIN=%d, MAX=%d", min, max);
	return 0;
}
	
	
