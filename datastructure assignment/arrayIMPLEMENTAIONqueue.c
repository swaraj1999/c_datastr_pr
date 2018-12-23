#include<stdio.h>
#include<stdlib.h>
#define size 44
int q[size] ;
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
 
void enqueue()
{
	int item;
	if(rear==size-1)
	printf("que is full..");
	else
	{
		printf("enter the element..");
		scanf("%d",&item);
		if(front==-1)
		front=0;
		rear=rear+1;
		q[rear]=item;
	}
}
void dequeue()
{
	int item;
	if(front==-1 && front>rear)
    printf("que is empty..");
    else
    
    
    {
    	item=q[front];
    	front=front+1;
	}
}
void display()
{
	
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    } 
} 
