#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 10
void push(char);
char pop();
int item,top=-1;
char ar[size];   
 
void push(char x)
{

	if(top>=size-1)
	{
		printf("the stack is full....overflow");
		exit(0);
	}
	else
	{
	 top=top+1;
    
	 ar[top]=x;
}
}

char pop()
{
	
	if(top<0)
	{
		printf("stack is empty..underflow");
		exit(0);
	}
	else
	{
		item=ar[top];
		top=top-1;
	}
	
	return(item);
}
 
int pr(char elem)
{                 
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}
 

