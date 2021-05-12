#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
};

struct node *createList(struct node *start); // for creating doubly linkedList
void display(struct node *start); // diaplay the linkedList
struct node *addtoempty(struct node *start,int data); // add data from the begining
struct node *addtobeg(struct node *start,int data); // add the item at the first node
struct node *addatend(struct node *start,int data); // add the item at the last node
struct node *addafter(struct node *start,int data,int item); // add the item after the given node
struct node *addbefore(struct node *start,int data,int item); // add the item before the given node
struct node *del(struct node *start,int item); // deleting the whole linkedList
struct node *reverse(struct node *start); // reverse the doubly linkedList

main()
{

    int choice,data,item;
    struct node *start=NULL;
    while(1)
    {
        printf("1. Create a Doubly LinkedList \n");
        printf("2. Display the created Doubly LinkedList\n");
        printf("3. Add item in a empty List\n");
        printf("4. Add at the first node of List\n");
        printf("5. Add at the end of List\n");
        printf("6. Add after the given node\n");
        printf("7. Add before the given node\n");
        printf("8. Delete the created node\n");
        printf("9. Reverse the node\n");
        printf("10. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    

        switch(choice)
        {
            case 1:
                start = createList(start);
                break;

            case 2:
                display(start);
                break;
            
            case 3:
                printf("ENTER THE ELEMENT TO BE INSERTED: ");
                scanf("%d",&data);
                start=addtoempty(start,data);
                break;

            case 4:
                printf("ENter the element to be inserted: ");
                scanf("%d",&data);
                start=addatbeg(start,data);
                break;
            
            case 5:
                printf("ENter the element to be inserted: ");
                scanf("%d",&data);
                start=addatend(start,data);
                break;
            
            case 6:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element after which it is inserted: ");
                scanf("%d",&item);
                start=addafter(start,data,item);
                break;

            case 7:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element before which it is inserted: ");
                scanf("%d",&item);
                start=addbefore(start,data,item);
                break;

            case 8:
                printf("Enter the element to be deleted: ");
                scanf("%d",&data);
                start=del(start,data);
                break;

            case 9:
                start=reverse(start);
                break;

            case 10:
                exit(1);
            
            default:
                printf("Invalid choice MF\n");

                //END OF THE SWITCH PART
        }
    }
}

// 1 -  creating a doubly LinkedList

struct node*createList(struct node *start)
{
    int i,n,data;
    printf("Enter the no of nodes: ");
    scanf("%d",&n);
    start = NULL;
    if(n == 0)
    {
        return start;
    }
    print("Enter the element to be inserted : ");
    scanf("%d",&data);
    start = addtoempty(start,data);
    for(i=2;i<=n;i++)
    {
        print("Enter the element to be inserted : ");
        scanf("%d",&data);
        start = addtoempty(start,data);
    }
    return start;

};

// 2 - Display the List

void display(struct node *start)
{
    struct node *p;
    if(start == NULL)
    {
        printf("List is empty MF\n");
    }
    p= start;
    while(p != NULL)
    {
        printf("The list is \n%d",p->info);
        p=p->next;
    }
    printf("\n");
}

//3 -  Addd to empty List

struct node *addtoempty(struct node *start, int data)
{
    struct node *temp; // temp is pointer for storing the data
    temp=(struct node *)malloc(sizeof(struct node)); // malloc will add the data into heap memory
    temp->info=data;
    temp->prev=NULL; // previous node is empty
    temp->next=NULL; // since whole List is empty therefore next node is also empty
    start=temp; // setting start = value/link of temp( given by user)
    return start;
};

// 4 - Add the data at begining/ first node

struct ndoe *addatbeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->prev=NULL; // there is nothing before 1st node therefore null
    temp->next=start; // start == next = temp
    start->prev=temp; // prev link will store temp
    return start;
};

// 5 - Add at the end/last node

struct node *addatend(struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while(p->next != NULL) // this while loop will take u to the the alst node
    {
        p=p->next;
    }
    p->next=temp;
    temp->next=NULL; // in the last node there is nothing after that
    temp->prev=p; // temp is the val given by user so previous will be that..
    return start;
};

// 6 - add after the given node

struct node *addafter(struct node *start,int data , int item)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while(p != NULL) // this while loop will run from 1st node to last
    {
        if(p->info == item) // this will run from first to the node after which we have to add first to node of item
        {
            temp->prev=p; 
            temp->next=p->next; // temp next means next node (after which we have to add) == p next means ( temp , p ,next)
            if(p->next != NULL) // if entered value for insertion is not NULL
            {
                p->next->prev=temp; // then it will add after the given node
            }
            p->next=temp;
            return start;
        }
        p=p->next; // this will shift all other nodes to the next node
    }
    printf("%d not present in the lsit\n",item);
    return start;
};

// 7 - add before the given node

struct node *addbefore(struct node *start,int data,int item)
{
    struct node *temp,*p;
    if(start == NULL)
    {
        printf("List is empty MF\n");
        return start;
    }
    if(start->info == item) // we have to add at the begining of the list
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info = data;
        temp->prev = NULL;
        temp->next= start;
        start->prev=temp;
        return start;
    }

    p=start;
    while(p != NULL) // if we have to add in between given nodes
    {
        if(p->info == item)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info = data;
            temp->prev =p->prev;
            temp->next = p;
            p->prev->next= temp;
            p->prev = temp;
            return start;
        }
        p=p->next;
    }
    printf("%d not present in the list\n");
    return start;
};

// 8 - Deletion of List 

struct node *del(struct node *start,int data)
{
    struct node *temp;
    if(start == NULL)
    {
        printf("List is empty MF\n");
        return start;
    }

    // Deletion of only node

    if(start->next == NULL)
    {
        if(start->info == data)
        {
            temp = start;
            start = NULL;
            free(temp);
            return start;
        }
        else
        {
            printf("Element %d not found MF \n",data);
            return start;
        }
    }

    // Deletion of first NODE

    if(start->info == data)
    {
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return start;
    }

    // Deletion in between

    while(temp->next == data)
    {
        if(temp->info == data)
        {
            temp->prev->next = temp -> next;
            temp->next->prev=temp->prev;
            free(temp);
            return start;
        }
        temp=temp->next;
    }

    //Deletion of last node

    if(temp->info == data)
    {
        temp->prev->next = NULL;
        free(temp);
        return start;
    }
    printf("Element %d not found MF \n ",data);
    return start;
};

// 9 - Reversing the LinkedList

struct node *reverse(struct node *start)
{
    struct node *p1 , *p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while(p2 != NULL)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
    printf("List reversed MF\n");
    return start;
};