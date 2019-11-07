#include<stdio.h>
#include<stdlib.h>

int merge_sort(int A[],int p,int r)
{
	//p=low, r=high, q=mid
	
	int q;
	if(p<r)
	{
		q=((p+r)/2);
		merge_sort(A,p,q);
		merge_sort(A,q+1,r);
		merge(A,p,q,r);
	}
}

int merge(int A[],int p,int q,int r)
{
	int n1,n2,a1[20],a2[20],i,j,k;
	n1=q-p+1;
	n2=r-q;
	for(i=1;i<=n1;i++)
	{
		a1[i]=A[p+i-1];
	}
	for(j=1;j<=n2;j++)
	{
		a2[j]=A[q+j];
	}
	a1[i]=9999;
	a2[j]=9999;
	i=1,j=1;
	for(k=p;k<=r;k++)
	{
		if(a1[i]<=a2[j])
		{
			A[k]=a1[i];
			i=i+1;
		}
		else
		{
			A[k]=a2[j];
			j=j+1;
		}
	}
}


void main()
{
	int A[20],i,n;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	printf("Enter the array element = ");
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
		
	merge_sort(A,1,n);
	printf("After sorting the list =\n");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",A[i]);
	}
}
