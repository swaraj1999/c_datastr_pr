
#include<stdio.h>
int main()
{
	int a[20][20],i,j,m,n,trans[20][20];
	printf("enter thw size of array..");
	scanf("%d %d",&m,&n);
	printf("enter the array elements..");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("the transpose of the matrix\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		if(	a[i][j]!=trans[i][j])
			break;
        }
	if(j!=m)
	{
		break;
	}
}
	if(i==m)
	{
		printf("the matrix is symmetric..");
	}
	else
	{
		printf("not symmetric");
	}
	
}
