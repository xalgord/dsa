#include <stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void insert(int n)
{
    if (((rear == size - 1) || (rear == front - 1)) && (front == 0))
    {
        printf("queue is full");
    }
    else if ((front == -1) && (rear == -1))
    {
        rear = 0;
        front = 0;
        queue[rear] = n;
    }
    else
    {
        rear++;
        queue[rear] = n;
        // rear++;
    }
}

void delete ()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == 0)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue[i]);
        }
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue[i]);
        }
        // for (int i = 0; i < front; i++)
        // {
        //     printf("%d \n", queue[i]);
        // }
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    // insert(10);
    display();

    printf("\nafter deleting:\n");

    delete ();
    display();
    printf("\nafter inserting:\n");
    insert(9);
    insert(10);
    insert(11);
    insert(12);
    display();
    printf("%d",front);
    // insert(8);
    // insert(9);
    // display();
}