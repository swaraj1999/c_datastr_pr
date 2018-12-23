#include<stdio.h>
#include<stdlib.h>
struct node
{
    char name[20];
    char branch[20];
    int sem;
    char ph[20];
    struct node *link;
}n1;
struct node *Header;
struct node* createnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return (p);
}
void insert_beg()
{
	struct node *new_node, *ptr;
	new_node=createnode();
	fflush(stdin);
	printf("Enter a name of the student \n");
	gets(new_node->name);
	fflush(stdin);
	printf("Enter a branch of the student \n");
	gets(new_node->branch);
	fflush(stdin);
	fflush(stdin);
	printf("Enter sem of the student \n");
	scanf("%d",&new_node->sem);
	fflush(stdin);
	printf("Enter ph.no of the student \n");
	gets(new_node->ph);
	fflush(stdin);
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
void display()
{
    struct node *ptr3;
    if(Header==NULL)
    {
    	printf("Linked list is empty\n");
	}
	else
	{
	  ptr3=Header;	
    while(ptr3!=NULL)
    {
        printf("%s\n",ptr3->name);
        printf("%s\n",ptr3->branch);
        printf("%d\n",ptr3->sem);
        printf("%s\n",ptr3->ph);
        ptr3=ptr3->link;
    }
   }
   printf("\n");
}
void delet()
{
	struct node *temp;
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
 main()
{
    int n;
    while(1)
    {
        printf("\t\t 1. to insert begin\n");
        printf("\t\t 2. to Delete begin\n");
        printf("\t\t 3. to view the begining position element\n");
        printf("\t\t 4. to exit\n");
        printf("Enter your choice\t");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert_beg();
            break;
        case 2:
			delet();
			break;    
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You entered wrong choice\n");
        }
    }
    return 0;
}

