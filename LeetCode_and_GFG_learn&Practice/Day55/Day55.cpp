//                              Date:- 23 March, 2022

//                              Linked List

// Insertion of Node at ith position in C++


/*

void insertAtNth(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
    }
    Node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
*/


// GFG--> 

/*

// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

//  Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


// Function to get the middle of the linked list
bool isCircular(struct Node *head);

//  Driver program to test above function
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){

        cin>>n>>k;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
        if (k==1 && n >= 1)
              tail->next = head;


    printf("%d\n", isCircular(head));
    }
    return 0;
}

// } Driver Code Ends


//  Link list Node 
// struct Node
// {
//     int data;
//     struct Node* next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
    
// }; 


//  Should return true if linked list is circular, else false 
bool isCircular(Node *head)
{
   // Your code here
    Node* temp = head;
    while(temp->next != head && temp->next != NULL){
        temp = temp->next;
    }
    if(temp->next == head){
        return true;
    }
    return false;
}


*/

//  Another way

/*

bool isCircular(Node *head)
{
   // Your code here
    if(head == NULL)
        return true;
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast -> next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}

*/