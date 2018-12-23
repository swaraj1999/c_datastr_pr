#include <stdio.h>
#include<stdlib.h>
#define size 10
void push(int);
int pop();
void palindrome();
void display();
int item,top=-1,a[size];
void push(int x)
{

	if(top>=size-1)
	{
		printf("the stack is full....overflow");
		exit(0);
	}
	else
	{
	 top=top+1;
    
	 a[top]=x;
}
}
void display()
{  int i;
	printf("the stack..\n");
	for(i=top;i>=0;i--)
	{
	
	printf("%d  ",a[i]);
	
    }
}
int pop()
{
	
	if(top<0)
	{
		printf("stack is empty..underflow");
		exit(0);
	}
	else
	{
		item=a[top];
		top=top-1;
	}
	
	
	return item;
}
void  palindrome()
{
	int i,f=0;
	for(i=0;i<=top;i++)
	{
		if(a[i]!=pop())
		{
			f=1;
			break;
		}
		
	}
	if(f==0)
	{
		printf("palindrom");
	}
	else
	{
		printf("wrong!!!");
	}
}

int main()
{

   int c;
	while(1)
	{
	printf("\n...........menu.............\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.palindrome\n");
	printf("4.display\n");
	printf("5.exit\n");
	   
	
	printf("enter your choice::");
	scanf("%d",&c);

	
	switch(c)
	{
		case 1: 
		    printf("enter the item to be pushed..");
		    scanf("%d",&item);
		    push(item);
		break;
		case 2:
	        item=pop();
	        printf("%d ",item);
	        break;
	    case 3:
	        palindrome();
	        break;
	    case 4:
	        display();
	        break;
	    case 5:
	        exit(0);
	    default:
	    	printf("invalid choice");
	}
   }
}
