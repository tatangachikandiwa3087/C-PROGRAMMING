#include<stdio.h> 
int main()
{
	int a[10][10],b[10][10],co[10][10],r,c,i,j,x[10][10],k,t[j][i],sum;
	printf("enter the rows and columns and press enter: ");
	scanf("%d%d",&r,&c);
	//taking matrix a 
	printf("enter the elements of matrix a: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}/*
	//taking matrix b
	printf("enter the elements of matrix b: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}/*
	//addition performance
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			co[i][j]=a[i][j]+b[i][j];
		}
	}
	//displaying the sum
	printf("THE SUM IS: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",co[i][j]);
		}
		printf("\n");
	}
	//matrices multiplication
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=0;
			for(k=0;k<c;k++)
			{
				x[i][j]=x[i][j]+a[i][k]+b[k][j];
			}
		}
	}
	//displaying the product
	printf("THE PRODUCT IS: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",x[i][j]);
		}
		printf("\n");
	}*/
	//matrix transpose
	printf("THE TRANSPOSE OF A GIVEN MATRIX A: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	//displaying the matrix transpose
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}/*
	//trace of a square matrix
	printf("THE MATRIX MUST BE A SQUARE MATRIX\n");
	 for(i=0;i<r;i++)
	{
		    sum=sum+a[i][i];
	}
	printf("trace of the matrix: %d", sum);*/
	return 0;
}d
