//                                      Date:- 8 May, 2022


//                                        Linked List 

// Print Linked List using Recursion in farward direction

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void Print(Node* p){
    if(p==NULL) return;      // Exit Condition
    printf("%d ",p->data); // First print the value in the Node
    Print(p->next);         //Recursive Call
    
}


Node* Insert(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) head = temp;
    else{
        Node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    
    return head;
}

int main(){
    Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,6);
    head = Insert(head,5);
    head = Insert(head,4);
    Print(head);
}

*/


// -----------------------------------


// Print Linked List in  Backward direction
/*

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void Print(Node* p){
    if(p==NULL) return;      // Exit Condition
    Print(p->next);         //Recursive Call
    printf("%d ",p->data); // First print the value in the Node
}


Node* Insert(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) head = temp;
    else{
        Node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    
    return head;
}

int main(){
    Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,6);
    head = Insert(head,5);
    head = Insert(head,4);
    Print(head);
}
*/


