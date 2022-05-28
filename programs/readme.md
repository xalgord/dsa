- [1. Traverse in 1-D array](#1-traverse-in-1-d-array)
- [2. Insertion in 1-D array](#2-insertion-in-1-d-array)
- [3. Deletion in 1-D array](#3-deletion-in-1-d-array)
- [5. Binary Search in array](#5-binary-search-in-array)

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

Output:

```
Array: 2 -1 5 6 0 -3
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

Output:

```
 10
 4
 12
 8
```

#### 3. Deletion in 1-D array

```c
#include <stdio.h>
void main()
{
    int a[10], i, j, k, n, l;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to delete: ");
    scanf("%d", &k);

    for (j = 0; j < n; j++)
    {
        if (a[j] == k)
        {
            l = j;
        }
    }

    for (j = l; j < n; j++)
    {
        a[j] = a[j + 1];
    }
    n = n - 1;

    printf("The array after deletion of %d is: ", k);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
```

Output:

```
Enter number of elements of array: 5
Enter array elements: 1 2 3 4 5
Enter the element you want to delete: 3
The array after deletion of 3 is: 1 2 4 5 
```

4. Linear Search in Array

```c
#include <stdio.h>
int linearSearch(int a[], int n, int val)
{
    // Going through array sequencially
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i + 1;
    }
    return -1;
}
int main()
{
    int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array
    int val = 41;                                   // value to be searched
    int n = sizeof(a) / sizeof(a[0]);               // size of array
    int res = linearSearch(a, n, val);              // Store result
    printf("The elements of the array are - ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nElement to be searched is - %d", val);
    if (res == -1)
        printf("\nElement is not present in the array");
    else
        printf("\nElement is present at %d position of array", res);
    return 0;
}
```

Output

```
The elements of the array are - 70 40 30 11 57 41 25 14 52 
Element to be searched is - 41
Element is present at 6 position of array
```

#### 5. Binary Search in array

```c
// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
```

Output:

```
Element is present at index 3
```
