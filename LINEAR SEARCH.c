#include<stdio.h>
int main()
{
	int arr[10], key, found=0, n, i;
	printf("ENTER THE NUMBER OF ELEMENTS AND PRESS ENTER: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
	    scanf("%d",&arr[i]);
	}
	printf("ENTER THE ARRAY ELEMENT YOU WANT TO SEARCH AND PRESS ENTER: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			found++;
			break;
		}
	}
	if(found==0)
	printf("KEY IS NOT FOUND");
	else
	printf("%d IS FOUND AT %d POSITION",key, i);
	return 0;
}
