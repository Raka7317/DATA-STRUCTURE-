#include<bits/stdc++.h>
using namespace std;
  
 
 struct node* movetohead(struct node* head1 , struct node* head2){
     struct node* ptr1=head1;
     struct node* ptr2=head2;
     int c1=0, c2=0;
     while(ptr1!=NULL){
         ptr1=ptr1->next;
         c1++;
     }
     while(ptr2!=NULL){
         ptr2=ptr2->next;
         c2++;
     }
      
      int diff=abs(c1-c2);
      
      if(c1>c2){
          for(int i=0;i<diff;i++){
              ptr1=ptr1->next;
          }
      }
          else if( c2>c1){
              for(int i=0;i<diff;i++){
                  ptr2=ptr2->next;
              }
          }
          while(ptr1!=ptr2){
          ptr1=ptr1->next;
           ptr2=ptr2->next;
      }
      if(ptr1=ptr2){
          return ptr1->data;
      }
      return -1;
      
     
     
 }
  
  int main(){
  
      
  }
