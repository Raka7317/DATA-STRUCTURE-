//reverse only k nodes  funciton in linked list;

#include<bits/stdc++.h>
struct node*  reversek(struct node* head, int k){
    node* next;
    node* prev=NULL;
    node* curr=head;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        prev=curr;
        curr=next;
        
    }
    if(next!=NULL){
        head->next=reversek(next,k);
        
    }
    return prev;
}