#include <stdio.h>
#define size 5
int queue[size];
int arr[size];

int front = -1;
int rear = -1;

void insert(int n)
{
    if (rear == size - 1)
    {
        printf("Queue is full.");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = n;
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}

void delete ()
{
    if (front == -1)
    {
        printf("queue is empty");
    }
    else
    {
        front++;
    }
}

void traverse()
{
    for (int i = front; i <= rear; i++)
    {
        printf("\n %d", queue[i]);
    }
}

void insert_front(int n)
{
    if (front == 0)
    {
        printf("Queue is full");
    }
    else
    {
        front--;
        queue[front] = n;
    }
}

void delete_rear()
{
    if (rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        rear--;
    }
}

void reverse()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = queue[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        queue[i] = arr[i];
    }
}

int main()
{
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    traverse();
    delete ();
    delete_rear();
    insert_front(8);
    printf("\n");
    traverse();

    printf("\n");
    reverse();
    traverse();
}