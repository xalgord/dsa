#include <stdio.h>
#define size 5

int queue[size];
int front = 0;
int rear = -1;

void insert(int n)
{
    if (rear == size - 1)
    {
        printf("Queue is full");
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}

void count(){
    if (rear == 0)
    {
    printf("Total Elements in the queue is %d", rear+1);   
    }
    printf("Total Elements in the queue are %d", rear+1);
}


int main()
{
    insert(5);
    insert(8);
    insert(3);
    insert(4);
    count();
    return 0;
}