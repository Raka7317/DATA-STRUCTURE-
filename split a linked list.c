#include<bits/stdc++.h>
using namespace std;
  
void splitlinkedlist(struct node* head, node** head1ref, node** head2ref){
    
    struct node* slow=head;
    strucrt  node* fast=head->next;
    while(fast!=head and (fast->next)!=head){
        slow=slow->next;
        fast=fast->next;
    }
    *head1ref=head;
    *head2ref=slow->next;
    slow->next=*head2ref;
    node* curr=head2ref
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=*head2ref;
}
  int main(){
  
      
  }
