#include<stdio.h>
int main()
{
	int a[50],i,n,temp,j;
	printf("enter the size of array,,");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nthe sorted array is\n\t");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",a[i]);
	}
}
