

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}n1;
int count=0;
struct node *head;
struct node* create();
void insert();
void display();
struct node* create()
{
    count++;
    struct node *temp;
    temp= (struct node*)malloc(sizeof(struct node));
    return (temp);
}
void insert()
{
    struct node *newnode, *ptr;
    newnode=create();
    if(newnode==NULL)
        printf("No node created...");
    else
    {
        printf("Enter a element to the node = ");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        if(head==NULL)
            head=newnode;
        else
        {
            ptr=head;
            while (ptr->link!=NULL)
                ptr=ptr->link;
            ptr->link=newnode;
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
        printf("The Number of nodes in the list is = %d\n",count);
        printf("The link list is =\n");
        while(ptr1!=NULL)
        {
            printf("%d\t",ptr1->data);
            ptr1=ptr1->link;
        }
    }
}
void main()
{
    int c;
A:
    printf("\nThe manu...|||||\n1.insert data to a node>\n2.display>>\n3.exit>>>");
    printf("\nEnter the choice = ");
    scanf("%d",&c);
    switch(c)
    {
        case 1 :
            insert();
            break;
        case 2 :
            display();
            break;
        case 3 :
            exit(0);
        default :
            printf("Wrong Choice...");
    }
    goto A;
}
