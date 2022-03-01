//reverse funciton in linked list;

#include<bits/stdc++.h>

struct node* reverse( struct node* head){
    node* curr=head;
    node* prev=NULL;
    while(curr!=NULL){
        node* next= curr->next;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}