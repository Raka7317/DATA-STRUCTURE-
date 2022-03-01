//remove dublicte in unsorted linked list
#include<bits/stdc++.h>

sturct node* removedublicate(struct node* head){
    map<int,int>mp;
    struct node* temp=head;
    mp[arr->data]++;
    struct node* prev=curr;
    curr=curr->next;
    while(curr!=NULL){
    if(mp[curr->data]>0){
        prev->next=curr->next;
        free(curr);
    }    
    else{
        mp[curr->data]++;
        prev=curr;
    }
    curr=curr->next;
    
    }

    return head;
}
