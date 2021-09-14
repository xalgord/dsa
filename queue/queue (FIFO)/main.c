#include <stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;

void insert(int n)
{
    if (rear == size - 1)
    {
        printf("Queue is full.");
    }
    else if(front == -1 && rear == -1){
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

int main()
{
    insert(4);
    insert(8);
    insert(9);
    traverse();
    delete ();
    printf("\n");
    traverse();
}