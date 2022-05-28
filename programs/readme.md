#### 1. Traverse in 1-D array

```c
// C program to traverse the array

#include <stdio.h>

// Function to traverse and print the array
void printArray(int* arr, int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Driver program
int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	return 0;
}

```

#### 2. Insertion in 1-D array

```c
#include <stdio.h>
#define size 10
int a[size];
int i = 0;
void insert(int n)
{
    if (i == size)
    {
        printf("Array is full");
    }
    else
    {
        a[i] = n;
    }
    i++;
}

void insertBeg(int n)
{
    int j = i, k;
    for (k = j; k > 0; k--)
    {
        a[k] = a[k - 1];
    }
    a[k] = n;
}

void traverse()
{
    int b;
    for (b = 0; b < i + 1; b++)
    {
        printf("\n %d", a[b]);
    }
}

int anywhere(int n, int l)
{
    if (i >= size)
    {
        printf("Array is full");
    }
    else if (l >= size)
    {
        printf("invalid location");
    }
    else
    {
        for (int k = size - 1; k > l; k--)
        {
            a[k] = a[k - 1];
        }
        a[l] = n;
    }
    i++;
}

int main()
{
    insert(4);
    insert(8);
    insertBeg(10);
    anywhere(12, 2);
    traverse();

    return 0;
}
```
