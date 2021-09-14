#include <stdio.h>
#define size 5

int arr[size] = {5,6,7,8,9};
void delBegin(){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }    
}

void display(){
    for (int b = 0; b < size; b++)
    {
        printf("\n %d", arr[b]);
    }
}

int main(){
    delBegin();
    display();
}