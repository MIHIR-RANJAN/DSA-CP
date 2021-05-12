#include<stdio.h>
#include<stdlib.h>
#define Max 10
int queueArr[10];
int rear= -1;
int front =-1;
void insert(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();

main()
{
    int choice , item;
    while(1)
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display element at the front\n");
        printf("4. Display all elements of the queue\n");
        printf("5. Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Input the element for adding in queue: ");
                scanf("%d",&item);
                insert(item);
                break;
            
            case 2:
                item = del();
                printf("Deleted element is %d\n",item);
                break;

            case 3:
                printf("Element at the front is %d\n",peek());
                break;

            case 4:
                display();
                break;

            case 5:
                exit(1);

            default :
                printf("Wrong choice\n");

        }
    }
}

void insert(int item)
{
    if(isFull())
    {
        printf("queue overflow\n");
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    rear = rear +1;
    queueArr[rear]=item;
}

int del()
{
    int item;
    if(isEmpty())
    {
        printf("queue underflow\n");
        exit(1);
    }
    else
    {
        item = queueArr[front];
        front = front +1;
        return item;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("queue underflow\n");
        exit(1);
    }
    else
    {
        return queueArr[front];
    }
}

int isEmpty()
{
    if(front == -1 || front == rear+1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(rear == Max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display()
{
    int i;
    if(isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        printf("Queue is:\n\n");
        for(i=front ; i<=rear;i++)
        {
            printf("%d", queueArr[i]);
        }
        printf("\n\n");
    }
}