#include<stdio.h>
#include<stdlib.h>
 
struct node
{
	int data;
	struct node *link;
}*head;
//int count;
//struct node*head;
struct node*getnode()
{
	//count++;
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	
	return p;
}

void insertbeg_sl()
{

	
	struct node *newnode, *ptr;
		newnode=getnode();
	printf("Enter a new node element\n");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if(head==NULL)
	head=newnode;
	else
	{
		ptr=head;
		newnode->link=ptr;
		head=newnode;
	}
}

void insertend_sl()
{
	struct node*newnode,*ptr;
	newnode=getnode();
	newnode->link=NULL;
	if(newnode==NULL)
	{
		printf("insufficient memory!!");
	}
	else
	{
	printf("enter data..");
	scanf("%d",newnode->data);
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		ptr=head;
		 while (ptr->link!=NULL)
	  	ptr=ptr->link;
		  ptr->link=newnode;	
		
	}
}
void insertany_sl()
 {
	struct node*newnode,*ptr;
	int key;
	printf("enter key..>>");
	scanf("%d",&key);
	
	printf("enter data..");
	scanf("%d",newnode->data);
	newnode=getnode();
	if(newnode==NULL)
	{
		printf("insufficient memory!!");
	}
	else
	{
		ptr=head;
		while((ptr->data!=key)&&(ptr->link!=NULL))
		{
			ptr=ptr->link;
		}
		if(ptr->data=key)
		{
			newnode->link=ptr->link;
			ptr->link=newnode;
			newnode->link=NULL;
		}
		else
		{
			printf("key not found..!Q!");
		}	
	}
}
void main()
{
  int n,p;
  int s;
  while(1)
  {
      printf("\n\n");
    printf("\t\t\t 1. to insert at begining\n");
    printf("\t\t\t 2. to insert end\n");
    printf("\t\t\t 3. to delete any position\n");
    printf("\t\t\t 4. to \n");
    printf("\t\t\t 5. to exit\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch (n) {
      case 1:
      printf("insert node at begining..");
      insertbeg_sl();
      break;
      case 2:
      printf("insert at end..");
      insertend_sl();
        break;
        case 3:
        printf("insert at any position..");
        insertany_sl();
    
        break;
        case 4:
        
        break;
        case 5:display();
    
        break;
        default:
        printf("You enter wrong choice\n");
    }
  }
}
void display()
{
    struct node *ptr1;
    if(head==NULL)
    {
    	printf("Linked list is empty\n");
	}
	else
	{
	  ptr1=head;
	printf("The link list is =\n");	
    while(ptr1!=NULL)
    {
        printf("%d\t",ptr1->data);
        ptr1=ptr1->link;
    }
   }
   printf("\n");
}
}
