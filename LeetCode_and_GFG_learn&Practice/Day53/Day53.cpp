//                                      Date:- 21 March, 2022

//                                          Linked List

// In C

// Inserting a node at nth position
/*

#include<stdlib.h>
#include<stdio.h>


struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print(){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);    //List is:- 4 5 2 3
    Print();
}

*/




// Linked list:- Delete a Node at nth position


/*


#include<stdlib.h>
#include<stdio.h>


struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Delete(int n){
    struct Node* temp1 = head;
    if(n==1){
        head = temp1->next;
        // free(temp1);
        delete temp1;
        return;
    }
    int i;
    for(i=0;i<n-2;i++){
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    // free(temp2);
    delete temp2;
}
void Print(){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);    //List is:- 4 5 2 3
    Print();
    int n;
    scanf("%d",&n);
    Delete(n);
    Print();
}

*/




