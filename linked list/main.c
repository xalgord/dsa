#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

void insert(int n)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->link = NULL;

    if (head == NULL)
    {
        head = t;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = t;
    }
}

void insert_begin(int n)
{
    struct node *t, *temp;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;

    if (head == NULL)
    {
        head = t;
    }
    else
    {
        struct node *p;

        temp = head;
        head = t;
        t->link = temp;
    }
}

void traverse()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("\n %d", p->data);
        p = p->link;
    }
}

void delbegin()
{
    struct node *p;
    p = head;
    head = p->link;
    free(p);
}

void delend()
{
    int len = 0, i = 1;
    struct node *p, *t;
    p = head;
    t = p;
    while (p != NULL)
    {
        len++;
        p = p->link;
    }

    p = head;
    while (i < len - 1)
    {
        p = p->link;
        i++;
    }
    t=p->link;
    p->link = NULL;
    
    free(t);
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    delbegin();
    delend();
    insert_begin(4);
    traverse();
    return 0;
}