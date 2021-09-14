#include <stdio.h>
#define size 5

int arr[size] = {5, 6, 7, 8, 9};
void delEnd(){
    for (int i = size-1; i >= 0; i--)
    {
        arr[i] = arr[i-1];
    }
}


void display(){
    for (int b = 0; b < size; b++)
    {
        printf("\n %d", arr[b]);
    }
}

int main(){
    delEnd();
    display();
}