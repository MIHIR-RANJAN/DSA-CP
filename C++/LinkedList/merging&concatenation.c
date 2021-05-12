#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *create(struct node *start);
struct node *insertS(struct node *start, int data);
struct node *insert(struct node *start , int data);
void display(struct node *start);
void merge(struct node *p1, struct node *p2);


main()
{
    struct node *start1 = NULL, *start2=NULL;
    start1 =create(start1);
    start2=create(start2);
    printf("List1 : ");
    display(start1);
    printf("List2 : ");
    display(start2);

}

void merge(struct node *p1, struct node *p2)
{
    struct node *start3;
    start3=NULL;
    while(p1 !=NULL && p2 !=NULL)
    {
        if(p1->info < p2->info)    // when node size node 1 > node 2
        {
            start3 = insert(start3, p1->info);
            p1=p1->link;
        }
        else if(p2->info < p1->info)  // when node size node 2 > node 1
        {
            start3 = insert(start3 , p2->info);
            p2 = p2->link;
        }
        else if(p1->info == p2->info)  // when node size node 1 = node 2
        {
            start3= insert(start3 , p1->info);
            p1= p1->link;
            p2= p2->link;
        }
    }
};

struct node *create(struct node *start)
{
    int i,n,data;

    printf("ENTER THE NUMBER OF NODES :");
    scanf("%d",&n);
    start = NULL;
    for(i =1 ; i<=n ; i++)
    {
        printf("ENTER THE ELEMENT TO BE INSERTED : ");
        SCANF("%d" , &data);
        start= insertS(start,data);
    }
};

struct node *insertS(struct node *start,int data)
{
    struct node *p, *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info= data;

    // list is empty or dara to be added in begining

    if(start == NULL || data <start ->info)
    {
        temp->link = start;
        start = temp;
        return start;
    }
    else{
        p=start;
        while(p->link != NULL && p->link ->info <data)
        {
            p = p->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
    return start;
};

struct node *insert(struct node *start ,int data)
{
    struct node *p, *temp;
    temp= (struct node *)mallock(sizeof(struct node));
    temp->info = data;
    if(start == NULL)  // IF LIST IS EMPTY
    {
        temp->info = start;
        start = temp;
        return start;
    }
    else // insert at the end of the list
    {
        p = start;
        while(p->link !=NULL)
        {
            p = p->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
    return start;
};

void display(struct node *start)
{
    struct node *p;
    if(start = NULL)
    {
        printf("List is empty\n : ");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->link;
    }
    printf("\n");
}


