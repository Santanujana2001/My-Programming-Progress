#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int isEmpty();
int isFull();
void display();

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n1.Push\n");
        printf("2.Pop\n");
        printf("3.Display stack elements\n");
        printf("4.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item to be pushed : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            printf("\nPopped item is : %d\n", item);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\nWrong choice\n");
        }
    }

    return 0;
}

void push(int item)
{
    if (isFull())
    {
        printf("\nStack Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = item;
}

int pop()
{
    int item;
    if (isEmpty())
    {
        printf("\nStack Underflow\n");
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nStack is empty\n");
        return;
    }
    printf("\nStack elements :\n\n");
    for (i = top; i >= 0; i--)
    {
        printf(" %d\n", stack_arr[i]);
    }
    printf("\n");
}