//                          Date:5 May, 2022

//                          Linked List


//                          Revision


// Problem Type 1:- Insertion at the End

/*
#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
void Insert(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	Node *last = *head_ref; 
	new_node->data = new_data;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return;
}
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}
int main()
{
	Node* head = NULL;
	Insert(&head, 4);
	Insert(&head, 3);
	Insert(&head, 5);
	Insert(&head, 9);
	Insert(&head, 7);
	cout<<"Created Linked list is: ";
	printList(head);
	return 0;
}

*/



// ------------------------------------- 

// Problem Type 2:- Insertion at Beginning


// In C++

// 1. we declare head as a Global variable

/*
#include<iostream>
#include<list>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;          //Global variable, can be accessed anywhere
void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    Node* temp = head;
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
    cout<<"How many number \n";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>x;
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


#include<iostream>
#include<list>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
Node* Insert(Node* head,int x){
    Node* temp = new Node();
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
#include<iostream>
#include<list>
using namespace std;
// struct Node{
//     int data;
//     struct Node* next;
// };

class Node{
  public:
    int data;
    Node* next;
};
void Insert(Node** pointerToHead,int x){
    struct Node* temp = new Node();
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



// --------------------------------------------


// Problem Type 3:- Inserting a node at nth position

/*
#include<iostream>
#include<list>


// struct Node{
//     int data;
//     struct Node* next;
// };

class Node{
  public: 
    int data;
    Node* next;
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


// -----------------------------------------------

// Problem Type 4:- Linked list:- Delete a Node at nth position

/*

#include<iostream>
#include<list>
using namespace std;

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
    Node* temp1 = head;
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



//          Problem-- >GFG

//1. Print Linked List Element

/*
#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*start;

void insert();
class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      Node* temp = head;
      while(temp!= NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
      }
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      start=NULL;
      insert();
      Solution ob;
      ob.display(start);
      cout<<endl;
    }
    return 0;
}


 void insert()
 {
     int n,value;
     cin>>n;
     struct Node *temp;
     for(int i=0;i<n;i++)
     {
         cin>>value;
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next = (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }




*/



// ------------------------------------


// Linked List Insertion ---> GFG 

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





// ---------------------------------------


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


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        Node* temp = head;
        int count =0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
};
    



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}  

*/


// ----------------------------------------------------

// Problem :-  Check If Circular Linked List

/*
#include <cstdio>
#include <cstdlib>
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


//  Function to get the middle of the linked list
bool isCircular(struct Node *head);

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


// --------------------------------

// Problem:- Node at a given index in linked list 

/*
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};
 
struct node* push(struct node* head, int d)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));

    new_node->data  = d;
    new_node->next = NULL;
    
    if (head == NULL) return new_node;
    
    struct node* h = head;
    while (head->next != NULL) head = head->next;
    head->next = new_node;
    
    return h;
}

int GetNth(struct node* head, int index);
int main()
{
  int T,i,n,l,k;
    
    cin>>T;
    
    while(T--){
    struct node *head = NULL;
        
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            head = push(head, l);
        }
   
    printf("%d\n", GetNth(head, k));  
    getchar();
    }
    return 0;
}

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  // Code here
  node* temp  = head;
  if(temp==NULL){
    return 0;
    }
    for(int i=1;i<index;i++){
        temp =(*temp).next;
    }
    return (*temp).data;
}

*/



// ---------------------------------

// Problem:- Identical Linked Lists


/*

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool areIdentical(struct Node *a, struct Node *b);


int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp , d1 , d2;
        struct Node *head1 = NULL , *tail1=NULL;
        struct Node *head2 = NULL , *tail2 =NULL;
        cin>>n1;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        while(n1-- > 1){
            cin>>tmp;
            tail1->next = new Node(tmp);
            tail1 = tail1->next;
        }
        cin>>n2;
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        while(n2-- >1)
        {
            cin>>tmp;
            tail2->next = new Node(tmp);
            tail2 = tail2->next;
        }
        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}

//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node* temp1 = head1;
	Node* temp2 = head2;
	if(temp1== NULL || temp2==NULL){
	    return false;
	}
	while(temp1 != NULL && temp2 != NULL){
	    if(temp1->data!=temp2->data){
	        return false;
	    }
	    temp1 = temp1->next;
	    temp2 = temp2->next;
	}
	return (temp1 == NULL && temp2 == NULL);
}

*/


// --------------------------------------

// Problem:-  Insert in Middle of Linked List

/*

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}


//Function to insert a node in the middle of the linked list.


Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* new_node = new Node(x);
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    int mid = (count + 1)/2;
    for(int i=1;i<=mid-1;i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}


*/

// ------------------------------------------------

// Problem:- Linked List Length Even or Odd?

/*

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
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

// Function to check the length of linklist
int isLengthEvenOrOdd(struct Node* head);

// Driver function
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp,first, i ,l;
        struct Node* head = NULL, *tail = NULL;
        cin>>n;
        cin>>first;
        head = new Node(first);
        tail = head;
        for(i=0;i<n-1;i++)
            {
                cin>>l;
                tail->next = new Node(l);
                tail = tail->next;
            }
        if( isLengthEvenOrOdd(head) == 0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
	return 0;
}

// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    // if(count%2==0){
    //     return 0;
    // }
    // return 1;
    return count%2==0?0:1;
     
}

*/




