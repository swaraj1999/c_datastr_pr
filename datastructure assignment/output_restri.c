//output restricted//
#include<stdio.h>
#include<stdlib.h>
#define size 5
int dque[size];
int right=-1;
int left= -1;


insertRi(int item)
{
	if((left==right+1)||(right==size-1) )
	{
		if(left !=0 && right ==size-1)
		{
			right=0;
			dque[right]=item;
		}
		else
		printf("full condition\n");
	}
	else if(left=-1&& right==-1)
	{
		left=0;
		right=0;
		dque[right]=item;
	}
	else
	{
		right++;
		dque[right]=item;	
	}
}
insertLf(int item)
{
	if((left==0 && right==size-1) || (left==right+1))
	{
		printf("full condition\n");
	}
	else
	{
		if(left==-1)
		{
			left=0;
	    	right=0;
		}
		else
		{
			if(left==0)
	         left=size-1;
			else
			left=left-1;
		}
	}
	dque[left]=item;
}
deleLf()
{
	int item;
	if(left==-1)
	{
		printf("empty");
	}
	item=dque[left];
	if(left==right)
	{
		left=-1;
		right=-1;
	}
	else
	{
		if(left==size-1)
		{
			left=0;
		}
		else
		{
			left=left+1;
		}
	}
}
display()
{
	int f,r,i;
	f=left;
	r=right;
	if(f==-1)
	{
		printf("empty\n");
	}
	if(f>r)
	{
		for(i=f;i<size;i++)
		{
			printf("\n%d\t",dque[i]);
		}
		for(i=0;i<=r;i++)
		{
			printf("\n%d\t",dque[i]);
		}
	}
	else
	{
		for(i=f;i<=r;i++)
		printf("\n%d\t",dque[i]);
	}
}
void main()
{
	int n,i,item;
	printf("OUTPUT RESTRICTED DEQUE\n");
	loop: ;
	printf("\nenter your choices 1: insert from RIGHT\n2: insert from LEFT\n3:delete from LEFT\n4: display\n5: exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the data ");
		scanf("%d",&item);
			
		     insertRi(item);
			break;
		case 2:
			printf("enter the data ");
		scanf("%d",&item);
			insertLf(item);
			break;
		case 3:
			deleLf();
			break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
			break;
		default :
			printf("\nenter valid choices\n");
    }
    goto loop;
    
}

