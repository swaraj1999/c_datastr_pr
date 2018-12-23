#include<stdio.h>
int main()
{
	int a[10],b[10],j,k,i,flag=0,n,c,p;
	printf("enter the size of array ..");
	scanf("%d",&n);
	printf("enter the array elements..\n");
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<n;c++)
	{
		printf("%d  ",a[c]);
	}
	printf("\nthe sorted array is\n");
	b[0]=a[0];
	
	for(j=1;j<n;j++)
	{
        	k=a[j];
        	i=j-1;
            flag=1;
			while( flag==1)
			{
				if(k<b[i])
				{
					i=i-1;
					if(i==0)
					{
						flag=0;
					}
				}
				else
				flag=0;
       	     }
			
		p=j;
			while(p>i+1)
			{
				b[p]=b[p-1];
				p=p-1;
			}
			b[i+1]=k;
		}
		
		for(j=0;j<n;j++)
		printf("%d  ",b[j]);
		
	}
