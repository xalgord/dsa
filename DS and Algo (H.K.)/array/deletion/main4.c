#include <stdio.h>
#define size 5

int arr[size] = {5, 6, 7, 8, 9};
void delAnywhere(int l)
{
    if (l >= size)
    {
        printf("Invalid Location");
    }
    else
    {
        for (int i = l; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

void display()
{
    for (int b = 0; b < size; b++)
    {
        printf("\n %d", arr[b]);
    }
}

int main()
{
    delAnywhere(2);
    display();
}