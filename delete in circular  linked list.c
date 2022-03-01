
#include<stdio.h>
#include<stdlib.h>
 
 struct node{
     int data;
     struct node* next;
 };
 
 
 void display(struct node*head){
     struct node* temp=head;
     do{
         printf("%d",temp->data);
     }
     while(temp!=head);
 }
 
 
 
 

     
 
 
 
 

 
 struct node* deleteathead(struct node* head){
     struct node* temp=head;
     head=head->next;
     free(temp);
     return head;
 }

 
 
 
  
 struct node* deleteattail(struct node* head){
     struct node* temp=head;
     struct node* q=temp->next;
     while(q->next!=head){
         temp=temp->next;
         q=q->next;
     }
  temp->next=q->next;
  free(q);
  return head;
  
 }
 
 struct node* deleteatindex(struct node* head, int index){
     struct node* temp=head;
     struct node* q=temp->temp->next;
     for(int i=0;i<index-1;i++){
         temp=temp->next;
         q=q->next;
     }
     temp->next=q->next;
     free(q);
     return head
 }
 
 
 struct node* deleteatnode(struct node* head, struct node* ptr){
     struct node* temp=head;
     struct node* q=temp->next;
     while(q->next!=ptr){
         temp=temp->next
         q=q->next;
     }
     temp->next=q->next;
     free(q);
      return head;
 }

 
int main()
{
   struct node* head;
   struct node* second;
   struct node* third;
   struct node* fourth;
   
   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   fourth=(struct node*)malloc(sizeof(struct node));
   
   
   head->data=1;
   head->next=second;
   
   second->data=3;
   second->next=third;
   
   third->data=6;
   third->next=head;
   

  
  
   
    return 0;
}
