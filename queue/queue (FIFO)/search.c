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

void search(int n){
    int s = 0;
    for (int i = front; i <= rear; i++)
    {
        if (n == queue[i])
        {
            s++;
        }
    }
    if (s > 0)
    {
        printf("Element Found");
    }
    else{
        printf("Element not found");
    }
    
    
}


int main()
{
    insert(5);
    insert(8);
    insert(3);
    insert(4);
    search(8);
    return 0;
}