#include <stdio.h>
#define size 5

int a[size];
int top = -1;
int count = 0;
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
        count++;
    }
}

void countFunc(){
    printf("\nTotal elements in stack are %d", count);
}

void traverse()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n %d", a[i]);
    }
}

int main(){
    push(14);
    push(7);
    push(9);
    traverse();
    countFunc();
}