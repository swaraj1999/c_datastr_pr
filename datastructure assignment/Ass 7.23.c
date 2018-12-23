#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}n1;
struct node *head;
struct node * create()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	return p;
}
void insert()
{
	struct node *n,*ptr;
	n=create();
	if(n==NULL)
	{
		printf("Node not created");
	}
	printf("Enter the data = ");
	scanf("%d",&n->data);
	n->link=NULL;
	ptr=head;
	if(ptr==NULL)
		head=n;
	else
	{
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=n;
		n->link=NULL;
	}
}
void display()
{
	struct node *ptr1;
	ptr1=head;
	while(ptr1!=NULL)
	{
		printf("%d\n",ptr1->data);
		ptr1=ptr1->link;
	}
}
void reverse()
{
	struct node *m,*ptr1,*ptr2,*ptr3;
	m=head;
	if(m!=NULL)
	{
		ptr1=m;
		ptr2=m->link;
		m=m->link;
		ptr1->link=NULL;
		while(m!=NULL)
		{
			m=m->link;
			ptr2->link=ptr1;
			ptr1=ptr2;
			ptr2=m;
		}
		head=ptr1;
	}
	else
		printf("link not exist....\n");
}
main()
{
	int p;
	A:
	printf("1 to Enter some data to the node---->\n2 to Display the LInk list----->\n3 to Reverse the link list\n4 to Exit---->");
	printf("\nEnter your choice = ");
	scanf("%d",&p);
	switch(p)
	{
		case 1 :
			insert();
			break;
		case 2 :
			display();
			break;
		case 3 :
			reverse();
			break;	
		case 4 :
			exit(0);
			break;
		default :
			printf("Wrong Choice.....");
	}
	goto A;
}

