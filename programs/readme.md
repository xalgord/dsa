## Contents:

- [Contents:](#contents)
    - [1. Traverse in 1-D array](#1-traverse-in-1-d-array)
    - [2. Insertion in 1-D array](#2-insertion-in-1-d-array)
    - [3. Deletion in 1-D array](#3-deletion-in-1-d-array)
    - [5. Binary Search in array](#5-binary-search-in-array)
    - [6. Traversing in 2-D array](#6-traversing-in-2-d-array)
    - [7. Linked list traversing](#7-linked-list-traversing)
    - [8. Creating, Searching, Traversal in Linked list](#8-creating-searching-traversal-in-linked-list)
    - [9. Insertion in linked list from beginning, ending and nth position.](#9-insertion-in-linked-list-from-beginning-ending-and-nth-position)

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

#### 6. Traversing in 2-D array

```c
#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    int arr[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    // traversing 2D array
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d] [%d] = %d \n", i, j, arr[i][j]);
        } // end of j
    }     // end of i
    return 0;
}
```

Output:

```
Enter value for disp[0][0]:2
Enter value for disp[0][1]:4
Enter value for disp[0][2]:5
Enter value for disp[1][0]:7
Enter value for disp[1][1]:2
Enter value for disp[1][2]:5
Two Dimensional array elements:
2 4 5
7 2 5
```

#### 7. Linked list traversing

```c
// A simple C program for traversal of a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;      // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = NULL;

    printList(head);

    return 0;
}
```

Output:

```
 1  2  3 
```

#### 8. Creating, Searching, Traversal in Linked list

```c
#include <stdio.h>
#include <stdlib.h>
void create(int);
void search();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice, item, loc;
    do
    {
        printf("\n1.Create\n2.Search\n3.Exit\n\nEnter your choice?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item\n");
            scanf("%d", &item);
            create(item);
            break;
        case 2:
            search();
        case 3:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice\n");
        }

    } while (choice != 3);
}
void create(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 1;
                break;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 0)
        {
            printf("Item not found\n");
        }
    }
}
```

Output:

```
1.Create
2.Search
3.Exit

Enter your choice?
1

Enter the item
3

Node inserted

1.Create
2.Search
3.Exit

Enter your choice?
1

Enter the item
4

Node inserted

1.Create
2.Search
3.Exit

Enter your choice?
1

Enter the item
5

Node inserted

1.Create
2.Search
3.Exit

Enter your choice?
2

Enter item which you want to search?
5
item found at location 2 
```

#### 9. Insertion in linked list from beginning, ending and nth position.

```c
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int calcSize(struct Node *node)
{
    int size = 0;

    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void insertPosition(int pos, int data, struct Node **head)
{
    int size = calcSize(*head);

    // If pos is 0 then should use insertStart method
    // If pos is less than 0 then can't enter at all
    // If pos is greater than size then bufferbound issue
    if (pos < 1 || size < pos)
    {
        printf("Can't insert, %d is not a valid position\n", pos);
    }
    else
    {
        struct Node *temp = *head;
        struct Node *newNode = (struct Node *)
            malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        while (--pos)
        {
            temp = temp->next;
        }
        //(25)->next = 10 as 12->next is 10
        newNode->next = temp->next;
        // (12)->next = 25
        temp->next = newNode;
        // new node added in b/w 12 and 10
    }
}

void insertStart(struct Node **head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;

    // changing the new head to this freshly entered node
    *head = newNode;
}

void insertLast(struct Node **head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    // need this if there is no node present in linked list at all
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *node)
{

    // as linked list will end when Node is Null
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    // Need '&' i.e. address as we need to change head
    insertStart(&head, 12);
    insertStart(&head, 16);
    insertStart(&head, 20);

    insertLast(&head, 10);
    insertLast(&head, 14);
    insertLast(&head, 18);
    insertLast(&head, 11);

    // Inserts after 3rd position
    insertPosition(3, 25, &head);

    // no need for '&' as head need not be changed
    // only doing traversal
    display(head);
    return 0;
}
```

Output:

```
20 16 12 25 10 14 18 11
```