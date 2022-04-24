#include<stdio.h>
#include <stdlib.h>
struct node{
    int val;
    struct node* next;
};
struct node*indexInsert(struct node*head,int val){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=val;
    ptr->next=head;
    return ptr;
}
void traverse(struct node*head){
    printf("Elements are\n");
    while(head!=NULL){
        printf("%d\n",head->val);
        head=head->next;
    }
}
void main(){
struct node*head=(struct node*)malloc(sizeof(struct node));
head->val=2;
head->next=NULL;
printf("existing element is\n");
printf("%d\n",head->val);
while(1){
printf("do you want to insert at begining ? \nprees 1 to insert or 0 to exit\n");
int x;
scanf("%d",&x);
if(x==0){
    break;
}
printf("enter number you want to insert \n");
int n;
scanf("%d",&n);
head=indexInsert(head,n);
traverse(head);
}

}