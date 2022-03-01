

//linked list insertion  in singly linked list



#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    
    return 0;
}




//linked list deletion  in singly linkedlist


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct node * deleteFirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct node * deleteAtIndex(struct node * head, int index){
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct node * deleteAtLast(struct node * head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}


// Case 4: Deleting the element with a given value from the linked list
struct node * deleteAtIndex(struct node * head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct Node));
    second = (struct node *)malloc(sizeof(struct Node));
    third = (struct node *)malloc(sizeof(struct Node));
    fourth = (struct node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    return 0;
}



// cirular linked list


#include<stdio.h>
#include<stdlib.h>
 
 struct node{
     int data;
     struct node* next;
 };
 
 
 void display(struct node*head){
     struct node* temp=head;
     do{
         printf("%d",temp->data);
     }
     while(temp!=head);
 }
 
struct node* deleteathead(struct node* head){
     struct node* temp=head;
     head=head->next;
     free(temp);
     return head;
 }

 
struct node* deleteattail(struct node* head){
     struct node* temp=head;
     struct node* q=temp->next;
     while(q->next!=head){
         temp=temp->next;
         q=q->next;
     }
  temp->next=q->next;
  free(q);
  return head;
  
 }
 
 struct node* deleteatindex(struct node* head, int index){
     struct node* temp=head;
     struct node* q=temp->temp->next;
     for(int i=0;i<index-1;i++){
         temp=temp->next;
         q=q->next;
     }
     temp->next=q->next;
     free(q);
     return head
 }
 
 
 struct node* deleteatnode(struct node* head, struct node* ptr){
     struct node* temp=head;
     struct node* q=temp->next;
     while(q->next!=ptr){
         temp=temp->next
         q=q->next;
     }
     temp->next=q->next;
     free(q);
      return head;
 }

 
int main()
{
   struct node* head;
   struct node* second;
   struct node* third;
   struct node* fourth;
   
   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   fourth=(struct node*)malloc(sizeof(struct node));
   
   
   head->data=1;
   head->next=second;
   
   second->data=3;
   second->next=third;
   
   third->data=6;
   third->next=head;
   

  
  
   
    return 0;
}




// doubly linked list
// insertion is perfomed here 


#include<stdlib.h>
#include<stdio.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void print(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        
        printf(" %d  ",ptr->data);
            
        ptr=ptr->next;
    }
}

struct node* insertathead(struct node* head,int data){
    if(head==NULL){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->prev=NULL;
        ptr->next=NULL;
        
        head=ptr;
    }
    else{
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->prev=NULL;
        ptr->next=head;
        head=ptr;
    }
    return head;
}



 struct node* inserattail(struct node* head, int data){
     if(head==NULL){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else{
        struct node* ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
    
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=data;
    ptr->next=ptr2;
    ptr2->prev=ptr;
    ptr2->next=NULL;
 
    }
       return head;
 }
 
 struct node* insertafternode(struct node* head, int data,struct node* q){
     if(head==NULL){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else{
    struct node* ptr=head;
    while(ptr!=q){
        ptr=ptr->next;
        
    }
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=data;
    ptr->next=ptr2;
    ptr2->prev=ptr;
    ptr2->next=ptr->next->next;
    }
    return head;
    
 }
 


int main(){
    struct node* head;
    struct node* second;
    struct node* third ;
    struct node* fourth;
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    head->data=3;
    head->next=second;
    head->prev=NULL;
    second->data=5;
    second->next=third;
    second->prev=head;
    third->data=9;
    third->next=fourth;
    third->prev=second;
    fourth->data=5;
    fourth->prev=third;
    fourth->next=NULL;
    print(head);
    
    
    return 0;
}



// doubly linked list deletion 






//linked list deletion  in singly linkedlist


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    head->prev=NULL;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    q->next->prev=p;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}


// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteAtIndexbyvalue(struct Node* head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        q->next->prev=p;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    return 0;
}
