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

void sort()
{
    int i, j, t;
    for (i = front; i <= rear; i++)
    {
        for (j = front; j <= rear - i - 1; j++)
        {

            if (queue[j] > queue[j + 1])
            {
                t = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = t;
            }
        }
    }

    for (i = 0; i <= rear; i++)
    {
        printf("\n %d", queue[i]);
    }
}



int main()
{
    insert(5);
    insert(8);
    insert(3);
    insert(4);
    sort();
    return 0;
}