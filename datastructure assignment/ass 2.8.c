#include<stdio.h>
int main()
{
	int i,j,m,n,a[20][20],flag=0;
	printf("enter the size of array..");
	scanf("%d %d",&m,&n );
	printf("the elelments of the array..");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}
	printf("the matrix is..\n");
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
	for(j=0;j<m;j++)
	{
		if(i>j && a[i][j] !=0)
		{
			printf("matrix is not upper triangular\n");
			exit(0);
		}
   }	
}

printf("MATRIX IS UPPER TRIANGULAR\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
}
}



