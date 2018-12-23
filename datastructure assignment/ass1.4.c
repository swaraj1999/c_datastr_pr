#include<stdio.h>
int main()
{
	int i,n,a[100],search;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	printf("enter the array elements : "); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to search\n\t");
	scanf("%d",&search);
	for(i=0;i<n;i++)
		if(a[i]==search) {
			printf("\tthe item is found at %d\t",i+1);
			break;
		}

	if (i==n) {
		printf("\tthe item is not found\t");
	}
}
