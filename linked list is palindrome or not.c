#include<bits/stdc++.h>
using namespace std;
  
bool isplindrom(struct node* head){
    struct node* slow=head;
    struct node* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow =slow->next;
        fast=fast->next->next;
    }
     struct node* prev=NULL;
     struct node* next;
     struct node* curr=slow;
     while( curr!=NULL){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     fast=head;
     while(prev!=NULL){
         if(fast->data!=pre->data){
             return false;
      }
      fast=fast->next;
      prev=prev->next;
     }
     return true;
}
  int main(){
  
      
  }
