#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct node *link;
}node;
node *Header;
node* createnode()
{
    node *p;
    p= (node*)malloc(sizeof(node));
    return (p);
}
void insert_beg()
{
	node *new_node, *ptr;
	new_node=createnode();
	printf("Enter a new node element\n");
	scanf("%d",&new_node->data);
	new_node->link=NULL;
	if(Header==NULL)
	Header=new_node;
	else
	{
		ptr=Header;
		new_node->link=ptr;
		Header=new_node;
	}
}
void insert_end()
{
    node *ptr, *t;
    ptr=createnode();
    printf("Enter a element to be insert end\n");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    if(Header==NULL)
    Header=ptr;
    else
    {
      t=Header;
	  while (t->link!=NULL)
	  	t=t->link;
		  t->link=ptr;	
	}   
}
void anyinsert_pos(int key)
{
	node *temp, *t;
	int X;
	temp=(node*)malloc(sizeof(node));
	printf("Enter the new node data\n");
	scanf("%d",&X);
	temp->link=NULL;
	if(temp==NULL)
	{
		printf("Insufficient memory\n");
		exit(0);
	}
	else
	{
		t=Header;
		while(t->data!=key && t->link!=NULL)
		{
			t=t->link;
		}
		if(t->data==key)
		{
			temp->link=t->link;
			t->link=temp;
			temp->data =X;
		}
		else
		printf("Key is not found\n");
	}
}
void indelet()
{
	node *temp;
	if(Header==NULL)
	{
		printf("No node exist\n");
		exit(0);
	}
	else
	{
		temp=Header;
	  	Header=Header->link;
	  	temp->link=NULL;
	  	free(temp);
    }
}
void enddelet()
{
	node *ptr, *ptr1;
	ptr=Header;
	if(ptr==NULL)
	{
		printf("Link is empty\n");
		exit(0);
	}
	else if(ptr->link==NULL)
	{
		Header=NULL;
	}
	else
	{
		while(ptr->link!=NULL)
		{
			if(ptr->link!=NULL)
			{
			ptr1=ptr;
			ptr=ptr->link;
			}
		}
		ptr1->link=NULL;
		free(ptr);
	}
}
void anydelete_node(int key)
{
    node *ptr, *ptr1;
    ptr=Header;
    if(Header==NULL)
    {
        printf("List is empty\n");
        exit(0);
    }
    else
    {
        if(ptr->data==key)
        {
            Header=Header->link;
            ptr->link=NULL;
            free(ptr);
        }
        else
        {
          while(ptr->link!=NULL && ptr->data!=key)
          {
            ptr1=ptr;
            ptr=ptr->link;
          }
           if(ptr->data==key)
           {
              ptr1->link=ptr->link;
              ptr->link=NULL;
              free(ptr);
           }
           else
            printf("Key is not found...Try again\n");
      }
    }
}
void display()
{
    node *ptr3;
    if(Header==NULL)
    {
    	printf("Linked list is empty\n");
	}
	else
	{
	  ptr3=Header;	
    while(ptr3!=NULL)
    {
        printf("%d\n",ptr3->data);
        ptr3=ptr3->link;
    }
   }
}
 main()
{
    int n,key,k;
    while(1)
    {
        printf("1. to insert begin\n2. to insert end\n3. to insert at any position\n4. to delete at begin\n5. to delete at end\n6. to delete any position\n7. to display\n8. Exit\n");
        printf("Enter your choice");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert_beg();
            break;
        case 2:
        	insert_end();
			break;
        case 3:
        	printf("Enter the key\n");
            scanf("%d",&key);
            anyinsert_pos(key);
            break;
        case 4:
			indelet();
			break;
		case 5:
			enddelet();
			break;
		case 6:
			printf("Enter the key(inserted elements)\n");
            scanf("%d",&k);
            anydelete_node(k);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("You entered wrong choice\n");
        }
    }
    return 0;
}
