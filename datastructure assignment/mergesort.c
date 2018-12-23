#include<stdio.h>
#include<stdlib.h>

int a[20];
void merge(int a[],int p,int q,int r)
{
	int n1,n2,i,j,k;
	int L[20],R[20];
	n1=(q-p+1);
	n2=(r-q);
	L[n1+1];
	R[n2+1];
	for(i=1;i<=n1;i++)
	{
		L[i]=a[p+i-1];
	}
	for(j=1;j<=n2;j++)
	{
		R[j]=a[q+j];
	}
	L[i]=7500;
	R[j]=7500;
	i=1;
	j=1;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i=i+1;
		}
		else
		{
			a[k]=R[j];
			j=j+1;
		}
	}	
}
void merge_sort(int a[],int p,int r)
{
	int q;
	
	if(p<r)
	{
		q=((p+r)/2);
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);

	}
}

int main()
{
	int n,i;
	printf("enter the number of elements..>>>>\n");
	scanf("%d",&n);
	printf("enter array elements..>>>>>>\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%d  ", a[i]);
	}
	merge_sort(a,1,n);
	printf("sorted array\n");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",a[i]);
	}	
}
