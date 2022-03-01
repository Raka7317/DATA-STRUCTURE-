//remove dublicte in sorted linked list
#include<bits/stdc++.h>

sturct node* removedublicate(struct node* head){
    struct node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
            
        }
        else{
            temp=temp->next;
        }
        
    }
    return head;
}