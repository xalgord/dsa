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
    - [10. Deleting Node from beginning, ending or nth position.](#10-deleting-node-from-beginning-ending-or-nth-position)
    - [11. Stack implementation using Array](#11-stack-implementation-using-array)
    - [12. Stack implementation using Linked List](#12-stack-implementation-using-linked-list)
    - [13. Queue implementation using array.](#13-queue-implementation-using-array)

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

#### 10. Deleting Node from beginning, ending or nth position.

```c
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

void insert(int n)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->link = NULL;

    if (head == NULL)
    {
        head = t;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = t;
    }
}

void traverse()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("\n %d", p->data);
        p = p->link;
    }
}

void delbegin()
{
    struct node *p;
    p = head;
    head = p->link;
    free(p);
}

void delend()
{
    int len = 0, i = 1;
    struct node *p, *t;
    p = head;
    t = p;
    while (p != NULL)
    {
        len++;
        p = p->link;
    }

    p = head;
    while (i < len - 1)
    {
        p = p->link;
        i++;
    }
    t = p->link;
    p->link = NULL;

    free(t);
}

struct node *deleteByValue(int value)
{
    struct node *p = head;
    struct node *q = head->link;
    while (q->data != value && q->link != NULL)
    {
        p = p->link;
        q = q->link;
    }

    if (q->data == value)
    {
        p->link = q->link;
        free(q);
    }
    return head;
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    delbegin();
    delend();
    deleteByValue(7);
    traverse();
    return 0;
}
```

Output:

```
 6
 8
```

#### 11. Stack implementation using Array

```c
#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    // clrscr();
    top = -1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d", &n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
```

Output:

```
Enter the size of STACK[MAX=100]:10

         STACK OPERATIONS USING ARRAY
        --------------------------------
         1.PUSH
         2.POP
         3.DISPLAY
         4.EXIT
 Enter the Choice:1
 Enter a value to be pushed:12

 Enter the Choice:1
 Enter a value to be pushed:24

 Enter the Choice:1
 Enter a value to be pushed:98

 Enter the Choice:3

 The elements in STACK

98
24
12
 Press Next Choice
 Enter the Choice:2

         The popped elements is 98
 Enter the Choice:3

 The elements in STACK

24
12
 Press Next Choice
 Enter the Choice:4

         EXIT POINT
```

#### 12. Stack implementation using Linked List

```c
// C Program to Implement a Stack using Linked List

#include <stdio.h>
#include <stdlib.h>

    struct node
{
    int info;
    struct node *ptr;
} * top, *top1, *temp;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();

int count = 0;

void main()
{
    int no, ch, e;

    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Dipslay");
    printf("\n 7 - Stack Count");
    printf("\n 8 - Destroy stack");

    create();

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            stack_count();
            break;
        case 8:
            destroy();
            break;
        default:
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}

/* Create empty stack */
void create()
{
    top = NULL;
}

/* Count stack elements */
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}

/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(1 * sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp = (struct node *)malloc(1 * sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

/* Display stack elements */
void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
}

/* Pop Operation on stack */
void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}

/* Return top element */
int topelement()
{
    return (top->info);
}

/* Check if stack is empty or not */
void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}

/* Destroy entire stack */
void destroy()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;

    printf("\n All stack elements destroyed");
    count = 0;
}
```

Output:

```
1 - Push
2 - Pop
3 - Top
4 - Empty
5 - Exit
6 - Dipslay
7 - Stack Count
8 - Destroy stack
Enter choice : 1
Enter data : 56
 
Enter choice : 1
Enter data : 80
 
Enter choice : 2
 
Popped value : 80
Enter choice : 3
 
Top element : 56
Enter choice : 1
Enter data : 78
 
Enter choice : 1
Enter data : 90
 
Enter choice : 6
90 78 56
Enter choice : 7
 
No. of elements in stack : 3
Enter choice : 8
 
All stack elements destroyed
Enter choice : 4
 
Stack is empty
Enter choice : 5
```

#### 13. Queue implementation using array.

```c
/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void insert();
void delete ();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
void main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\nWrong choice \n");
        } /* End of switch */
    }     /* End of while */
} /* End of main() */

void insert()
{
    int add_item;
    if (rear == MAX - 1)
        printf("\nQueue Overflow \n");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        printf("\nInsert the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert() */

void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue Underflow \n");
        return;
    }
    else
    {
        printf("\nElement deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == -1)
        printf("\nQueue is empty \n");
    else
    {
        printf("\nQueue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */
```

Output:

```
1.Insert element to queue 
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1

Insert the element in queue : 4

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue 
4.Quit
Enter your choice : 1

Insert the element in queue : 5

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1

Insert the element in queue : 6

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 3

Queue is :
4 5 6

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit 
Enter your choice : 2

Element deleted from queue is : 4

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 3

Queue is :
5 6

1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
```