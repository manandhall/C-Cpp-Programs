#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *ptr=NULL;
struct Node *ptr1=NULL;
void unique()
{
    printf("bbbbbb");
    ptr=start;
    ptr1=ptr->next;
    while(ptr!=NULL)
    {
        printf("aaaaaaa");
        if(ptr->data!=ptr1->data)
        {
            ptr1=ptr1->next;
        }
        else
        {
            struct Node *p=ptr1;
            ptr1=ptr->next;
            delete(p);
        }
        if(ptr1==NULL)
        {
            ptr=ptr->next;
            ptr1=ptr->next;
        }
    }
}
void insert(int item)
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=item;
    if(start==NULL)
    {
        start=newnode;
        newnode->next=NULL;
        ptr=newnode;
    }
    else
    {
        ptr->next=newnode;
        newnode->next=NULL;
        ptr=newnode;
    }
}
void delete(struct Node *p)
{
    struct Node *t=start;
    while(t->next!=p)
    {
        t=t->next;
    }
    t->next=p->next;
    p->next=NULL;

}
void PrintList()
{
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    insert(1);
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(4);
    insert(5);
    insert(1);
    PrintList();
    unique();
    PrintList();
    return 0;
}
