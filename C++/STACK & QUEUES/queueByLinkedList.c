#include<stdio.h>
#include<stdlib.h>
#define Max 10
struct node 
{
    int info;
    struct node *link;
}*front = NULL , *rear = NULL;
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
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Memory not avilable\n");
        return;
    }
    else
    {
        temp->info = item;
        temp->link = NULL;
        if(front == NULL )
        {
            front = temp;
        }
        else
        {
            rear->link = temp;
        }
        rear = temp;
    }
}

int del()
{
    struct node *temp;
    int item;
    if(isEmpty())
    {
        printf("queue underflow\n");
        exit(1);
    }
    else
    {
        temp = front; 
        item = temp->info;
        front = front->link;
        free(temp);
        return item;
    }
}

int peek()
{
    if(isEmpty())
    {
        if(front == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = front;
    if(isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        printf("Queue is:\n\n");
        while(ptr != NULL)
        {
            printf("%d", ptr->info);
            ptr = ptr->link;
        }
        printf("\n\n");
    }
}