#include <stdio.h>
#include <stdlib.h>
 
void push(int);
void push2(int);
int pop();
int pop2();
void enqueue();
void dequeue();
void display();
void create();
 
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
 
void main()
{
    int ch;
 
    printf("\n1 - Enqueue element into queue");
    printf("\n2 - Dequeu element from queue");
    printf("\n3 - Display from queue");
    printf("\n4 - Exit");
    create();
    while (1)
    {
        printf("\nEnter choice");
        scanf("%d", &ch);
        switch (ch)
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
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}
void create()
{
    top1 = top2 = -1;
}
void push(int data)
{
    st1[++top1] = data;
}
int pop()
{
    return(st1[top1--]);
}
void push2(int data)
{
    st2[++top2] = data;
}
int pop2()
{
    return(st2[top2--]);
}
void enqueue()
{
    int data, i;
 
    printf("Enter data into queue");
    scanf("%d", &data);
    push(data);
    count++;
}
void dequeue()
{
    int i;
 
    for (i = 0;i <= count;i++)
    {
        push2(pop());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++)
    {
        push(pop2());
    }
}
 

void display()
{
    int i;
 
    for (i = 0;i <= top1;i++)
    {
        printf(" %d ",st1[i]);
    }
}
