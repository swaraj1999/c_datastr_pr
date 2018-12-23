#include<stdio.h>
int main()
{
	int i,n,start,end,mid,key,a[10],flag=0,j,temp;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the  elements..");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
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
	printf("enter the element to search");
	scanf("%d",&key);
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;   
		if(a[mid]==key)
		{
			flag=1;
			break;
	   }
	   
	   	
		if(a[mid]>key)
	  		end=mid-1;
	  
	   if(a[mid]<key)
	  {
	    start=mid+1;
	  }
	
		
	}
	if(flag==1)
		printf("%d found at %d position",key,mid+1);
	else
		printf("!!NOT FOUND!!");
	
}
