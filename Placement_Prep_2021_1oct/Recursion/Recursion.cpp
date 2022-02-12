//                          Date :- 20 Jan ,2022

/*
Defn-
It is when a function call itself to make the problem smaller
*/

// Problem 1:- 
// Add all number till n

// Code
/*
#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}
*/

// Problem 2:-
// Calculate n raised to the power p

// Code

/*
#include<iostream>
using namespace std;

int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower = Power(n,p-1);
    return n*prevPower;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<Power(n,p);
    return 0;
}


*/


// Problem 3 :-
// Find the factorial of a number n

/*
n! = n*(n-1)*(n-2)*(n-3)*(n-4)...*1
*/
/*
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevFact = factorial(n-1);
    return n*prevFact;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
*/


// Problem 4:-
//  Print the nth fibonacci number 
/*
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int prevFib = fibonacci(n-2);
    return fibonacci(n-1)+prevFib;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
*/





//                              Date:- 24 Jan, 2022

//  String Reversal using recursion
/*
#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    if(str.size()==0){
        return "";
    }
    return reverseString(str.substr(1,str.size())) + str.at(0);  // str.at(0) or str[0] -->same
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverseString(str);
    return 0;
}

*/



// Lets know more about how to use substr function in c++

/*

Goto GFG:-   https://www.geeksforgeeks.org/substring-in-cpp/

Goto Strings Folder--> string.cpp

*/



//                                  Date 25 Jan,2022

// Decimal to binary


#include<bits/stdc++.h>
using namespace std;

int findBinary(int decimal){
    if(decimal==0){
        return 0;
    }
    return 10*findBinary(decimal/2) + decimal%2;
}
int main(){
    int decimal;
    cin>>decimal;
    cout<<findBinary(decimal);
    return 0;
}