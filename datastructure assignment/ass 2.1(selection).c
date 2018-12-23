#include<stdio.h>
int main()
{
	int arr[100],n,i,j,pos,swap;
	printf("enter the number of elements..");
	scanf("%d",&n);
	printf("enter the integers..");
	for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	
}
    for(i=0;i<(n-1);i++)
    {
    	pos=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[pos]>arr[j])
    		{
    			pos=j;
			}
			
		}
		if(pos!=i)
		{
			swap=arr[i];
			arr[i]=arr[pos];
			arr[pos]=swap;
		}
	}
	printf("the sorted array..");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
