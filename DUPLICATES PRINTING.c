#include<stdio.h>
int main()
{
	int arr[100],n,i,j;
	printf("ENTER THE NUMBER OF ELEMENTS AND PRESS ENTER: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
		scanf("%d",&arr[i]);
	}
	printf("DUPLICATE ELEMENTS IN THE ARRAY ARE: \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d\t",arr[i]);
			    break;
			}
		}
	}
}
