#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
	struct node *pre;
}s;
s *head;
s *create()
{
	s *p;
	p=(s *)malloc(sizeof(s));
	return p; 
}
void insert()
{
	s *nw;
	nw=create();
	if(nw==NULL)
		printf("Node not created");
	else
	{
		if(head==NULL)
		{
			head=nw;
			nw->pre=NULL;
			nw->next=NULL;
			printf("Enter the data = ");
			scanf("%d",&nw->data);
		}
		else
		{
			nw->next=head;
			head->pre=nw;
			head=nw;
			printf("Enter the data = ");
			scanf("%d",&nw->data);
		}
	}
	
}
void display()
{
	s *ptr;
	if(head==NULL)
	{
		printf("Linked list not exist");
	}
	printf("The linked list is = ");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->data);
		ptr=ptr->next;
	}
}
main()
{
	int n;
	printf("Enter the number of nodes = ");
	scanf("%d",&n);
	while(n>0)
	{
		insert();
		n--;
	}
	display();
}
