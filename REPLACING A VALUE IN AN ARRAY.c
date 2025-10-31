#include<stdio.h>
int main()
{
	int arr[10],n,i, newvalue,pos;
	printf("ENTER THE VALUE OF n AND PRESS ENTER: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
    {
    	printf("ENTER THE ARRAY ELEMENT AND PRESS ENTER: ");
    	scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	scanf("%d",&newvalue);
	arr[pos]=newvalue;
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}
	
	
