#include<stdio.h>
#include<stdlib.h>
#define size 50
int dq[size];
int left=-1,right=-1;

ins_r(int x)
{
	if((left==right+1)||(right==size-1) )
	{
		if(left !=0 && right ==size-1)
		{
			right=0;
			dq[right]=x;
		}
		else
		printf("full condition\n");
	}
	else if(left=-1&& right==-1)
	{
		left=0;
		right=0;
		dq[right]=x;
	}
	else
	{
		right++;
		dq[right]=x;	
	}
}
del_l()
{
	int x;
	if (left==-1)
	{
		printf("dq is empty..");
		exit(0);
	}
	x=dq[left];
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
del_r()
{
	int x;
	if(right==-1)
	{
		printf("dq is empty");
	}
	x=dq[right];
	if(left==right)
	{
		left=-1;
		right=-1;
	}
	else
	{
		if(right==0)
		  right=size-1;
		else
		  right =right-1;  
	}
}
void main()
{
	int n,i,item;
	printf("\nINPUT RESTRICTED DEQUE");
	choice:;
	printf("\nenter your choices\n\n1: insert from RIGHT\n2: delete from RIGHT \n3:delete from LEFT\n 4:display\n5: exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the data ");
		scanf("%d",&item);
			
		     ins_r(item);
			break;
		case 2:
			del_r();
			break;
		case 3:
			del_l();
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
    goto choice;  
}
void display()
{
  int l,R;
  l=left;
  R=right;
  if(l==-1)
  {
    printf("Deque is empty\n");
    exit(0);
  }
  if(l<=R)
  {
    while(l<=R)
    {
      printf("%d\n",dq[l]);
      l++;
    }
  }
    else
    {
      while(l==size-1)
      {
        printf("%d\n",dq[l]);
        l++;
      }
      l=0;
      while(l<=R)
      {
        printf("%d\n",dq[l]);
        l++;
      }
    }

   	
}
