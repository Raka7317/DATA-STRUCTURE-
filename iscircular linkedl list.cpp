#include<bits/stdc++.h>
using namespace std;
  
 
 int iscircular(struct node* head){
   if(head==NULL){
       return 1;
   }
   struct node*  temp=head->next;
   while(temp!=head){
       temp=temp->next;
   }
   if(temp==head){
       return 1;
   }
   return -1;
   
   
     
 }
  
  int main(){
  
      
  }
