#include<bits/stdc++.h>
using namespace std;
  
 
 struct node* movetohead(struct node* head){
     struct node* temp=head;
     struct node* q=head;
     while(q->next!=NULL){
         temp=temp->next;
         q=q->next;
         
     }
     q->next=head;
     head=q;
     temp->next=NULL;
     
     
     return head;
     
 }
  
  int main(){
  
      
  }
