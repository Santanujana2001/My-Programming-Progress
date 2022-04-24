#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

void empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf(" stack is empty \n");
    }
    else
    {
        printf(" stack is not empty\n ");
    }
}
void full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf(" stack is full\n ");
    }
    else
    {
        printf(" stack is not full \n");
    }
}
void push(struct stack *ptr, int v)
{
    if (ptr->top == ptr->size - 1)
    {
        printf(" stack is full \n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = v;
    }
}
void pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf(" stack is empty \n");
    }
    else
    {
        int temp = ptr->arr[ptr->top];
        printf("the poped element is %d\n", temp);
        ptr->top--;
    }
}
void print(struct stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("the element is %d \n", ptr->arr[i]);
    }
}
int main()
{
    struct stack *a = (struct stack *)malloc(sizeof(struct stack));

    a->size = 6;
    a->top = -1;
    a->arr = (int *)malloc(a->size * sizeof(int));
    push(a, 4);
    push(a, 1);
    push(a, 2);
    push(a, 5);
    push(a, 3);
    push(a, 7);
    print(a);
    pop(a);
    push(a, 3);
    empty(a);
    full(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    return 0;
}