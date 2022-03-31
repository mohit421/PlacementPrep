//                                  Date:- 24 March , 2022
/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    string Name;
    string Company;
    int Age;
};

int main(){
    Employee employee1;
    employee1.Name = "Mohit"; //std::string Employee::Name’ is private within this context
    cout<<employee1.Name<<endl;
    return 0;

}

*/

//                      Both are same


/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
};

int main(){
    Employee employee1;
    employee1.Name = "Mohit"; //std::string Employee::Name’ is private within this context
    cout<<employee1.Name<<endl;
    return 0;

}

*/


// as a protected access modifier


/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    protected:
        string Name;
        string Company;
        int Age;
};

int main(){
    Employee employee1;
        employee1.Name = "Mohit"; //error: expected primary-expression before ‘protected’
        cout<<employee1.Name<<endl;
    return 0;

}


*/



// Using public Modifier


/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;
};

int main(){
    Employee employee1;
    employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;
    return 0;

}

*/


// How to invoke Behavious of an employee

/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;

        // We can describe behavioud using class Method
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
};

int main(){
    Employee employee1;
    employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;
    return 0;

}
*/


// How to invoke function 

/*

#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;

        // We can describe behavioud using class Method
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
};

int main(){
    Employee employee1;
    employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    Employee employee2;
    employee2.Name = "John";
    employee2.Company = "Amazon";
    employee2.Age = 35;
    employee2.IntroduceYourself();
    
    return 0;
}



*/



/*

There is one problem with above if we want to write for some more user like 10 or 100 user then 
for each user we have repeat the same line of code 

So to avoid this repeation we use Construction 

*/



// Default Constructor 

/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;

        // We can describe behavioud using class Method
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }

};

int main(){
    Employee employee1;
    // employee1.Name = "Saldina";
    // employee1.Company = "YT-CodeBeauty";
    // employee1.Age = 25;
    employee1.IntroduceYourself();
    Employee employee2;
    // employee2.Name = "John";
    // employee2.Company = "Amazon";
    // employee2.Age = 35;
    employee2.IntroduceYourself();
    
    return 0;
}


*/

// How to define our own constructor


/*
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;

        // We can describe behavioud using class Method
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }

        // Define constructior
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
};

int main(){
    Employee employee1 = Employee("Saldina"," YT-CodeBeauty",25);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("John" ,"Amazon",35);
    employee2.IntroduceYourself();
    
    return 0;
}


*/





//                                     Linked List

// Problem:- Node at a given index in linked list

/*
// C program to find n'th node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 
//  Link list node 
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


//  Driver program to test above function
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
 // } Driver Code Ends

// // Print he nth node in the linked list Node is defined as 
// Link list node
// struct node
// {
//     int data;
//     struct node* next;
    
//     node(int x){
//         data = x;
//         next = NULL;
//     }
// }; 


// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  // Code here
  node* temp = head;
  int count = 0;
  while(temp!= NULL){
      count++;
      if(count==index){
          return temp->data;
      }
      temp = temp->next;
  }
  
}

*/


// Antoher way of doing this

/*
int GetNth(struct node* head, int index){
  // Code here
  node* temp = head;
  int i = 1;
  while(i<index){
      temp = temp->next;
      i++;
  }
  int ans = temp->data;
  return ans;
  
}


*/


// 

/*
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


// Problem:- Linked List Length Even or Odd?

/*

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


// Whole code

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

// } Driver Code Ends


// structure of a node of the linked list is as
// struct Node
// {
// 	int data;
// 	struct Node* next;
	
// 	Node(int x){
// 	    data = x;
// 	    next = NULL;
// 	}
	
// };
// 
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
    if(count%2==0){
        return 0;
    }
    return 1;
    
     
}

*/

