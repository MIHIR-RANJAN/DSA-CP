#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
}*top=NULL;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

main()
{
    int choice , item;
    while(1)
    {
        printf("1 Push\n");
        printf("2 Pop\n");
        printf("3 Display the top element\n");
        printf("4 Display all stack elements\n");
        printf("5 Quit\n");
        printf("Enter your choice: ");
        scanf(choice);
    }
    switch(choice)
    {
        case 1:
            printf("Enter the item to be pushed: ");
            scanf("%d",&item);
            push(item);
            break;

        case 2:
            item = pop();
            printf("Popped item is : %d\n" , item);
            break;
        
        case 3:
            printf("Item at the top is : %d" , peel());
            break;

        case 4:
            display();
            break;

        case 5:
            exit(1);

        default:
            printf("Wrong choice\n");
    }
}
void push(int item)
{
    struct node *temp;
    temp= (struct node *)mallock(sizeof(struct node));
    if(temp == NULL)
    {
        printf("stack overflow");
        return;
    }
    else{
        temp->info = item;
        temp ->link = top;
        top = temp;
    }
}

int pop()
{
    struct node *temp;
    int item;
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        temp = top;
        item = temp->info;
        top = top->link;
        free(temp);
        return item;
    }
}

int isEmpty()
{
    if(top == NULL)
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
    struct node *ptr;
    ptr = top;
    if(isEmpty())
    {
        printf("stack is empty\n ");
        return;
    }
    else
    {
        printf("stack elements are :\n ");
        while(ptr != NULL)
        {
            printf(" %d\n ", ptr ->info);
            ptr = ptr->link;
        }
        printf("\n");
    }
}