//                                              Date:- 22 March, 2022


//                                                  Linked List

// In C++


// Below is a sample program in both C/C++ and Java to create a simple linked list with 3 Nodes.




// A simple C/C++ program to introduce 
// a linked list 

// #include<bits/stdc++.h>
// using namespace std;

// // Linked List Node
// struct Node 
// { 
//     int data; // Data
//     struct Node *next;  // Pointer
// }; 

// // Program to create a simple linked 
// // list with 3 nodes 
// int main() 
// { 
//     struct Node* head = NULL; 
//     struct Node* second = NULL; 
//     struct Node* third = NULL; 
        
//     // allocate 3 nodes in the heap 
//     head = new Node; 
//     second = new Node; 
//     third = new Node; 
    
//     /* Three blocks have been allocated dynamically. 
//         We have pointers to these three blocks as first, 
//         second and third     
//         head         second         third 
//             |             |             | 
//             |             |             | 
//         +---+-----+     +----+----+     +----+----+ 
//         | # | # |     | # | # |     | # | # | 
//         +---+-----+     +----+----+     +----+----+ 
        
//     # represents any random value. 
      
//       Data is random because we haven’t assigned 
//       anything yet */
        
//     head->data = 1; //assign data in first node 
    
//     // Link first node with the second node
//     head->next = second;  
        
//     /*  data has been assigned to data part of first 
//         block (block pointed by head). And next 
//         pointer of first block points to second. 
//         So they both are linked. 
    
//         head         second         third 
//             |             |             | 
//             |             |             | 
//         +---+---+     +----+----+     +-----+----+ 
//         | 1 | o----->| # | # |     | # | # | 
//         +---+---+     +----+----+     +-----+----+     
//     */
        
//     // assign data to second node 
//     second->data = 2; 
    
//     // Link second node with the third node 
//     second->next = third; 
        
//     /*  data has been assigned to data part of second 
//         block (block pointed by second). And next 
//         pointer of the second block points to third 
//         block. So all three blocks are linked. 
        
//         head         second         third 
//             |             |             | 
//             |             |             | 
//         +---+---+     +---+---+     +----+----+ 
//         | 1 | o----->| 2 | o-----> | # | # | 
//         +---+---+     +---+---+     +----+----+     */    
        
//     third->data = 3; //assign data to third node 
//     third->next = NULL; 
        
//     /*  data has been assigned to data part of third 
//         block (block pointed by third). And next pointer 
//         of the third block is made NULL to indicate 
//         that the linked list is terminated here. 
    
//         We have the linked list ready. 
    
//             head     
//                 | 
//                 | 
//             +---+---+     +---+---+     +----+------+ 
//             | 1 | o----->| 2 | o-----> | 3 | NULL | 
//             +---+---+     +---+---+     +----+------+     
        
        
//         Note that only head is sufficient to represent 
//         the whole list. We can traverse the complete 
//         list by following next pointers. */    
    
//     return 0; 
// } 





/*

//                              Linked List Traversal: 

In the previous program, we have created a simple linked list with three nodes. 
Let us traverse the created list and print the data of each node. For traversal, let us write a general
 purpose function printList() that prints any given list.

*/

/*


// A simple C/C++ program to introduce 
// a linked list 

#include<bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node 
{ 
    int data; // Data
    struct Node *next;  // Pointer
}; 

// This function prints contents of linked list 
// starting from  the given node 
void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<node->data<<" "; 
        node = node->next; 
    } 
} 

// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
        
    // allocate 3 nodes in the heap 
    head = new Node; 
    second = new Node; 
    third = new Node; 
    
  
    head->data = 1; //assign data in first node 
    
    // Link first node with the second node
    head->next = second;  
        
    // assign data to second node 
    second->data = 2; 
    
    // Link second node with the third node 
    second->next = third; 
    third->data = 3; //assign data to third node 
    third->next = NULL; 
        
    // Print the linked list
    printList(head);
    
    return 0; 
} 


*/


// A simple C/C++ program to introduce 
// a linked list 

/*

#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  struct Node* next;
};
void Print(Node* Node){
    while(Node != NULL){
        cout<<Node->data<<"->";
        Node = Node->next;
    }
    cout<<"NULL";
    cout<<"\n";
}

int main(){
    struct Node* head = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
    
    head = new Node();
    first = new Node();
    second = new Node();
    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = NULL;
    Print(head);
    return 0;
}

*/



//                          Insertion in Singly Linked List

//Given the head node of a linked list, the task is to insert a new node in this already created linked list.


/*

There can be many different situations that may arise while inserting a node in a linked list. Three most 
frequent situations are:

- Inserting a node at the start of the list.
- Inserting a node after any given node in the list.
- Inserting a node at the end of the list.


*/


/*
// Inserting a Node at Beginning:


 Inserting a node at the start of the list is a four-step process. In this process, the new node is always 
 added before the head of the given Linked List and the newly added node becomes the new head of the Linked 
 List.

For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked 
List becomes 5->10->15->20->25.


*/

// Below is the 4 step process of adding a new node at the front of Linked List declared at the beginning 
// of this post:


/*

//  Given a reference (pointer to pointer) to the 
//    head of a list and an int, insert a new node 
//    on the front of the list. 

void push(struct Node** head_ref, int new_data) 
{ 
    //  1. allocate node 
    Node* new_node = new Node; 
   
    //  2. put in the data  
    new_node->data  = new_data; 
   
    //  3. Make next of new node as head 
    new_node->next = (*head_ref); 
   
    //  4. move the head to point to the new node 
    (*head_ref)    = new_node; 
} 
*/


// Insertion at beginning in C++

/*

#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  struct Node* next;
};
void Print(Node* Node){
    while(Node != NULL){
        cout<<Node->data<<"->";
        Node = Node->next;
    }
    cout<<"NULL";
    cout<<"\n";
}

void push(struct Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node; 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
int main(){
    struct Node* head = NULL;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        push(&head,x);
    }
    Print(head);
    return 0;
}

*/

// Inserting a Node after given Node

/*

Inserting a Node after a given Node is also similar to the above process. One has to first allocate the 
new Node and change the next pointer of the newly created node to the next of the previous node and the 
next pointer of the previous node to point to the newly created node.

*/





// Insertion at end

/*

#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  struct Node* next;
};
void Print(Node* Node){
    while(Node != NULL){
        cout<<Node->data<<"->";
        Node = Node->next;
    }
    cout<<"NULL";
    cout<<"\n";
}


//  Given a reference (pointer to pointer) to  
//    the head of a list and an int, appends a new 
//    node at the end  

void append(struct Node** head_ref, int new_data) 
{ 
    //  1. allocate node 
    Node* new_node = new Node; 
  
    struct Node *last = *head_ref;  // used in step 5
   
    //  2. put in the data  
    new_node->data  = new_data; 
  
    //  3. This new node is going to be the last node,  
        //   so make next of it as NULL
    new_node->next = NULL; 
  
    //  4. If the Linked List is empty, then make 
        //   the new node as head 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    }   
       
    // 5. Else traverse till the last node 
    while (last->next != NULL) 
        last = last->next; 
   
    // 6. Change the next of last node 
    last->next = new_node; 
    return;     
} 

int main(){
    struct Node* head = NULL;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        // push(&head,x);
        // insertAfter(head,x);
        append(&head,x);
    }
    Print(head);
    return 0;
}


*/



//                                      GFG->practice

// Linked list insertion
/*

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 



 // } Driver Code Ends
// Structure of the linked list node is as
// struct Node {
//   int data;
//   struct Node * next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// }; 

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* new_node = new Node(x);
       new_node->next = head;
       head = new_node;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* new_node = new Node(x);
       Node* last = head;
       new_node->data = x;
       new_node->next = NULL;
       if(head == NULL){
           return new_node;
       }
       while(last->next != NULL){
           last = last->next;
       }
       last->next = new_node;
       return head;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

  // } Driver Code Ends


  */
