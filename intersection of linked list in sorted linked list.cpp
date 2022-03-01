#include<bits/stdc++.h>
using namespace std;
  
 
 struct node* movetohead(struct node* head1 , struct node* head2){
     struct node* ptr1=head1;
     struct node* ptr2=head2;
     struct node* head=NULL;
     struct node* curr=NULL;
     while(ptr1!=NULL and ptr2!=NULL){
         if(ptr1->data==ptr2->data){
             if(head==NULL){
                 struct node* temp=(struct node*)malloc(sizeof(struct node));
                 temp->data=ptr1->data;
                 head=temp;
                 curr=temp;
                 
             }
             else{
                 struct node* temp=(struct node*)malloc(sizeof(struct node));
                 temp->data=ptr1->data;
                 curr->next=temp;
                 curr=curr->next;
             }
             ptr1=ptr1->next;
             ptrr2=ptr2->next;
             
         }
         if(ptr1->data<ptr2->data){
             ptr1=ptr1->next;
             
         }
         else{
             ptr2=ptr2->next;
         }
     }
   return head;
     
 }
  
  int main(){
  
      
  }
