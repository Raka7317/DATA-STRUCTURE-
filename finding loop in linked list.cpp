//reverse only k nodes  funciton in linked list;

#include<bits/stdc++.h>

bool detectloop( struct node* head){
    if(head==NULL)
       return fasle;
    
    node* low=head;
    node* high=head;
    
    while(high!=NULL && high->next!=NULL){
    low=low->next;
    high=high->next->next;
    
        if(high==low){
            return true;
        }
    }
            return false;
      
    
    
}



// detect loop in linked list  by std::map
bool detectloop(struct node* head){
    unorderemap<map>mp;
    while(head!=NULL){
        if(mp[head]==0){
            mp[head]++;        }
            head=head->next;
            }
        else{
            return true;
            
        }
    return false;
}