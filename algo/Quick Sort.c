#include<stdio.h>
#include<stdlib.h>

void quick_sort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
	q=partition(A,p,r);
	quick_sort(A,p,q-1);
	quick_sort(A,q+1,r);
	}	
}

int partition(int A[],int p,int r)
{
	int x,i,j,t,k;
	x=A[r];
	i=p-1;
	for(j=p; j<=r-1; j++)
	{
		if(A[j]<=x)
		{
			i++;
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
	}
		k=A[r];
		A[r]=A[i+1];
		A[i+1]=k;
	return (i+1);
}

void main()
{
	int i,n;
	int A[20];
	printf("Enter the total no. of elements: ");
	scanf("%d",&n);
	
	printf("Enter the array: ");
	for(i=1;i<=n;i++)
	scanf("%d",&A[i]);
	
	quick_sort(A,1,n);
	
	printf("After sorting the array is: ");
	for(i=1;i<=n;i++)
	printf("%d ", A[i]);
}
