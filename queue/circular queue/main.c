#include <stdio.h>
#define size 5
int queue[size];
int front = 0;
int rear = 0;

void insert(int n)
{
    if (rear + 1 == front)
    {
        printf("Queue is full.");
    }
    else if (rear + 1 == size)
    {
        printf("Queue is full.");
    }
    else if (front == -1)
    {
        rear = 0;
    }
    else
    {
        queue[rear] = n;
            rear++;
    }
}

void delete ()
{
    if (front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                queue[i] = queue[i + 1];
            }
        }
    }
}

void traverse()
{
    for (int i = front; i <=rear; i++)
    {
        if (rear != 0)
        {
            printf("\n %d", queue[i]);
        }
    }
}

int main()
{
    insert(4);
    insert(8);
    insert(9);
    insert(5);
    traverse();
    printf("\n");
    delete ();

    traverse();
    printf("\n");

    insert(3);
    insert(2);
    // delete ();
    printf("\n");
    traverse();
    // traverse();
    // printf("%d", queue[0]);
}