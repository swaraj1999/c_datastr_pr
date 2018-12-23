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
ins_l(int x)
{


    if((left==0 && right==size-1)||(left==right+1))
    {
        printf("The deque is full\n");
        exit(0);
    }
    if(left==-1)
    {
        left=0;
        right=0;
    }
    else
    {
        if(left==0)
        {
            left=size-1;
        }
        else
        {
            left=left-1;
        }
    }
    dq[left]=x;
	
} 
void main()
{
  int n,item;
  int itm;
  while(1)
  {
      printf("\n");
    printf(" 1. to insert right\n");
    printf(" 2. to insert left\n");
    printf(" 3. to delete left\n");
    printf(" 4. to display\n");
    printf(" 5. to exit\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch (n) {
      case 1:
      printf(" insert_Right\n");
      scanf("%d",&item);
      ins_r(item);
      break;
      case 2:
          printf("  inserted left\n");
          scanf("%d",&itm);
        ins_l(itm);
        break;
        case 3:
        itm=del_l();
        //printf(" deleted element is=%d\n",itm);
        break;
        case 4:
        display();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf(" wrong choice..!!\n");
    }
  }
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
