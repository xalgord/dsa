#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int n)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->left = NULL;
    t->right = NULL;
    if (head == NULL)
    {
        head = t;
        tail = t;
    }
    else
    {
        struct node *p;
        p = head;
        while (p != tail)
        {
            p = p->right;
        }
        p->right = t;
        t->left = tail;
        tail = t;
    }
}

void insert_left(int n)
{
    struct node *t, *temp;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->left = NULL;
    t->right = NULL;
    if (head == NULL)
    {
        head = t;
        tail = t;
    }
    else
    {
        temp = head;
        temp->left = t;
        head = t;
        t->right = temp;
    }
}

void insert_anywhere(int n){
    
}

void traverse()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("\n %d", p->data);
        p = p->right;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert_left(9);
    traverse();
}