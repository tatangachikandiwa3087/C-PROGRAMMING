#include<stdio.h>
int main()
{
	int arr[10],key,mid,h,l,i,n,found=0;
	printf("ENTER THE NUMBER OF ELEMENTS AND PRESS ENTER: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
		scanf("%d",&arr[i]);
	}
	printf("ENTER THE ARRAY ELEMENT YOU WANT TO SEARCH AND PRESS ENTER: ");
	scanf("%d",&key);
	l=0,h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr[mid])
		{
			found++;
			printf("%d IS FOUND AT POSITION %d",key,mid);
			break;
		}
		else if(key<arr[mid])
		{
			h=mid-1;
		}
		else
		l=mid+1;
	}
	if(!found)
	printf("%d IS NOT FOUND",key);
	return 0;
}
