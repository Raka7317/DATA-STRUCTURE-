#include<bits/stdc++.h>
using namespace std;
  
 
 struct node* findmiddleelement(struct node* head){
     struct node* slow=head;
     struct  node* fast=head;
     while(fast!=NULL or fast->next!=NULL){
         slow=slow->next;
         fast=fast->next;
         
     }
     return slow;

     
 }
  
  int main(){
  
      
  }
