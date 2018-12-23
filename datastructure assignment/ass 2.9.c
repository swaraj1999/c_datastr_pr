#include<stdio.h>
int main()
{
	int i,j,m,n,k=0,a[20][20],b[20][20],x;
	printf("enter the array elements..");
	scanf("%d %d",&m,&n);
	printf("the elements are..");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix..\n");
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
			if(a[i][j]!=0)
			{
				b[0][k]=i;
				b[1][k]=j;
				b[2][k]=a[i][j];
				k++;
				
			}
		}
	}
		x=(m*n)/2;
	if(x>k)
	{

	printf("the sparse matrix is..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
	
}
