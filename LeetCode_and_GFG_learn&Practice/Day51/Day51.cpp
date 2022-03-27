//                           Date:- 19 March,2022


//                              Linked List


/*

// C style for declaring node* or pointer to node

strict Node{
    int data;
    struct node* link;
}




// In C++

struct Node{
    int data;
    Node* link;
}



// In C--> creating node if the list is empty


// 1.

Node* A;
A = NULL;
Node* temp = (Node*) malloc(sizeof(Node));
(*temp).data = 2;
(*temp).link = NULL;
A = temp;


//  another way of writing (*temp).data or (*temp).link

Node* A;
A = NULL;
Node* temp = (Node*) malloc(sizeof(Node));
temp->data = 2;
temp->link = NULL;
A = temp;



//  IN c++ for creating node if the list is empty

Node* A;
A = NULL;
Node* temp = new Node();
temp->data = 2;
temp->link = NULL;
A = temp;

// traversal of linked list
Node* temp1 = A;
while(temp1->link != NULL){
    temp1 = temp1->link;
}



//  In C++ creating node if the list is not empty

Node * A;
A = NULL;
temp->data = 2;
temp->link = NULL;
A = temp;

temp = new Node();
temp->data = 4;
temp->link = NULL;

Node* temp1 = A;
while(temp1->link != NULL){
    temp1 = temp1->link;
}
temp1->link = temp;

*/



// Insertion of node at the beginning

// Code in C

// 1.I we declare head as a Global variable

/*
#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;          //Global variable, can be accessed anywhere
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* temp = head;
    printf("List is: ");
    while(temp!= NULL){
        printf(" %d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;        //empty list
    int n,i,x;
    printf("How many number \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}

*/


// 2.

/*
What if head is not declared as Global variable
instead it was declared inside the main function as a local variable
*/


/*
#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};


Node* Insert(Node* head,int x){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node* head){
    printf("List is: ");
    while(head!= NULL){
        printf(" %d",head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node* head = NULL;        //empty list
    int n,i,x;
    printf("How many number \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        head = Insert(head,x);
        Print(head);
    }
}
*/




// We can also do using head reference

/*
#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};


void Insert(Node** pointerToHead,int x){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *pointerToHead;
    *pointerToHead = temp;
}

void Print(Node* head){
    printf("List is: ");
    while(head!= NULL){
        printf(" %d",head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node* head = NULL;        //empty list
    int n,i,x;
    printf("How many number \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(&head,x);
        Print(head);
    }
}

*/

