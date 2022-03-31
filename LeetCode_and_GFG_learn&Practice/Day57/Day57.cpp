//                                        Date:- 25 March, 2022


// Problem:- Insert in Middle of Linked List



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
// } Driver Code Ends


//
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// 

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node* new_node = new Node(x);
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    if(count%2==0){
        count = count/2;
        for(int i=0;i<count-1;i++){
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    else{
        count = count/2+1;
        for(int i=0;i<count-1;i++){
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    return head;
}


*/


// Another way of doing this

/*

Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
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
// } Driver Code Ends


// 
// Structure of the node of the linked list is as
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// 

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


//                                          OOPS


//                                      Abstraction
/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};

int main(){
    Employee employee1 = Employee("Saldine","YT-CodeBeauty",25);
    Employee employee2 = Employee("John","Amazon",35);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}


*/



//                                      Inheritance


/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<getName()<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    d.fixBug();
    return 0;
}


*/


// We can not access private memeber of base class into our derived class . Bcuz private member is accessible inside the same class only


//  Below program gives error

/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    d.fixBug();
    return 0;
}



*/

//  Let's see how we access private member into our derived class by making that member  to protected



/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    d.fixBug();
    return 0;
}


*/




// We can't use the AskForPromotion() menthod with object becasue by default inheritance is private

// Let's see example


/*

#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    d.fixBug();
    d.fixBug();
    d.fixBug();
    //'virtual void Employee::AskForPromotion()' is inaccessible within this context
    d.AskForPromotion();//'Employee' is not an accessible base of 'Developer' 
    return 0;
}


*/

// Fix above code by making the inheritance class to public like below


/*

#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    d.fixBug();
    d.fixBug();
    d.fixBug();
    d.AskForPromotion();
    return 0;
}


*/



// Let's create another sub class of Employee let's say Teacher

/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};

class Teacher: public Employee{
    public:
    string Subject;
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age,string subject)
        : Employee(name,company,age){
            Subject = subject;
        }
};
int main(){
    Teacher t = Teacher("John","Cool School",35,"Mathematics");
    t.preparedLesson();
    t.AskForPromotion();
    return 0;
}
*/


//                                      Polymorphism



/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
        void work(){
            cout<<Name<<" is checking mail, tasks backlog, performing tasks"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
};

class Teacher: public Employee{
    public:
    string Subject;
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age,string subject)
        : Employee(name,company,age){
            Subject = subject;
        }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    Teacher t = Teacher("John","Cool School",35,"Mathematics");
    d.work();
    t.work();
    return 0;
}



*/


// 


/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
        void work(){
            cout<<Name<<" is checking mail, tasks backlog, performing tasks"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
    void work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }
};

class Teacher: public Employee{
    public:
    string Subject;
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age,string subject)
        : Employee(name,company,age){
            Subject = subject;
    }
    void work(){
       cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    Teacher t = Teacher("John","Cool School",35,"Mathematics");
    d.work();
    t.work();
    return 0;
}
*/


// 

/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
        void work(){
            cout<<Name<<" is checking mail, tasks backlog, performing tasks"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
    void work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }
};

class Teacher: public Employee{
    public:
    string Subject;
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age,string subject)
        : Employee(name,company,age){
            Subject = subject;
    }
    void work(){
       cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    Teacher t = Teacher("John","Cool School",35,"Mathematics");
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->work();
    e2->work();
    return 0;
}


*/


// How to avoid it by using virtual funtion in Employee classs

/*
#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;

    protected:
        string Name;
    public:
        void setName(string name){ Name = name;}
        string getName() { return Name; }
        void setCompany(string company){ Company = company;}
        string getCompnay() { return Company; }
        void setAge(int age){ Age = age;}
        int getAge(){ return Age; }
        void IntroduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void AskForPromotion(){
            if(Age>30)
                cout<<Name<<" Got Promotion!"<<endl;
            else
                cout<<Name<<", sorry No promotion for you"<<endl;
        }
        virtual void work(){
            cout<<Name<<" is checking mail, tasks backlog, performing tasks"<<endl;
        }
};


class  Developer: public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;  //:string Employee::Name' is private within this context
    }
    void work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }
};

class Teacher: public Employee{
    public:
    string Subject;
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age,string subject)
        : Employee(name,company,age){
            Subject = subject;
    }
    void work(){
       cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main(){
    Developer d = Developer("Saldina","YT-CodeBeauty",25,"C++");
    Teacher t = Teacher("John","Cool School",35,"Mathematics");
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->work();
    e2->work();
    return 0;
}

*/



//                                      Leetcode

// Problem:- Linked List Cycle


// It's a classic algo for detecting cycles in a linked list. We use two pointers to traverse the list: 
// The first one is moving one node at the time and the second two nodes at the time. If there is a cycle, 
// sooner or later pointers will meet and we return true. If the fast pointer reached the end of the list, 
// that means there is no cycle and we can return false.

// For reference: Floyd's Cycle Detection Algorithm

/*
EXPLANATION

- Floyd’s Cycle-Finding Algorithm // fast slow approach // 2 pointers // "tortoise and the hare algorithm"

- Approach: This is the fastest method and has been described below:

- Traverse linked list using two pointers.

- Move one pointer(slow_p) by one and another pointer(fast_p) by two.

- If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list 
doesn’t have a loop.
*/
// Time: O(n) - for traversing
// Space: O(1) - nothing stored

/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
            
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while(fastPtr != NULL && fastPtr->next != NULL){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr)
                return true;
        }
        return false;
    }
};

*/

