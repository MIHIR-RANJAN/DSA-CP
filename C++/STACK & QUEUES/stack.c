#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int starckArr[10];
int top =-1;
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
    if(isFull())
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        top = top+1;
        stackArr[top]= item;
    }
}

int pop()
{
    int item;
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        item = stackArr[top];
        top = top -1;
        return item;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        return stackArr[top];
    }
}

int isEmpty()
{
    if(top == -1)
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
    if(top == MAX-1)
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
    if(isEmpty())
    {
        printf("stack is empty\n");
        return;
    }
    else{
        printf("stack elements are :\n\n");
        for(int i=top; i>=0 ; i--)
        {
            printf("%d\n",stackArr[top]);
        }
        printf("\n");
    }
}