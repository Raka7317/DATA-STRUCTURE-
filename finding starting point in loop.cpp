//find starting point  of loop in linked list;


#include<bits/stdc++.h>
int startingpoint (struct node* head){
    struct node* low=head;
    struct node* high=head;
    while(low!=NULL && high!=NULL && high->next!=NULL){
        low=low->next;
        high=high->next->next;
        if(low==high){
            break;
        }
    }
    
    if(low!=high){
        return -1;
    }
   low=head;
   while(low!=high){
       low=low->next;
       high=high->next;
       
   }
   return low->data;
}
