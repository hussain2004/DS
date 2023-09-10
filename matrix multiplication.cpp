#include<stdio.h>
int main()
{
	int i,j,k,m,n,p,q;
	int a[50][50],b[50][50],c[50][50];
	printf("enter the no.of rows and columns in first matrix:\n");
	scanf("%d,%d",&m,&n);
	printf("enter the elements for first matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("first matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	printf("enter the no.of rows and columns in second matrix:\n");
	scanf("%d,%d",&p,&q);
	printf("enter the elements for second matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("second matrix is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
			printf("\n");
	}
	if(n!=p)
	{
		printf("cannot multiply");
	}
	else
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			int sum=0;
			for(k=0;k<m;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	printf("after multiplying:\n");
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
			printf("\n");
	}
	
	return 0;
	
}
