#include<stdio.h>
#include <stdlib.h>
struct Node
{
   int data;
   struct Node * next;
};
void traverse(struct Node * a){
    while (a!=NULL)
    {
    printf("data is : %d \n",a->data);
    a=a->next;
    }
}
struct Node * deletebegin(struct Node * ptr){
struct Node*a;
a=ptr;
ptr=ptr->next;
free(a);
return ptr;
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
struct Node * dltgivenIndex(struct Node*ptr,int index){
    struct Node *a=ptr;
    struct Node*b=ptr->next; 
    int count=0;
    while (count<index-1)
    {
        a= a->next;
        b=b->next;
        count++;
    }
    a->next=b->next;
    free(b);
    return ptr;
}
struct Node * dltNodeWithValue(struct Node*ptr,int value){
 struct Node *a=ptr;
    struct Node*b=ptr->next; 
    
    while (b->data!=value)
    {
        a= a->next;
        b=b->next;
        
    }
    a->next=b->next;
    free(b);
    return ptr;
} 
void main()
{
struct Node*first=(struct Node*)malloc(sizeof(struct Node));
struct Node*second=(struct Node*)malloc(sizeof(struct Node));
struct Node*third=(struct Node*)malloc(sizeof(struct Node));
struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));

first->data=5;
first->next=second;

second->data=11;
second->next=third;

third->data=34;
third->next=fourth;

fourth->data=74;
fourth->next=NULL;
traverse(first); // before
printf("\n");
// first = deletebegin(first);
// first = deleteend(first);
// first=dltgivenIndex(first,2);
first = dltNodeWithValue(first, 11);
traverse(first); //after

}