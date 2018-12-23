#include<stdio.h>
#include<stdlib.h>
int hsize;
int a[20];
void maxheap(int i)
{
	int l,r,temp,lar;
	l=2*i;
	r=2*i+1;
	if(l<=hsize && a[i]<a[l])
	{
		lar=l;
	}
	else
	{
		lar=i;
	}
	if(r<=hsize && a[r]>a[lar])
    {
    	lar=r;
	}
	if(lar!=i)
	{
		temp=a[i];
		a[i]=a[lar];
		a[lar]=temp;
		maxheap(lar);
	}
}
void buidmaxheap(int a[])
{
	int i;
	for(i=(hsize/2);i>=1;i--)
	{
		maxheap(i);
	}
}
void heapsort(int n)
{
	int i,r,l;
	int temp;
	buildmaxheap();
	for(i=r;i>=l;i--)
	{
		temp=a[i];
		a[l]=a[i];
		a[i]=temp;
		hsize=hsize-1;
		maxheap(l);
	}
}
int main()
{
	int r,i,n;
	printf("enter the size");
	scanf("%d",&n);
	printf("elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	hsize=n;
	heapsort(n);
	printf("sorted array");
		for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
}
	
}
