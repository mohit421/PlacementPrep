// Fork C++ course from GeeksforGeeks  --> Today  Start learning  (Date:- 22 Sept,2021)
//  Learn atleast 4 days in a week
                                            // Day -1
                                            // Namespace

// A program to demonstrate need of namespace
// #include<iostream>
// int main()
// {
//     int value;
//     value = 0;
//     double value; // Error here
//     value = 0.0;
// }


// Here we can see that more than one variables 
// are being used without reporting any error.
// That is because they are declared in the 
// different namespaces and scopes.
// #include <iostream>
// using namespace std;

// // Variable created inside namespace
// namespace first
// {
//     int val = 500;
// }

// // Global variable
// int val = 100;

// int main()
// {
//     // Local variable
//     int val = 200;

//     // These variables can be accessed from
//     // outside the namespace using the scope
//     // operator ::
//     cout << first::val << '\n'; 
//     cout << val<<endl;
//     return 0;
// }


                                            // Definition and Creation:



/*
-> Namespace is a feature added in C++ and not present in C.
-> A namespace is a declarative region that provides a scope to the identifiers (names of the types, 
function, variables etc) inside it.
-> Multiple namespace blocks with the same name are allowed. All declarations within those blocks are 
declared in the named scope.
-> Namespace declarations appear only at global scope.
-> Namespace declarations can be nested within another namespace.
-> Namespace declarations don’t have access specifiers. (Public or private)
-> No need to give semicolon after the closing brace of definition of namespace.
-> We can split the definition of namespace over several units.
*/

                                        // Code

// // Creating namespaces
// #include <iostream>
// using namespace std;
// namespace ns1
// {
//     int value()    { return 5; }
// }
// namespace ns2 
// {
//     const double x = 100;
//     double value() {  return 2*x; }
// }

// int main()
// {
//     // Access value function within ns1
//     cout << ns1::value() << '\n'; 

//     // Access value function within ns2
//     cout << ns2::value() << '\n'; 

//     // Access variable x directly
//     cout << ns2::x << '\n';       

//     return 0;
// }


                                                
                                                // Classes and Namespace:
                                    
// // A C++ program to demonstrate use of class
// // in a namespace
// #include <iostream>
// using namespace std;

// namespace ns
// {
//     // A Class in a namespace
//     class geek
//     {
//     public:
//         void display()
//         {
//             cout << "ns::geek::display()\n";
//         }
//     };
// }

// int main()
// {
//     // Creating Object of geek Class
//     ns::geek obj;

//     obj.display();

//     return 0;
// }


// Class can also be declared inside namespace and defined outside namespace using following syntax

// // A C++ program to demonstrate use of class
// // in a namespace
// #include <iostream>
// using namespace std;

// namespace ns
// {
//     // Only declaring class here
//     class geek;
// }

// // Defining class outside
// class ns::geek
// {
// public:
//     void display()
//     {
//         cout << "ns::geek::display()\n";
//     }
// };

// int main()
// {
//     //Creating Object of geek Class
//     ns::geek obj;
//     obj.display();
//     return 0;
// }


// ///////////////////////////////////////////////////////////////////////////////////


// We can define methods also outside the namespace.

// // A C++ code to demonstrate that we can define 
// // methods outside namespace.
// #include <iostream>
// using namespace std;

// // Creating a namespace
// namespace ns
// {
//     void display();
//     class geek
//     {
//     public:
//        void display();
//     };
// }

// // Defining methods of namespace
// void ns::geek::display()
// {
//     cout << "ns::geek::display()\n";
// }
// void ns::display()
// {
//     cout << "ns::display()\n";
// }

// // Driver code
// int main()
// {
//     ns::geek obj;
//     ns::display();
//     obj.display();
//     return 0;
// }



// ///////////////////////////////////////////////////////////////////////////////////


//  What happen when we exceed valid range of built-in data types in C++? 


// Consider the below programs. 
// 1) Program to show what happens when we cross range of 'char' : 

// Code:-
// #include <iostream>

// using namespace std;

// int main()
// {
//     for (char a = 0; a <= 225; a++)
//         cout << a;
//     return 0;
// }

// Output :- It will generate infinte loop 
/*
// Reason: -  the reason for this is the valid range of character datatype is -128 to 127. 
//            When ‘a’ become 128 through a++, the range is exceeded and as a result the first number 
//            from negative side of the range (i.e. -128) gets assigned to a. As a result of this 'a' 
//            will never reach at point 225. so it will print the infinite series of character.
*/


// ///////////////////////////////////////////////////////////////////////////////////

// 2) Program to show what happens when we cross range of 'bool' : 

// C++ program to demonstrate
// the problem with 'bool'
// #include <iostream>

// using namespace std;

// int main()
// {
//     // declaring Boolean
//     // variable with true value
//     bool a = true;

//     for (a = 1; a <= 5; a++)
//         cout << a;

//     return 0;
// }

// O/p:- 111111....111.... --->infinite times 
// Reason:-  bool valid range is 0 to 1,
//           And for a Boolean variable anything else than 0 is 1 (or true). When 'a' tries to become 2 
//           (through a++), 1 gets assigned to 'a'. The condition a<=5 is satisfied and the control remains 
//           with in the loop.


// ///////////////////////////////////////////////////////////////////////////////////


// 3) Program to show what happens when we cross range of 'short' : 
// Note that short is short for short int. They are synonymous. short, short int, signed short, and 
// signed short int are all the same data-type. 

// C++ program to demonstrate
// the problem with 'short'
// #include <iostream>

// using namespace std;

// int main()
// {
//     // declaring short variable
//     short a;

//     for (a = 32767; a < 32770; a++)
//         cout << a << "\n";

//     return 0;
// }


// output:-  indefinite loop
// reason:- because here 'a' is declared as a short and its valid range is -32768 to +32767. When 'a' tries to 
//          become 32768 through a++, the range is exceeded and as a result the first number from negative side of the 
//          range(i.e. -32768) gets assigned to a. Hence the condition "a < 32770" is satisfied and control remains within 
//          the loop.


// 4) Program to show what happens when we cross range of 'unsigned short' :

// C++ program to demonstrate
// the problem with 'unsigned short'

// #include <iostream>

// using namespace std;

// int main()
// {
//     unsigned short a;

//     for (a = 65532; a < 65536; a++)
//         cout << a << "\n";

//     return 0;
// }

// o/p:-indefinite loop, 

// Reason:-  because here 'a' is declared as a short and its valid range is 0 to +65535.



                                        // Day-2   (Date:-24 sept,2021)

// Pre-increment or pre-decrement in c++

/*
In C++, pre-increment (or pre-decrement) can be used as l-value, but post-increment (or post-decrement) 
can not be used as l-value.

*/
// CPP program to illustrate
// Pre-increment (or pre-decrement)
// #include <cstdio>

// int main()
// {
//     int a = 10;

//     ++a = 20; // works

//     printf("a = %d", a);
//     getchar();
//     return 0;
// }



// CPP program to illustrate
// Post-increment (or post-decrement)
// #include <cstdio>

// int main()
// {
//     int a = 10;
//     a++ = 20; // error
//     printf("a = %d", a);
//     getchar();
//     return 0;
// }


                        // How ++a is different from a++ as lvalue?

/*

-> It is because ++a returns an lvalue, which is basically a reference to the variable to which we can 
further assign — just like an ordinary variable
-> Whereas if you recall how a++ works, it doesn't immediately increment the value it holds. For brevity, 
you can think of it as getting incremented in the next statement. So what basically happens is that a++ 
returns an rvalue, which is basically just a value like the value of an expression which is not stored. 
You can think of a++ = 20;
eg)
int &ref = ++a; // valid
int &ref = a++; // invalid


RULE:

// if a expression starts with pre-increment variable (++a) its value is reflected back

// just remember if a expression starts with a pre-increment variable add extra 1 to the final answer what you get


#include<stdio.h>
int main(){
int a =1 ;   
int x = (a++) + (++a) ; 
int b=1; 
int y = (++b) + (b++) ;
printf("%d\n",x);   //4
printf("%d",y);     //5
return 0;
}


*/


// how to use getline() in c++ when there is blank lines in input ?
/*
In C++, if we need to read few sentences from a stream, the generally preferred way is to use getline() function. 
It can read till it encounters newline or sees a delimiter provided by user.

Here is a sample program in c++ that reads four sentences and displays them with " : newline" at the end
*/

// code
// A simple C++ program to show working of getline
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str;
//     int t = 4;
//     while (t--)
//     {
//         // Read a line from standard input in str
//         getline(cin, str);
//         cout << str << " : newline" << endl;
//     }
//     return 0;
// }


/*
Sample Input :
 This

 is

 Geeks

 for
As expected output is:
This : newline

is  : newline

Geeks : newline

for : newline
The above input and output look good, there may be problems when input has blank lines in between.

Sample Input :
This



is 



Geeks



for
Output:
This : newline

 : newline

is  : newline

 : newline
It doesn't print the last 2 lines. The reason is that getline() reads till enter is encountered even if no 
characters are read. So even if there is nothing in the third line, getline() considers it as a single line
*/


// code

// A simple C++ program that uses getline to read
// input with blank lines
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str;
//     int t = 4;
//     while (t--)
//     {
//         getline(cin, str);

//         // Keep reading a new line while there is
//         // a blank line
//         while (str.length()==0 )
//             getline(cin, str);

//         cout << str << " : newline" << endl;
//     }
//     return 0;
// }

// GetLine and Ignore 
/*
#include<iostream>
using namespace std;
void getLineAndIgnore();
void getLineAndIgnore(){
    string a, d;
    int b;
   
    // Your code here
    getline(cin,a);
    cin>>b;
    cin.ignore();
    getline(cin,d);
    
    cout << a << endl;
    cout << b << endl;
    cout << d << endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        getLineAndIgnore();
    }
    return 0;
}
*/

                        // Precision of floating point number in c++
/*

->floor(),ceil(),trunc(),setprecision() and round() 

-> Decimal equivalent of 1/3 is 0.33333333333333…. An infinite length number would require infinite memory to store, 
and we typically have 4 or 8 bytes. Therefore, Floating point numbers store only a certain number of significant 
digits, and the rest are lost. The precision of a floating point number defines how many significant digits it 
can represent without information loss. When outputting floating point numbers, 

-> cout has a default precision of 6 and it truncates anything after that.

Given below are few libraries and methods which are used to provide precision to floating point numbers in C++:

*/

                                            // floor()

/*
Floor rounds off the given value to the closest integer which is less than the given value.
*/

                                        // code

/*
// C++ program to demonstrate working of floor()
// in C/C++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x =1.411, y =1.500, z =1.711;
    cout << floor(x) << endl;   //1
    cout << floor(y) << endl;   //1
    cout << floor(z) << endl;   //1

    double a =-1.411, b =-1.500, c =-1.611;
    cout << floor(a) << endl;       //  -2
    cout << floor(b) << endl;       //  -2
    cout << floor(c) << endl;       //  -2
    return 0;
}

*/


                                            // ceil():

/*                                          
Ceil rounds off the given value to the closest integer which is more than the given value.
*/

                                        // Code
/*
 // C++ program to demonstrate working of ceil()
// in C/C++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << ceil(x) << endl;        // 2
    cout << ceil(y) << endl;        // 2
    cout << ceil(z) << endl;        // 2

    double a = -1.411, b = -1.500, c = -1.611;
    cout << ceil(a) << endl;        // -1
    cout << ceil(b) << endl;        // -1
    cout << ceil(c) << endl;        // -1
    return 0;
}                                       

*/

                                        // trunc(): 

/*                                        
Trunc rounds removes digits after decimal point.

*/

                                        // Code
/*

// C++ program to demonstrate working of trunc()
// in C/C++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << trunc(x) << endl;       // 1
    cout << trunc(y) << endl;       // 1
    cout << trunc(z) <<endl;        // 1

    double a = -1.411, b = -1.500, c = -1.611;
    cout << trunc(a) <<endl;        // -1
    cout << trunc(b) <<endl;        // -1
    cout << trunc(c) <<endl;        // -1
    return 0;
}
*/

                                                    // round(): 

/*
Rounds given number to the closest integer.
*/

                                                // Code
/*
// C++ program to demonstrate working of round()
// in C/C++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.611;

    cout << round(x) << endl;   // 1
    cout << round(y) << endl;   // 2
    cout << round(z) << endl;   // 2

    double a = -1.411, b = -1.500, c = -1.611;
    cout << round(a) << endl;       //  -1
    cout << round(b) << endl;       //  -2
    cout << round(c) << endl;       //  -2
    return 0;
}     
*/                       

                                    // setprecision(): 

/*
Setprecision when used along with 'fixed' provides precision to floating point numbers correct to decimal 
numbers mentioned in the brackets of the setprecison.

*/

// code
/*
// C++ program to demonstrate working of setprecision()
// in C/C++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;    //  3  -3
    cout << fixed << setprecision(1) << pi <<" "<<npi<<endl;    //  3.1  -3.1
    cout << fixed << setprecision(2) << pi <<" "<<npi<<endl;    //  3.14  -3.14
    cout << fixed << setprecision(3) << pi <<" "<<npi<<endl;    //  3.141  -3.141
    cout << fixed << setprecision(4) << pi <<" "<<npi<<endl;    //  3.1415  -3.1415
    cout << fixed << setprecision(5) << pi <<" "<<npi<<endl;    //  3.14159  -3.14159
    cout << fixed << setprecision(6) << pi <<" "<<npi<<endl;    //  3.141590  -3.141590
}
*/

/*
Note: When the value mentioned in the setprecision() exceeds the number of floating point digits in the 
original number then 0 is appended to floating point digit to match the precision mentioned by the user.
*/


                                    // Loops in C/C++
/*
Loops in programming come into use when we need to repeatedly execute a block of statements. 
For example: Suppose we want to print "Hello World" 10 times. 

*/
// code:-

                                    // Iterative Method

// An iterative method to do this is to write the printf() statement 10 times.
// C program to illustrate need of loops
// #include <stdio.h>

// int main()
// {
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
//     printf( "Hello World\n");
    
//     return 0;
// }


                                        // Using Loops

/*


-> In Loop, the statement needs to be written only once and the loop will be executed 10 times as shown below.
-> In computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached.
-> An operation is done, such as getting an item of data and changing it, and then some condition is checked such as 
whether a counter has reached a prescribed number.
-> Counter not Reached: If the counter has not reached the desired number, the next instruction in the sequence 
returns to the first instruction in the sequence and repeat it.
-> Counter reached: If the condition has been reached, the next instruction "falls through" to the next sequential 
instruction or branches outside the loop.
-> There are mainly two types of loops:
1. Entry Controlled loops: In this type of loops the test condition is tested before entering the loop body. 
For Loop and While Loop are entry controlled loops.
2. Exit Controlled Loops: In this type of loops the test condition is tested or evaluated at the end of loop body. 
Therefore, the loop body will execute atleast once, irrespective of whether the test condition is true or false. 
do - while loop is exit controlled loop.

                                                // for loop

A for loop is a repetition control structure which allows us to write a loop that is executed a specific number of 
times. The loop enables us to perform n number of steps together in one line.                                  

syntax:- 
///////
for (initialization expr; test expr; update expr)

{    

     // body of the loop

     // statements we want to execute

}
///////

// code

// C++ program to illustrate for loop
// #include <iostream>
// using namespace std;


// int main()
// {
//     int i=0;
    
//     for (i = 1; i <= 10; i++)
//     {
//        cout<<"Hello World"<<endl;     
//     }

//     return 0;
// }


                                        // While Loop

While studying for loop we have seen that the number of iterations is known beforehand, i.e. the number of times 
the loop body is needed to be executed is known to us. while loops are used in situations where we do not know 
the exact number of iterations of loop beforehand. The loop execution is terminated on the basis of test condition.
/////////

Syntax:-

initialization expression;
while (test_expression)

{

   // statements

 

  update_expression;
}

//////
// code
// C++ program to illustrate while loop
#include <iostream>
using namespace std;

int main()
{
    // initialization expression
    int i = 1;

    // test expression
    while (i < 6)
    {
        cout<<"Hello World"<<endl;    

        // update expression
        i++;
    }

    return 0;
}


                                                // do while loop
                                                
In do while loops also the loop execution is terminated on the basis of test condition. The main difference 
between do while loop and while loop is in do while loop the condition is tested at the end of loop body, 
i.e do while loop is exit controlled whereas the other two loops are entry controlled loops.

Note: In do while loop the loop body will execute at least once irrespective of test condition.                                                

//////////////////
Syntax:
initialization expression;
do

{

   // statements



   update_expression;
} while (test_expression);

////////////


// Note: Notice the semi - colon(";") in the end of loop

// C++ program to illustrate do-while loop
#include <iostream>
using namespace std;

int main()
{
    int i = 2; // Initialization expression

    do
    {
        // loop body
        cout<<"Hello world"<<endl;    

        // update expression
        i++;

    }  while (i < 1);   // test expression

    return 0;
}

*/

                                    // What about an Infinite Loop?

/*

An infinite loop (sometimes called an endless loop ) is a piece of coding that lacks a functional exit so 
that it repeats indefinitely. An infinite loop occurs when a condition always evaluates to true. 

#include <iostream>
using namespace std;
int main ()
{
    int i;

    // This is an infinite for loop as the condition
    // expression is blank
    for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }
    return 0;
}


// This is an infinite for loop as the condition
    // given in while loop will keep repeating infinitely
/*
    while (i != 0)
    {
        i-- ;
        cout << "This loop will run forever.\n";
    }
*/

    // This is an infinite for loop as the condition
    // given in while loop is "true"
    /*
    while (true)
    {
        cout << "This loop will run forever.\n";
    }
*/

// Important Points:
// Use for loop when number of iterations is known beforehand, i.e. the number of times the loop body 
// is needed to be executed is known.
// Use while loops where exact number of iterations is not known but the loop termination condition is known.
// Use do while loop if the code needs to be executed at least once like in Menu driven programs



// Execute Both if and else statement in c/c++ simultaneously
/*
Syntax of if-else statement in C/C++ language is:

if (Boolean expression)

{

    // Statement will execute only 

    // if Boolean expression is true

}

else

{

    // Statement will execute only if 

    // the Boolean expression is false 

}

*/



/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
if (1) // Replace 1 with 0 and see the magic
{
    label_1: cout <<"Hello ";
    
    // Jump to the else statement after 
    // executing the above statement
    goto label_2;
}
else
{
    // Jump to 'if block statement' if 
    // the Boolean condition becomes false
    goto label_1;

    label_2: cout <<"Geeks";
}
return 0;
}
*/

// C goto: The goto statement in C/C++ also referred to as unconditional jump statement can be used to jump
//  from one point to another within a function. 
/*
Syntax1      |   Syntax2

----------------------------

goto label;  |    label:  

.            |    .

.            |    .

.            |    .

label:       |    goto label;
*/
/*

// C program to print numbers
// from 1 to 10 using goto statement
#include <stdio.h>

// function to print numbers from 1 to 10
void printNumbers()
{
    int n = 1;
label:
    printf("%d ",n);
    n++;
    if (n <= 10)
        goto label;
}

// Driver program to test above function
int main() {
    printNumbers();
    return 0;
}

*/

/*

C return: The return in C or C++ returns the flow of the execution to the function from where it is called. 
This statement does not mandatorily need any conditional statements. As soon as the statement is executed, 
the flow of the program stops immediately and return the control from where it was called. The return statement
 may or may not return anything for a void function, but for a non-void function, a return value is must be 
 returned. 


////
Syntax: 
 
return[expression];

////


// C code to illustrate return
// statement
#include <stdio.h> 

// non-void return type
// function to calculate sum
int SUM(int a, int b) 
{ 
    int s1 = a + b;
    return s1; 
} 

// returns void
// function to print
void Print(int s2)
{
    printf("The sum is %d", s2);
    return;
}

int main() 
{ 
    int num1 = 10;
    int num2 = 10;
    int sum_of = SUM(num1, num2);
    Print(sum_of);
    return 0;

    }

    */


                                // Switch statement in c/c++

/*

Switch case statements are a substitute for long if statements that compare a variable to several integral values 


The switch statement is a multiway branch statement. It provides an easy way to dispatch execution to different
 parts of code based on the value of the expression.
Switch is a control statement that allows a value to change control of execution


Syntax: 


switch (n)

{

    case 1: // code to be executed if n = 1;

        break;

    case 2: // code to be executed if n = 2;

        break;

    default: // code to be executed if n doesn't match any cases

}


//////
Important Points about Switch Case Statements:  


1. The expression provided in the switch should result in a constant value otherwise it would not be valid. 
Valid expressions for switch:

//////////
// Constant expressions allowed

switch(1+2+23)

switch(1*2+3%4)



// Variable expression are allowed provided

// they are assigned with fixed values

switch(a*b+c*d)

switch(a+b+c)


///////

2. Duplicate case values are not allowed.
3. The default statement is optional.Even if the switch case statement do not have a default statement, 
it would run without any problem.
4. The break statement is used inside the switch to terminate a statement sequence. When a break 
statement is reached, the switch terminates, and the flow of control jumps to the next line following 
the switch statement.
5. The break statement is optional. If omitted, execution will continue on into the next case.
 The flow of control will fall through to subsequent cases until a break is reached.
6. Nesting of switch statements are allowed, which means you can have switch statements inside another switch. 
However nested switch statements should be avoided as it makes program more complex and less readable. 
7. Switch statements are limited to integer values only  in the check condition.


Time Complexity : O(1)
Space Complexity: O(1)
*/


//  Learning Macros 
/*
#include<bits/stdc++.h>
#define MULTI(a,b)  a*b
using namespace std;

void macros(int a, int b);
void macros(int a, int b){
    cout<<MULTI(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        macros(a,b);
    }
    return 0;
}
*/


                            //Array and String 

/*
// Array in C/C++
An array in C/C++ or be it in any programming language is a collection of similar data items stored at 
contiguous memory locations and elements can be accessed randomly using indices of an array.  They can be used 
to store collection of primitive data types such as int, float, double, char, etc of any particular type. 
To add to it, an array in C/C++ can store derived data types such as the structures, pointers etc

// Why do we need arrays? 
We can use normal variables (v1, v2, v3, ..) when we have a small number of objects, but if we want to store a 
large number of instances, it becomes difficult to manage them with normal variables. The idea of an array is to 
represent many instances in one variable.


Note: int a[3]={[0...1]=3}; this kind of declaration has been obsolete since GCC 2.5


///////////////////////////////////////////////////////
There are various ways in which we can declare an array. It can be done by specifying its type and size, by 
initializing it or both.

1. Array declaration by specifying size 

// Array declaration by specifying size
int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user specified size
int n = 10;
int arr2[n];



//////////////////////////////////////////////////////

2. Array declaration by initializing elements

// Array declaration by initializing elements
int arr[] = { 10, 20, 30, 40 }

// Compiler creates an array of size 4.
// above is same as  "int arr[4] = {10, 20, 30, 40}"

/////////////////////////////////////////////////////

3. Array declaration by specifying size and initializing elements

// Array declaration by specifying size and initializing
// elements
int arr[6] = { 10, 20, 30, 40 }

// Compiler creates an array of size 6, initializes first
// 4 elements as specified by user and rest two elements as
// 0. above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"


///////////////////////////////////////////////////////

// Advantages of an Array in C/C++: 


1. Random access of elements using array index.
2. Use of less line of code as it creates a single array of multiple elements.
3. Easy access to all the elements.
4. Traversal through the array becomes easy using a single loop.
5. Sorting becomes easy as it can be accomplished by writing less line of code.


// Disadvantages of an Array in C/C++: 


1. Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, 
an array in C is not dynamic.
2. Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with 
the new memory allocation.


// Facts about Array in C/C++: 

1. Accessing Array Elements: 
Array elements are accessed by using an integer index. Array index starts with 0 and goes till size of array minus 1.
2. Name of the array is also a pointer to the first element of array.
eg)

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;

    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];

    return 0;
}

output:- 5 2 -10 5

//////////////////////////////////////////////////////
-> No Index Out of bound Checking: 
There is no index out of bounds checking in C/C++, for example, the following program compiles fine but may 
produce unexpected output when run.  


// This C++ program compiles fine
// as index out of bound
// is not checked in C.

#include <iostream>
using namespace std;

int main()
{
    int arr[2];

    cout << arr[3] << " ";
    cout << arr[-2] << " ";

    return 0;
}

output:- -449684907 4195777 

/////////////////////////////////////////////////

In C, it is not a compiler error to initialize an array with more elements than the specified size. 
For example, the below program compiles fine and shows just Warning.

#include <stdio.h>
int main()
{

    // Array declaration by initializing it 
    // with more elements than specified size.
    int arr[2] = { 10, 20, 30, 40, 50 };

    return 0;
}


Note: The program won't compile in C++. If we save the above program as a .cpp, the program generates compiler 
error "error: too many initializers for 'int [2]'". 


// The elements are stored at contiguous memory locations 

// C++ program to demonstrate that array elements
// are stored contiguous locations

#include <iostream>
using namespace std;

int main()
{
    // an array of 10 integers.  
    // If arr[0] is stored at
    // address x, then arr[1] is 
    // stored at x + sizeof(int)
    // arr[2] is stored at x + 
    // sizeof(int) + sizeof(int)
    // and so on.
    int arr[5], i;

    cout << "Size of integer in this compiler is "
         << sizeof(int) << "\n";

    for (i = 0; i < 5; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Address arr[" << i << "] is " << &arr[i]
             << "\n";

    return 0;
}
output:- 
Size of integer in this compiler is 4

Address arr[0] is 0x7ffe75c32210

Address arr[1] is 0x7ffe75c32214

Address arr[2] is 0x7ffe75c32218

Address arr[3] is 0x7ffe75c3221c

Address arr[4] is 0x7ffe75c32220

////////////////////////////////////////////////////

// Another way to traverse the array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={11,12,13,14,15,16};
    // Way -1
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
  
  cout<<endl;
      // Way 2
    cout<<"By Other Method:"<<endl;
    for(int i=0;i<6;i++)   
        cout<<i[arr]<<" ";
  
    cout<<endl;

    return 0;
}

Output:
11 12 13 14 15 16 

By Other Method:

11 12 13 14 15 16 

////////////////////////////////////////////
*/



                        //  How to pass a 2D array as a parameter in c++/c


/*
A one dimensional array can be easily passed as a pointer, but syntax for passing a 2D array to a function can 
be difficult to remember. One important thing for passing multidimensional arrays is, first array dimension does 
not have to be specified. The second (and any subsequent) dimensions must be given


1) When both dimensions are available globally (either as a macro or as a global constant). 
*/
/*

#include <iostream>
const int M = 3;
const int N = 3;

void print(int arr[M][N])
{
    int i, j;
    for (i = 0; i < M; i++)
      for (j = 0; j < N; j++)
        printf("%d ", arr[i][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    return 0;
}
*/
/*
2) When only second dimension is available globally (either as a macro or as a global constant). 
*/
/*
#include <iostream>
const int N = 3;

void print(int arr[][N], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < N; j++)
        printf("%d ", arr[i][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr, 3);
    return 0;
}

*/

/*
The above method is fine if second dimension is fixed and is not user specified. The following methods handle cases 
when second dimension can also change

*/
/*

// The following program works only if your compiler is C99 compatible.

#include <iostream>

// n must be passed before the 2D array
void print(int m, int n, int arr[][n])
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", arr[i][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(m, n, arr);
    return 0;
}
*/

/*
If compiler is not C99 compatible, then we can use one of the following methods to pass a variable sized 2D array.
*/
/*
4) Using a single pointer 
In this method, we must typecast the 2D array when passing to function.
*/
/*

#include <stdio.h>
void print(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", *((arr+i*n) + j));
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;

    // We can also use "print(&arr[0][0], m, n);"
    print((int *)arr, m, n);
    return 0;
}
*/


/*
#include <stdio.h>
const int M = 3;


void print(int (*arr)[M])
{
    int i, j;
    for (i = 0; i < M; i++)
    for (j = 0; j < M; j++)
        printf("%d ", arr[i][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    return 0;
}
*/

/*
Program-> Programm for fibonacci number
*/
/*

The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ........


In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 
Fn = Fn-1 + Fn-2

with seed values 
F0 = 0 and F1 = 1.

Given a number n, print n-th Fibonacci Number. 


Examples: 


Input  : n = 2
Output : 1
Input  : n = 9
Output : 34
*/
/*
Method 1 (Use recursion) 
A simple method that is a direct recursive implementation mathematical recurrence relation given above.
*/
/*
#include<iostream>
using namespace std;

int fibonacciNum(int n){
    if(n<=1){
        return n;
    }
    return fibonacciNum(n-1) + fibonacciNum(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacciNum(n);
    return 0;
}
*/

/*
Extra Space: O(n) if we consider the function call stack size, otherwise O(1).
*/



/*
Method 2 (Use Dynamic Programming) 
We can avoid the repeated work done in method 1 by storing the Fibonacci numbers calculated so far.
*/

/*
// C++ program for Fibonacci Series  
// using Dynamic Programming 
#include<bits/stdc++.h>
using namespace std;

class GFG{
    
public:
int fib(int n)
{
    
    // Declare an array to store 
    // Fibonacci numbers.
    // 1 extra to handle 
    // case, n = 0 
    int f[n + 2]; 
    int i;

    // 0th and 1st number of the 
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    for(i = 2; i <= n; i++)
    {
        
       //Add the previous 2 numbers 
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
};

// Driver code
int main ()
{
    GFG g;
    int n = 9;
    
    cout << g.fib(n);
    return 0;
}


*/
/*
Another approach(Using formula) :
In this method we directly implement the formula for nth term in the fibonacci series. 
Fn = {[(√5 + 1)/2] ^ n} / √5 
*/

// C++ Program to find n'th fibonacci Number
/*

time complexity:- O(logN)
*/
/*
#include<iostream>
#include<cmath>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main ()
{
  int n = 9;
  std::cout << fib(n) << std::endl;
  return 0;
}
*/


/*
Find the element that appear once in an array where every other element appear twice 

Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) 
time & constant extra space.

Example : 
Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}

Output: 7 

One solution is to check every element if it appears once or not. Once an element with a single occurrence is found,
eturn it. Time complexity of this solution is O(n2).



*/
/*
One solution is to check every element if it appears once or not. Once an element with a single occurrence is found, 
return it. Time complexity of this solution is O(n2).


A better solution is to use hashing. 
1) Traverse all elements and put them in a hash table. Element is used as key and the count of occurrences is used 
as the value in the hash table. 
2) Traverse the array again and print the element with count 1 in the hash table. 
This solution works in O(n) time but requires extra space.

The best solution is to use XOR. XOR of all array elements gives us the number with a single occurrence. The idea 
is based on the following two facts. 
a) XOR of a number with itself is 0. 
b) XOR of a number with 0 is number itself.


Let us consider the above example.  

Let ^ be xor operator as in C and C++.
res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:

res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
Below are implementations of above algorithm. 
*/
/*

// C++ program to find the array 
// element that appears only once
#include <iostream>
using namespace std;

int findSingle(int ar[], int ar_size)
    {
        // Do XOR of all elements and return
        int res = ar[0];
        for (int i = 1; i < ar_size; i++)
            res = res ^ ar[i];

        return res;
    }

// Driver code
int main()
    {
        int ar[] = {2, 3, 5, 4, 5, 3, 4};
        int n = sizeof(ar) / sizeof(ar[0]);
        cout << "Element occurring once is " 
             << findSingle(ar, n);
        return 0;
    }

*/

/*
The time complexity of this solution is O(n) and it requires O(1) extra space.
*/

/*

Count set bits in an integers 
*/
/*
Write an efficient program to count the number of 1s in the binary representation of an integer.
*/

/*
#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBit(unsigned int n){
    unsigned int count = 0;
    while(n){
        count += n & 1;
        n>>=1;
    }
    return count;
}
int main(){
    unsigned int n;
    cin>>n;
    cout<<countSetBit(n);
    return 0;
}
*/






/*
// Use recursive method 
#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBit(unsigned int n){
    unsigned int count = 0;
    if(n==0){
        return 0;
    }
    return (n&1) + countSetBit(n>>1);
}
int main(){
    unsigned int n;
    cin>>n;
    cout<<countSetBit(n);
    return 0;
}
*/


// Implementation of Brian Kernighan's Algorithm: 
/*
#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBit(unsigned int n){
    unsigned int count = 0;
    while(n){
        n &= (n-1);
        count++;
    }
    return count;
}
int main(){
    unsigned int n;
    cin>>n;
    cout<<countSetBit(n);
    return 0;
}
*/

// Implementation of Brian Kernighan's Algorithm: Using recursive method

/*
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    if(n==0)
        return 0;
    else
        return 1 + countSetBits(n&(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}
*/

// We can find one use of counting set bits at Count number of bits to be flipped to convert A to B
// Note: In GCC, we can directly count set bits using __builtin_popcount(). So we can avoid a separate function 
// for counting set bits. 




// C++ program to demonstrate __builtin_popcount()
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout << __builtin_popcount(n) << endl;
    return 0;
}


*/

// Checking each bit in a number: 
// Each bit in the number is checked for whether it is set or not. The number is bitwise AND with powers of 2, so if 
// the result is not equal to zero, we come to know that the particular bit in the position is set.


/*
#include <stdio.h>

// Check each bit in a number is set or not
// and return the total count of the set bits.
int countSetBits(int N)
{
    int count = 0;
  
    // (1 << i) = pow(2, i)
    for (int i = 0; i < sizeof(int) * 8; i++) {
        if (N & (1 << i))
            count++;
    }
    return count;
}

// Driver Code
int main()
{
    int N = 15;

    printf("%d", countSetBits(N));
    return 0;
}
*/

/*
Count total set bits in all number from 1 to n

Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n. 

Examples: 
Input: n = 3

Output:  4
Input: n = 6

Output: 9
Input: n = 7

Output: 12
Input: n = 8

Output: 13
*/
/*
#include<bits/stdc++.h>
using namespace std;

int countTotalSetBit(){
    int countBit = 0;
    for(int i=1;i<=n;i++){
        countBit += countTotalBit(i);
    }
    return countBit;
}
int countTotalBit(int x){
    if(x==0){
        return 0;
    }
    return (x%2==0?0:1) + countTotalBit(x/2);
}
int main(){
    int n;
    cin>>n;
    cout<<countTotalSetBit(n);
    return 0;
}
*/

#include<iostream>
using namespace std;

int main(){
    
    return 0;
}