#include <stdio.h>
#define size 50

int arr[size];
int i = 0;
int logic = 0;

void func1()
{
    if (i == size)
    {
        printf("Array is full");
    }
    else
    {
        int j = 0, element;
        char yesNo;
        while (j < 1)
        {
            printf("Enter an element = ");
            scanf("%d", &element);
            arr[i] = element;
            i++;
            printf("\ndo you want to add another element?(y/n) = ");
            scanf(" %c", &yesNo);
            if (yesNo == 'n' || yesNo == 'N')
            {
                j++;
            }
            else
            {
                continue;
            }
        }
    }
}

void func2()
{
    int input;
    printf("Enter the Element = ");
    scanf("%d", &input);

    if (i == size)
    {
        printf("Array is full");
    }
    else
    {
        i++;
        int j = i, k;
        for (k = j; k > 0; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[k] = input;
    }
}

void func3()
{
    int input;
    printf("Enter the Element = ");
    scanf("%d", &input);

    if (i == size)
    {
        printf("Array is full");
    }
    else
    {
        arr[i] = input;
    }
    i++;
}

void func4()
{
    int input, location;
    printf("\nEnter the Element = ");
    scanf("%d", &input);

    printf("\nEnter the location = ");
    scanf("%d", &location);

    if (i >= size)
    {
        printf("Array is full");
    }
    else if (location >= size)
    {
        printf("invalid location");
    }
    else
    {
        for (int k = size - 1; k > location; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[location] = input;
    }
    i++;
}

void func5()
{
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
}

void func6()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void func7()
{
    int location;
    printf("Enter the location You want to delete the element = ");
    scanf("%d", &location);
    if (location >= size)
    {
        printf("Invalid Location");
    }
    else
    {
        for (int i = location; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

void func8()
{
    for (int b = 0; b < i; b++)
    {
        printf("\n %d", arr[b]);
    }
}

int main()
{
    int num;
    char take_input;
    while (logic < 1)
    {
        printf("*******************************************\n");
        printf("Press 1 to add element\n");
        printf("Press 2 to insert at the beginning\n");
        printf("Press 3 to insert at the End\n");
        printf("Press 4 to insert at the any location\n");
        printf("Press 5 to delete from the end\n");
        printf("Press 6 to delete from the beginning\n");
        printf("Press 7 to delete from the any location\n");
        printf("Press 8 to display elements\n");
        printf("Press 9 to exit\n");
        printf("*******************************************\n");

        printf("\nChoose a number = ");
        scanf("%d", &num);

        if (num == 1)
        {
            func1();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 2)
        {
            func2();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 3)
        {
            func3();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 4)
        {
            func4();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 5)
        {
            func5();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 6)
        {
            func6();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 7)
        {
            func7();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 8)
        {
            func8();
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else if (num == 9)
        {
            logic++;
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }
        else
        {
            printf("Invalid Input");
            printf("\n Do you want to continue (y/n) = ");
            scanf(" %c", &take_input);
        }

        if (take_input == 'n' || take_input == 'N')
        {
            logic++;
        }
        else
        {
            continue;
        }
    }

    func8();
}