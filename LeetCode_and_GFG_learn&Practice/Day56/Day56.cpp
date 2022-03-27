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


