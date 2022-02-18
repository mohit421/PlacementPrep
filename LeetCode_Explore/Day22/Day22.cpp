//                                              Date:- 18 feb,2022


//                                          Leetcode Explore--> String

/*
Compare Function:-

String has its own compare function (we will show you the usage of compare function in the code below).

However, there is a problem:

Can we use "==" to compare two strings?

It depends on the answer to the question:

Does the language support operator overloading?

If the answer is yes (like C++), we may use "==" to compare two strings.
If the answer is no (like Java), we may not use "==" to compare two strings. When we use "==", it actually compares
 whether these two objects are the same object.

*/

/*
#include <iostream>

int main() {
    string s1 = "Hello World";
    cout << "s1 is \"Hello World\"" << endl;
    string s2 = s1;
    cout << "s2 is initialized by s1" << endl;
    string s3(s1);
    cout << "s3 is initialized by s1" << endl;
    // compare by '=='
    cout << "Compared by '==':" << endl;
    cout << "s1 and \"Hello World\": " << (s1 == "Hello World") << endl;
    cout << "s1 and s2: " << (s1 == s2) << endl;
    cout << "s1 and s3: " << (s1 == s3) << endl;
    // compare by 'compare'
    cout << "Compared by 'compare':" << endl;
    cout << "s1 and \"Hello World\": " << !s1.compare("Hello World") << endl;
    cout << "s1 and s2: " << !s1.compare(s2) << endl;
    cout << "s1 and s3: " << !s1.compare(s3) << endl;
}



*/
/*


Syntax 1: Compares the string *this with the string str.
int string::compare (const string& str) const
Returns:
- 0 : if both strings are equal.
- A value < 0 : if *this is shorter than str or,
first character that doesn't match is smaller than str.
- A value > 0 : if *this is longer than str or,
first character that doesn't match is greater
*/
// Examples:-

/*

// CPP code for demonstrating
// string::compare (const string& str) const

#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
	// returns a value < 0 (s1 is smaller then s2)
	if((s1.compare(s2)) < 0)
		cout << s1 << " is smaller than " << s2 << endl;

	// returns 0(s1, is being compared to itself)
	if((s1.compare(s1)) == 0)
		cout << s1 << " is equal to " << s1 << endl;
	else
		cout << "Strings didn't match ";
	
}

// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareOperation(s1, s2);
	
	return 0;
}


// CPP code for demonstrating
// string::compare (const string& str) const

#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
	// returns a value < 0 (s1 is smaller then s2)
	if((s1.compare(s2)) < 0)
		cout << s1 << " is smaller than " << s2 << endl;

	// returns 0(s1, is being compared to itself)
	if((s1.compare(s1)) == 0)
		cout << s1 << " is equal to " << s1 << endl;
	else
		cout << "Strings didn't match ";
	
}

// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareOperation(s1, s2);
	
	return 0;
}


*/


/*
// CPP code to demonstrate
// int string::compare (size_type idx, size_type len,
// const string&amp; str) const

#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
	// Compares 5 characters from index number 3 of s2 with s1
	if((s2.compare(3, 5, s1)) == 0)
		cout << "Here, "<< s1 << " are " << s2;

	else
		cout << "Strings didn't match ";
}
// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareOperation(s1, s2);
	
return 0;
}

*/

/*

// CPP code to demonstrate
// int string::compare (size_type idx, size_type len, const string&amp;
// str, size_type str_idx, size_type str_len) const

#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
	// Compares 5 characters from index number 0 of s1 with
	// 5 characters from index 3 of s2
	if((s1.compare(0, 5, s2, 3, 5)) == 0)
		cout << "Welcome to " << s1 << s2 << " World";

	else
		cout << "Strings didn't match ";
}
// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareOperation(s1, s2);
	
return 0;
}

*/



/*


Immutable or Mutable:-

Immutable means that you can't change the content of the string once it's initialized.

- In some languages (like C++), the string is mutable. That is to say, you can modify the string just like what you 
did in an array. 
- In some other languages (like Java), the string is immutable. This feature will bring several problems. We will
illustrate the problems and solutions in the next article.
- You can determine whether the string in your favorite language is immutable or mutable by testing the modification 
operation. Here is an example:

*/

/*
#include <iostream>

int main() {
    string s1 = "Hello World";
    s1[5] = ',';
    cout << s1 << endl;
}

*/


/*
Extra Operations:-

Compare to an array, there are some extra operations we can perform on a string. Here are some examples:

*/

/*

#include <iostream>

int main() {
    string s1 = "Hello World";
    // 1. concatenate
    s1 += "!";
    cout << s1 << endl;
    // 2. find
    cout << "The position of first 'o' is: " << s1.find('o') << endl;
    cout << "The position of last 'o' is: " << s1.rfind('o') << endl;
    // 3. get substr
    cout << s1.substr(6, 5) << endl;
}
*/

/*
o/p:-

Hello World!
The position of first 'o' is: 4
The position of last 'o' is: 7
World
*/


/*

You should be aware of the time complexity of these built-in operations.

For instance, if the length of the string is N, the time complexity of both finding operation and substring operation 
is O(N).

Also, in languages which the string is immutable, you should be careful with the concatenation operation (we will explain 
this in next article as well).

Never forget to take the time complexity of built-in operations into consideration when you compute the time complexity 
for your solution.
*/

/*

Convert string to char array in C++  :-

Method 1 
A way to do this is to copy the contents of the string to char array. This can be done with the help of c_str() and 
strcpy() function of library cstring. 
The c_str() function is used to return a pointer to an array that contains a null terminated sequence of character 
representing the current value of the string.

Syntax: 

const char* c_str() const ;

If there is an exception thrown then there are no changes in the string. But when we need to find or access the 
individual elements then we copy it to a char array using strcpy() function. After copying it, we can use it just 
like a simple array. 
The length of the char array taken should not be less than the length of input string. 


*/

/*

// CPP program to convert string
// to char array
#include <iostream>
#include <cstring>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	string s = "geeksforgeeks";

	int n = s.length();

	// declaring character array
	char char_array[n + 1];

	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++)
		cout << char_array[i];

	return 0;
}

*/


/*

// Method 2:-

// CPP program to convert string
// to char array
#include <iostream>
#include <string>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	string s("geeksforgeeks");
	// declaring character array : p
	char p[s.length()];

	int i;
	for (i = 0; i < sizeof(p); i++) {
		p[i] = s[i];
		cout << p[i];
	}
	return 0;
}


*/

/*

Method 3:

This is the simplest and most efficient one. We can directly assign the address of 1st character of the string to a 
pointer to char. This should be the preferred method unless your logic needs a copy of the string.  
*/
/*
// CPP program for the above approach
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{
	char* char_arr;
	string str_obj("GeeksForGeeks");
	char_arr = &str_obj[0];
	cout << char_arr;
	return 0;
}
*/


// Method 4:-

/*
// CPP program to convert string
// to char array
#include <iostream>
#include <cstring>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	string st = "GeeksForGeeks";
	//the c_str() function returns a const pointer
	//to null terminated contents.
	const char *str = st.c_str();
	//printing the char array
	cout << str;
	return 0;
}

*/



//                                      c_str()


/*

The basic_string::c_str() is a builtin function in C++ which returns a pointer to an array that contains a 
null-terminated sequence of characters representing the current value of the basic_string object. This array 
includes the same sequence of characters that make up the value of the basic_string object plus an additional 
terminating null-character at the end.

Syntax:

const CharT* c_str() const

- Parameter: The function does not accept any parameter.
- Return Value : The function returns a constant Null terminated pointer to the character array storage of the string.
*/
// example:-

/*
// C++ code for illustration of
// basic_string::c_str function
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	// declare a example string
	string s1 = "Aditya";

	// print the characters of the string
	for (int i = 0; i < s1.length(); i++) {
		cout << "The " << i + 1 << "th character of string " << s1
			<< " is " << s1.c_str()[i] << endl;
	}
}


// o/p:-
The 1th character of string Aditya is A
The 2th character of string Aditya is d
The 3th character of string Aditya is i
The 4th character of string Aditya is t
The 5th character of string Aditya is y
The 6th character of string Aditya is a

*/


//              Convert string to Number 

/*

// 1. Using stringstream class or sscanf() 

// stringstream() : This is an easy way to convert strings of digits into ints, floats or doubles.


// A stringstream is similar to input/output
// file stream. We need to declare a stringstream
// just like an fstream, for example: 
stringstream ss;

// and, like an fstream or cout, 
// we can write to it:
ss << myString; or 
ss << myCstring; or
ss << myInt;, or float, or double, etc.

// and we can read from it:
ss >> myChar; or
ss >> myCstring; or
ss >> myInt;  

*/
/*
// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s = "12345";

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value 12345 and stream
	// it to the integer x
	int x = 0;
	geek >> x;

	// Now the variable x holds the value 12345
	cout << "Value of x : " << x;

	return 0;
}


*/


/*

// 2. To summarize, stringstream is a convenient way to manipulate strings.
// sscanf() is a C style function similar to scanf(). It reads input from a string rather that standard input.


#include<stdio.h>
int main()
{
	const char *str = "12345";
	int x;
	sscanf(str, "%d", &x);
	printf("\nThe value of x : %d", x);
	return 0;
}

Similarly we can read float and double using %f and %lf respectively.
*/


/*

// 3. String conversion using stoi() or atoi() 

//                                              stoi()



- stoi() : The stoi() function takes a string as an argument and returns its value.

// Implementation:-

*/
/*
// C++ program to demonstrate working of stoi()
// Work only if compiler supports C++11 or above.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "45";
	string str2 = "3.14159";
	string str3 = "31337 geek";

	int myint1 = stoi(str1);
	int myint2 = stoi(str2);
	int myint3 = stoi(str3);

	cout << "stoi(\"" << str1 << "\") is "
		<< myint1 << '\n';
	cout << "stoi(\"" << str2 << "\") is "
		<< myint2 << '\n';
	cout << "stoi(\"" << str3 << "\") is "
		<< myint3 << '\n';

	return 0;
}



*/

/*

//                                          atoi()

- atoi() : The atoi() function takes a character array or string literal as an argument and returns its value 

// implementation


// For C++11 above
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	const char* str1 = "42";
	const char* str2 = "3.14159";
	const char* str3 = "31337 geek";

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num3 = atoi(str3);

	cout << "atoi(\"" << str1 << "\") is " << num1 << '\n';
	cout << "atoi(\"" << str2 << "\") is " << num2 << '\n';
	cout << "atoi(\"" << str3 << "\") is " << num3 << '\n';

	return 0;
	
}
*/


/*

// stoi() vs atoi()

- atoi() is a legacy C-style function. stoi() is added in C++ 11. 
 
- atoi() works only for C-style strings (character array and string literal), stoi() works for both C++ strings 
and C style strings

- atoi() takes only one parameter and returns integer value.
int atoi (const char * str); 

- stoi() can take upto three parameters, the second parameter is for starting index and third parameter is for base of 
input number.
int stoi (const string&  str, size_t* index = 0, int base = 10); 

*/



//                              Convert Binary String to decimal



//                                              Method 1:- 

/*
#include <iostream>
#include <bitset>

int main()
{
    const std::string s = "11";
    unsigned long long value = std::bitset<64>(s).to_ullong();
    std::cout << value << std::endl;
}
*/

//                                          Method 2:-


/*
#include <iostream>
#include <string>

int main()
{
    const std::string s = "11";
    unsigned long long value = std::stoull(s, 0, 2);
    std::cout << value << std::endl;
}

*/


//                                  Method 3

// The following code is probably the simplest way to convert binary string to its integer value. 
// Without using biteset or boost this works for any length of binary string

/*
#include<iostream>
#include<cmath>
int main(){
    std::string binaryString = "111";  
    int value = 0;
    int indexCounter = 0;
    for(int i=binaryString.length()-1;i>=0;i--){
    
        if(binaryString[i]=='1'){
            value += pow(2, indexCounter);
        }
        indexCounter++;
    }
    std::cout<<value<<std::endl;
    return 0;
}


*/



//                          Decimal to Binary COnversion

//                              Method 1


/*

// C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	int num = 10101001;

	cout << binaryToDecimal(num) << endl;
}

*/

/*
Note: The program works only with binary numbers in the range of integers. In case you want to work with long binary 
numbers like 20 bits or 30 bit, you can use a string variable to store the binary numbers.
*/



//                                  Method 2


/*
Below is a similar program which uses string variable instead of integers to store binary value:
*/

/*
// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	string num = "10101001";
	cout << binaryToDecimal(num) << endl;
}

*/


//                                      Method 3


// Using pre-defined function: 

/*

#include <iostream>
using namespace std;

int main()
{
	char binaryNumber[] = "1001";
	
	cout << stoi(binaryNumber, 0, 2);                   // 9

	return 0;
}
// This code is contributed by whysodarkbro

*/



//                                      Decimal to Binary

?                                           Method 1




/*
// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
	int n = 17;
	decToBinary(n);
	return 0;
}


*/


//                                              method 2


/*

We can use bitwise operators to do above job. Note that bitwise operators work faster than arithmetic operators 
used above.
*/

/*
// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

// driver code
int main()
{
	int n = 32;
	decToBinary(n);
}



// o/p:- 00000000000000000000000000100000
*/



//                                          Method 3


/*
// Decimal to binary conversion can also be done without using arrays. 


// C++ implementation of the approach
#include <cmath>
#include <iostream>
using namespace std;

#define ull unsigned long long int

// Function to return the binary
// equivalent of decimal value N
int decimalToBinary(int N)
{

	// To store the binary number
	ull B_Number = 0;
	int cnt = 0;
	while (N != 0) {
		int rem = N % 2;
		ull c = pow(10, cnt);
		B_Number += rem * c;
		N /= 2;

		// Count used to store exponent value
		cnt++;
	}

	return B_Number;
}

// Driver code
int main()
{

	int N = 17;

	cout << decimalToBinary(N);     // 10001

	return 0;
}

*/


//                                           Method 4


/*

// There is yet another method that converts any Decimal Number to its Binary form. The idea is to use bitset.

//C++ program to convert a decimal number
//to its binary form.

//including header file
#include <bits/stdc++.h>
using namespace std;

//Function to convert a decimal number
//to its binary form
string decimalToBinary(int n)
{
	//finding the binary form of the number and
	//converting it to string.
	string s = bitset<64> (n).to_string();
	
	//Finding the first occurrence of "1"
	//to strip off the leading zeroes.
	const auto loc1 = s.find('1');
	
	if(loc1 != string::npos)
		return s.substr(loc1);
	
	return "0";
}

//Driver Code
int main()
{
	int n = 17;
	
	//Function call
	cout << decimalToBinary(n);

	return 0;
}



*/






//                                         Leetcode String Problem 

//                                            Add binary




/*
If, you are preperaing for FACEBOOK interview or will prepare. Then according to LeetCode premium it is no.4 most 
asked Question by Facebook as per now.

*/


/*

class Solution {
public:
    string addBinary(string a, string b) {
        // If the length of string A is greater than the length
        // of B then just swap the the string by calling the
        // same function and make sure to return the function
        // otherwise recursion will occur which leads to
        // calling the same function twice
        if (a.length() > b.length())
            return addBinary(b, a);
        int diff = b.length() - a.length();
        string padding;
        for (int i = 0; i < diff; i++)
            padding.push_back('0');
     
        a = padding + a;
        string res;
        char carry = '0';
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]=='0' && b[i]=='0'){
                if(carry=='0'){
                    res += '0';
                    carry = '0';
                }
                else{
                    res += '1';
                    carry = '0';
                }
            }
            else if(a[i]=='1' && b[i]=='1'){
                if(carry=='1'){
                    res += '1';
                    carry = '1';
                }
                else{
                    res += '0';
                    carry = '1';
                }
            }
            else if(a[i] != b[i]){
                if(carry=='1'){
                    res += '0';
                    carry = '1';
                }
                else{
                    res += '1';
                    carry = '0';
                }
            }
        }
        if (carry == '1')
            res.push_back(carry);
        // reverse the result
        reverse(res.begin(), res.end());
     
        // To remove leading zeroes
        int index = 0;
        while (index + 1 < res.length() && res[index] == '0')
            index++;
        return (res.substr(index));
    }
};
*/




// Another Approach


//  Optimized one
/*

ANALYSIS :-

Time Complexity :- BigO(max(M, N)), M & N is the length of string a, b;

Space Complexity :- BigO(max(M, N)), which is the size of "res" object
*/

/*


It converts a character to the integer value:

character | ASCII code  | expression | equivalent | result
  '0'     |      48     | '0' - '0'  |  48 - 48   |   0
  '1'     |      49     | '1' - '0'  |  49 - 48   |   1
  '2'     |      50     | '2' - '0'  |  50 - 48   |   2
  '3'     |      51     | '3' - '0'  |  51 - 48   |   3
  '4'     |      52     | '4' - '0'  |  52 - 48   |   4
  '5'     |      53     | '5' - '0'  |  53 - 48   |   5
  '6'     |      54     | '6' - '0'  |  54 - 48   |   6
  '7'     |      55     | '7' - '0'  |  55 - 48   |   7
  '8'     |      56     | '8' - '0'  |  56 - 48   |   8
  '9'     |      57     | '9' - '0'  |  57 - 48   |   9



*/

/*

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);
        }
        if(carry) res += to_string(carry);
        reverse(res.begin(), res.end());
        return res;
    }
};
*/


// Another solution --> O(n)
/*
Adding 2 binary bits :
0 + 0 = 0
1 + 0 = 1
0 + 1 = 1
1 + 1 = 10
*/

/*
string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry += a[i] - '0';
                i--;
            }
            if(j>=0){
                carry += b[j] - '0';
                j--;
            }
            
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
*/


/*
Important point to note: (Reference - http://codeforces.com/blog/entry/66660)

a = a + "xy" is O(N) while a += "xy" is O(1) (amortized).

a = a + "xy" creates a copy of a, appends "xy" and then assigns it back to a.

a += "xy" just appends "xy" to a.

Therefore the time complexity of this approach is O(n).
*/