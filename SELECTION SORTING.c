#include<stdio.h>
int main()
{
	int arr[10],i,j,n,min;
	printf("ENTER THE NUMBER OF ELEMENTS AND PRESS ENTER: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("THE SORTING ORDER IS: \n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}
