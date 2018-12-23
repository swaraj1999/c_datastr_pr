#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *pre;
	struct node *next;	
}s1;
s1 *head;
s1 *create()
{
	s1 *p;
	p=(s1 *)malloc(sizeof(s1));
	return p;
}
void insert()
{
	s1 *n,*ptr,*ptr1;
	n=create();
	n->next=NULL;
	n->pre=NULL;
	if(head==NULL)
	{
		head=n;
		printf("Enter the node data = ");
		scanf("%d",&n->data);
	}
	else
	{
		int key;
		printf("Enter the key value = ");
		scanf("%d",&key);
		ptr=head;
		while(ptr->next!=NULL && ptr->data!=key)
		{
			ptr=ptr->next;
		}
		if(ptr->next==NULL)
		{
			ptr->next=n;
			n->pre=ptr;
			n->next=NULL;
			printf("Enter the node data = ");
			scanf("%d",&n->data);
		}
		else
		{
			n->next=ptr->next;
			ptr->next->pre=n;
			n->pre=ptr;
			ptr->next=n;
			printf("Enter the node data = ");
			scanf("%d",&n->data);	
		}
	}
}
void del()
{
	s1 *ptr,*ptr1,*ptr2;
	int key;
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	printf("Enter the key value = ");
	scanf("%d",&key);
	ptr=head;
	while(ptr->data!=key && ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	if(ptr==head)
	{
		ptr1=NULL;
		ptr2=ptr->next;
		ptr2->pre=ptr1;
		head=ptr2;
	}
	else if(ptr->data==key && ptr->next!=NULL)
	{
		ptr1=ptr->pre;
		ptr2=ptr->next;
		ptr1->next=ptr2;
		ptr2->pre=ptr1;
	}
	else if(ptr->next==NULL)
	{
		ptr1=ptr->pre;
		ptr2=NULL;
		ptr1->next=ptr2;
	}
}
void display()
{
	s1 *ptr1;
	ptr1=head;
	if(ptr1==NULL)
		printf("linked list is empty");
	printf("The linked list is = ");
	while(ptr1!=NULL)
	{
		printf("%d  ",ptr1->data);
		ptr1=ptr1->next;
	}
	printf("\n");
}
main()
{
	int c;
	A:
	printf("1.Insert at any position\n2.Delete any position\n3.Display\n");
	printf("Enter your choice = ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			insert();
			break;
		case 2 :
			del();
			break;
		case 3 :
			display();
			break;
		default :
			printf("Wrong Choice !!!");
	}
	goto A;
}
