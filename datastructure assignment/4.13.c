#include<stdio.h>
#define size 100
int main()
{
	int a[size],arr[size],i,top=-1,x;
	printf("enter the string..");
	gets(a);
	while(a[size]!=0)
	{
			if(top>=size-1)
	{
		printf("the stack is full....overflow");
		exit(0);
	}
	else
	{
	 top=top+1;
    
	 arr[size]=a[size];
    }
   }
   for(i=top;i<0;i++)
   {
   
		if(top<0)
	{
		printf("stack is empty..underflow");
		exit(0);
	}
	else
	{
		x=a[top];
		top=top-1;
	}
    printf("%c",x);
    
    
	}
}
