#include <stdio.h>
#define size 5

int a[size];
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

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\n\n %d is popped",a[top]);
        top--;
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
    pop();
    printf("\n");
    traverse();
    return 0;
}