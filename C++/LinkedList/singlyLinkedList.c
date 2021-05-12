
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *createList(struct node *start);
void display(struct node *start);
void count(struct node *staart);
void search(struct node *start,int data);
struct node *addatbeg(struct node *start,int data); // add at the begining
struct node *addatend(struct node *start,int data); // add at the end
struct node *addafter(struct node *start,int data,int item); // add after some node
struct node *addbefore(struct node *start,int data,int item); // add before some node
struct node *addatpos(struct node *start,int data,int pos); // add at given position
struct node *del(struct node *start,int data); // delete
struct node *reverse(struct node *start); // reverse the LinkedList
main()
{
    struct node *start=NULL; // at the begining LinkedList is empty
    int choice, data , item ,pos;// choice for switch , data - element already in LinkedList, 
                                   // item- for getting info about element to be insert after or before 
                                   //pos - position
    while(1)
    {
        printf("1. Create List\n");
        printf("2. Display the List\n");
        printf("3. Count the total item\n");
        printf("4. Search any item \n");
        printf("5. Add to empty/begining List\n");
        printf("6. Add at the end\n");
        printf("7. Add after the node\n");
        printf("8. Add before the node\n");
        printf("9. Add at the position\n");
        printf("10. Delete the List\n");
        printf("11. reverse the List\n");
        printf("12. Quit the porgramme\n");
        printf("------------------------------------------\n");
        printf("------------------------------------------\n");
        printf("------------------------------------------\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);


        switch(choice) // here we can use if-else but switch is easy and efficient
        {
            case 1:
                start= createList(start);
                display(start);
                break;

            case 2:
                display(start);
                break;

            case 3:
                count(start);
                break;

            case 4:
                printf("Enter the element to be searched: ");
                scanf("%d",&data);
                search(start,data);
                break;

            case 5:
                printf("Enter the element to be inserted at the begining: ");
                scanf("%d",&data);
                start= addatbeg(start,data);
                break;

            case 6:
                printf("Enter the element to be inserted at the End: ");
                scanf("%d",&data);
                start= addatend(start,data);
                break;

            case 7:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element after which you want to insert: ");
                scanf("%d",&item);
                start= addafter(start,data,item);
                break;

            case 8:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element before which you want to insert: ");
                scanf("%d",&item);
                start= addbefore(start,data,item);
                break;

            case 9:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the position at which you want to insert: ");
                scanf("%d",&item);
                start= addatpos(start,data,item);
                break;

            case 10:
                printf("Enter the element to be Delete: ");
                scanf("%d",&data);
                start= del(start,data);
                break;

            case 11:
                start= reverse(start);
                break;

            case 12:
                exit(1);
            
            default:
                printf("WRONG CHOICE MF \n");

                // End of the Switch part


        }
    }
}

// 1 - create a single LinkedList
struct node *createList(struct node *start)
{
    int i,n,data;
    printf("Enter the no of nodes: ");
    scanf("%d",&n);
    start= NULL;
    if(n==0)
    {
        return start;
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d",&data);
        start= addatbeg(start,data);
        for(i=2;i<=n;i++)
        {
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            start= addatbeg(start,data);
        }
        return start;
    }
}

// 2 - display

void display(struct node *start)
{
    struct node *p;
    if(start== NULL)
    {
        printf("List is Empty MF\n");
    }
    else
    {
        p= start;
        printf("List is :\n");
        while(p != NULL)
        {
            printf("%d",p->info);  // p->info gives value of p at that pos
            p=p->link;  // p->link is giving the link of p at that positon
        }
        printf("\n\n");
    }
}

// 3 - count

void count(struct node *start)
{
    struct node *p;
    int cnt=0;
    p=start;
    while(p != NULL)
    {
        p=p->link;  // p->link is giving the link of p at that positon
        cnt++;
    }
}

//4 - search

void search(struct node *start,int item)
{
    struct node *p = start;
    int pos = 1;
    while(p != NULL)
    {
        if(p->info == item)  // p->info gives value of p at that pos
        {
            printf("ITEM %d fount at position %d\n",item,pos);
            return;
        }
        p=p->link;
        pos++;
    }
}

// 5 add at begining

struct node *addatbeg(struct node *start,int data)
{
    struct node *temp;  // temp is pointer for start
    temp=(struct node *)malloc(sizeof(struct node)); // malloc is for storing in heap memory
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;

};

// 6 - add at end

struct node *addatend(struct node *start , int data)
{
    struct node *p,*temp; //p will see input value , temp will add value at end
    temp=(struct node *)malloc(sizeof(struct node)); // malloc is for storing in heap memory
    temp->info=data;
    p=start;
    while(p->link != NULL)
    {
        p=p->link;
    }
    p->link=temp;
    temp->link=NULL;
    return start;
};

// 7 - add after the node

struct node *addafter(struct node *start,int data,int item)
{
    struct node *temp,*p;
    p=start;
    while(p->link != NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=data;
        temp->link=p->link;
        p->link=temp;
        return start;
    }
    p=p->link;
};

// 8 - add before the node

struct node *addbefore(struct node *start, int data, int item)
{
    struct node *temp,*p;

    // this will check if List is empty then can add before any item

    if(start == NULL){
        printf("List is empty\n");
        return start;
    }

    // if item to be inserted before the first node

    if(item == start->info)
    {
        temp= (struct node *)malloc(sizeof(struct node));
        temp->info=data;
        temp->link=start;
        start=temp;
        return start;
    }
    
    // if item to be inserted at any position other than first node

    p=start;
    while(p->link != NULL)
    {
        if(p->link->info == item)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info=data;
            temp->link=p->link;
            p->link=temp;
            return start;
        }
        p=p->link;
    }
    printf("%d not present in the list\n",item);
    return start;
    
};

// 9 - add at given postion

struct node *addatpos(struct node *start,int data,int pos)
{
    struct node *temp,*p;
    int i;
    temp=(struct node *)mallock(sizeof(struct node));
    temp->info=data;

    // inserting at first node

    if(pos==1)
    {
        temp->link=start;
        start=temp;
        return start;
    }

    // add at rest of positon

    p=start;
    for(i=1;i<((pos-1)&&(p != NULL));i++)
    {
        p=p->link;
    }
    if(p == NULL){
        printf("There is less than %d elements. ", pos);
    }
    else
    {
        temp->link=p->link;
        p->link=temp;
    }
    return start;
    
};

// 10 Deletion of LinkedList

struct node *del(struct node *start,int data)
{
    struct node *temp,*p;
    if(start == NULL)
    {
        printf("List is empty\n");
        return start;
    }

    // Deletion of first node 

    if(start->info == data)
    {
        temp = start;
        start = start->link;
        free(temp);
        return start;
    }

    // Deletion of rest nodes

    p=start;
    while(p->link != NULL)
    {
        if(p->link->info == data)
        {
            temp=p->link;
            p->link = temp ->link;
            free(temp);
            return start;
        }
        p=p->link;
    }
    printf("Element %d not found\n", data);
    return start;
};

// 11 - Reversing the LinkedList

struct node *reverse(struct node *start)
{
    struct node *prev ,*ptr , *next; // prev - previous, ptr - present , next 
    prev = NULL;
    ptr=start;
    while(ptr != NULL)
    {
        next= ptr->link;
        ptr ->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
};
