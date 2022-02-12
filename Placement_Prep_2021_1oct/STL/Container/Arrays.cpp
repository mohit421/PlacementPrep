//                                  Date:- 3 Feb,2022




//                              Container->Arrays



/*

Declaration of array :- 

Everyone use this -> int arr[size];

In STL  -> array<data_type,size> arr_name;

eg) array<int,100> arr;

// Can we used any data type like int, char ,string ,float , double etc

// If we define Globally
array<int,3> arr;               //{0,0,0}

// If we define inside main
array<int,3> arr;              // {?,?,?}

array<int,5>arr = {0}   //{0,0,0,0,0}
array<int,5>arr = {1}   //{1,0,0,0,0}
array<int,5>arr = {1,2,3}   //{1,2,3,0,0}

int arr[10] = {0};  //It doesn't mean we initialize all value of an array to zero instead only 0th index to -->0

array<int,5>arr;
arr.fill(10);               //-->{10,10,10,10,10}


// for accessing value of any given index use-----> .at(index)
arr.at(index)

array<int,5> arr={1,2,3,4,5}
for(int i=0;i<5;i++){
    cout<<arr.at(i)<<" ";       //1 2 3 4 5    
}

*/



/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,5> arr = {1,3,5,6,7};
    arr.fill(10);
    for(int i=0;i<5;i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}

*/



/**************************************************************************/
/*
Range-based for loop in C++ :-


Range-based for loop in C++ is added since C++ 11. It executes a for loop over a range. Used as a more 
readable equivalent to the traditional for loop operating over a range of values, such as all elements 
in a container.

Syntax :

for ( range_declaration : range_expression ) 
    loop_statement

Parameters :
range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction.

range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list.

loop_statement : 
any statement, typically a compound statement, which
is the body of the loop.



*/




/*
// Illustration of range-for loop
// using CPP code
#include <iostream>
#include <vector>
#include <map>

//Driver
int main()
{
	// Iterating over whole array
	std::vector<int> v = {0, 1, 2, 3, 4, 5};
	for (auto i : v)
		std::cout << i << ' ';
	
	std::cout << '\n';
	
	// the initializer may be a braced-init-list
	for (int n : {0, 1, 2, 3, 4, 5})
		std::cout << n << ' ';
	
	std::cout << '\n';

	// Iterating over array
	int a[] = {0, 1, 2, 3, 4, 5};	
	for (int n : a)
		std::cout << n << ' ';
	
	std::cout << '\n';
	
	// Just running a loop for every array
	// element
	for (int n : a)
		std::cout << "In loop" << ' ';
	
	std::cout << '\n';
	
	// Printing string characters
	std::string str = "Geeks";
	for (char c : str)
		std::cout << c << ' ';
		
	std::cout << '\n';

}

*/

/*****************************************************************************/
// Striver's


/*
// Iterators

- begin()--> Always pointing  right after the last element
- rend() --> Always points right before the first element
- end()  --> Always points right after the last element
- rbegin()  --> Always points right before the first element

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,5> arr = {1, 3, 4, 5, 6}; 
    // Accessing all element of array
	for (auto it = arr.begin();it != arr.end(); it++)
        cout << *it<<" ";                   //   o/p:-  1 3 4 5 6
    cout<<endl;
    for(auto it= arr.rbegin();it != arr.rend(); it++)
        cout<<*it<<" ";         // o/p:- 6 5 4 3 1
    cout<<endl;
    for(auto it= arr.rbegin();it > arr.rend(); it++)
        cout<<*it<<" ";         // o/p:- 6 5 4 3 1
    cout<<endl;
    return 0;
}
*/


/*

for (auto it:arr.begin();it!arr.end();it++)

above for loop auto it is iterator pointing to pointer 
that why i use *it-> for fetching element of array
*/

/*********************************************************************/


// for each loop ---> always increament
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,5> arr = {1, 3, 4, 5, 6}; 
	for( auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}
*/

/*

auto it --> here is element itself that why i don't use *it instead use it;



/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "dksgkjf"; 
	for(auto i:s){
        cout<<i<<" ";  //o/p---> d k s g k j f 
    }
    return 0;
}

*/


/****************************************/

/*

// size  --> it determine the size of an array
cout<<arr.size();

// front --> for accessing 1st element

cout<<arr.front();  //---> or we use arr.at(0)

// back --> for accessing the last element of an array

cout<<arr.back();  // instead it we use arr.at(arr.size()-1);
*/

// the auto keyword declares a variable whose type is deduced from the initialization expression in 
//its declaration.




