#include<stdio.h>
#include<math.h>
int a[50],n;

void heap_sort()
{
	int t,i;
	build_max_heap();
	for(i=n;i>1;i--)
	{
		t=a[i];
		a[i]=a[1];
		a[1]=t;
		n--;
		max_heapify(1);
	}
}


void build_max_heap()
{
	int i;
	for(i=floor(n/2);i>=1;i--)
	max_heapify(i);
} 


void max_heapify(int i)
{
	int l,r,largest,t;
	l=2*i;
	r=2*i+1;
	if(l<=n && a[i]<a[l])
		largest=l;
	else
		largest=i;
	if(r<=n && a[largest]<a[r])
	largest=r;
	if(largest!=i)
	{
		t=a[largest];
		a[largest]=a[i];
		a[i]=t;
		max_heapify(largest);
	}
}


void main()
{
	int i,len;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	len=n;
	printf("Enter the elements: ");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	heap_sort();
	printf("Elements after sorting: ");
	for(i=1;i<=len;i++)
	printf("%d ",a[i]);
}
