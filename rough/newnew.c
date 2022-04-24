#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * deleteend(struct Node * ptr){
 struct Node*a=ptr;;
 struct Node*b=ptr->next;  
 
 while (b->next!=NULL)
 {
     a=a->next;
     b=b->next;
 }
 a->next=NULL;
  free(b);
  return ptr;
}
 
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
 
 
    head->data = 7;
    head->next = second;
 
 
    second->data = 11;
    second->next = third;
 
 
    third->data = 41;
    third->next = fourth;
 
   
    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 84;
    fifth->next = NULL;
    printf("Creating a single linked list of 5 elements\n");
    linkedListTraversal(head);
    printf("\n");
    printf("Deleting an element from the end position \n");
    head = deleteend(head);
    printf("Displaying the final linked list \n");
      printf("\n");
    linkedListTraversal(head);
    return 0;
}
