#include <stdio.h>
#define size 5

int arr[size];
int a[size];
int num = 0;
int top = -1;
void push(int n)
{
    if (top == size)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        a[top] = n;
    }
}

void reverse()
{
    for (int i = 0; top != -1; i++)
    {
        arr[i] = a[top];
        top--;
        num++;
    }

    for (int i = 0; i < num; i++)
    {
        top++;
        a[top] = arr[i];
    }
}

void traverse()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n %d", a[i]);
    }
}


int main()
{
    push(14);
    push(7);
    push(9);
    traverse();
    printf("\n");
    reverse();
    traverse();
    return 0;
}