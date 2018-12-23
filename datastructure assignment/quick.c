#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[],int p,int r)
{
	int q,i,n;
	if(p<r)
	{
		q=part(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
	printf("sorted array is..");
}
int part(int a[],int p,int r)
{
	int x,i,j,temp1,temp2;
    x=a[r];
    i=p-1;
 for(j=p;j<=(r-1);j++)
 {
 	if(a[j]<=x)
 	{
 		i=i+1;
 		temp1=a[j];
 		a[j]=a[i];
 		a[i]=temp1;
	 }
}
 temp2=a[r];
 a[r]=a[i+1];
 a[i+1]=temp2;
 return(i+1);
	 	
}
 int main()
 {
 	int a[20],n,i;
 	printf("enter the no of elements in the array...>>>>");
 	scanf("%d",&n);
 	printf("enter array elements...>>>");
 	for(i=1;i<=n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 quicksort(a,1,n);

	for(i=1;i<=n;i++)
	{
		printf(" %d",a[i]); 
	}
	 
 }
