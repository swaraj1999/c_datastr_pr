#include<stdio.h>
#include<stdlib.h>
#define size 3
int front=0,rear=0,q[size];

void enqueue(int x)
{
	int next;
	if(front==0)
	{
		front=1;
		rear=1;
		q[rear]=x;
			printf("\n %d\n",rear);
	}
	else
	{
		next=(rear%size)+1;
		
		if(next!=front)
		{
			rear=next;
			q[rear]=x;
		}
		else
		{
			printf("q is full");
			exit(0);
		}
	}
	printf("\n %d   %d\n",rear,front);
}
void dequeue()
{
		int item;
	if(front==0 )
    printf("que is empty..");
    else
    
    
    {
    	item=q[front];
    	if(front==rear)
    	{
    		front=0;
    		rear=0;
		}
		else
    {
			front=(front%size)+1;
    	printf("\n %d\n",front);
    }
	}
}
void display()
{
	
	
    int i;
   

        printf("Queue is : \n");
        if(front<=rear)
        {
		
		for (i = front; i <= rear; i++)
            printf("%d ", q[i]);
        
		}
		else
		{
			for(i=front;i<=size;i++)
			   printf("%d ", q[i]);
			  
			   for(i=1;i<=rear;i++)
			   printf("%d ", q[i]);
			
		}

}
int main()
{
    int choice,c;
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
            printf("enter..>>");
			scanf("%d",&c);	
            enqueue(c);
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
