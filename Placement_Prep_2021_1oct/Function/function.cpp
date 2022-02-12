
//                              Date :- 26 Nov,2021

//                                  Function Challenge


//  Print all prime numbers between 2 given numbers

/*
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int main(){

    int a,b;
    cin>>a>>b;

    for(int i=1;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

*/


//          Fibonacci Sequence 
//  0,1,1,2,3,5,8.......
/*

t1 = 0, t2 = 1

t3 = t2 + t1 = 0 + 1 = 1
t4 = t3 + t2 = 1 + 1 = 2
t5 = t4 + t3 = 2 + 1 = 3
.
.
.


tn =t(n-2) + t(n-1)
*/

/*
#include<iostream>
using namespace std;


void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main(){

    int n;
    cin>>n;
    fib(n);
    return 0;
}

*/


// Factorial of a number n 

//  n! = n*(n-1)*(n-2)*(n-3)........ *1

/*
#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}

*/



//  Calculate nCr

/*
nCr = n! / ((n-r)!*r!)

*/

/*
#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;

    int ans = fact(n) / (fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}

*/


//                          Pascal Triangle

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

row- 1 to n
column- 1 to row number
*/

/*
#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/ (fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}


*/





//                              Function Practice in c++

// 1. sum of first N natural numbers 

/*
S = 1+2+3+4+5....n
= n(n+1)/2
*/
// CODE
/*
#include<iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += i;
    }
    return ans;
}
int32_t main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}

*/



// 2. Check pythagorian triplet
/*

Given: x,y,z
let a = max(x,y,z) and  b and c

*/
// CODE
/*
#include<iostream>
using namespace std;

bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a==x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c ){
        return true;
    }
    else{
        return false;
    }
}
int32_t main(){
   int x,y,z;
   cin>>x>>y>>z;
   if(check(x,y,z)){
       cout<<"Pythagorean triplet";
   }
   else{
       cout<<"Not a pythagorean triplet";
   }
   return 0;
}
*/

/*
3. Conversions
    a) Binary to decimal
    b) Octal to decimal
    c) Hexadecimal to decimal
    d) Decimal to binary
    e) Decimal to octal
    f) Decimal to hexadecimal
4. Add two binary numbers
*/


//              3. (a) --> Binary to decimal

/*
#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;

}

int32_t main(){
    int n;
    cin>>n;
    cout<< binaryToDecimal(n)<<endl;
    return 0;
}

*/

/*
#include<iostream>
using namespace std;


void octalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /=10;
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;

    octalToDecimal(n);
    return 0;
}
*/



//                              3.(c)  Hexadecimal to decimal


/*

#include<bits/stdc++.h>
using namespace std;


int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}
int main(){
    string n;
    cin>>n;
    int ans = hexadecimalToDecimal(n);
    cout<<ans <<endl;
    return 0;
}

*/


//                                              Date:- 28 Nov, 2021


//                                 3. (d)          Decimal To Binary

/*

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while(x<=n){
        x *= 2;
    }
    x /= 2;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = decimalToBinary(n);
    cout<<ans<<endl;
    return 0;
}


*/

//                                          or this way decimal to binary

/*
#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int binNum[32];
    int i = 0;
    while(n>0){
        binNum[i] = n%2;
        n /= 2;
        i++;
    }
    for(int j= i-1; j>=0;j--){
        cout<<binNum[j];
    }
}

int main(){
    int n;
    cin>>n;
    decimalToBinary(n);
   
    return 0;
}


*/


//                                   or           Decimal to binary

/*
// using bitwise operator

// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

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
	int n;
    cin>>n;
	decToBinary(n);
}
*/


//                        3.(e)          Decimal To Octal

/*                        
#include<bits/stdc++.h>
using namespace std;

int decimalToOctal(int n){
    int binNum[32];
    int i = 0;
    while(n>0){
        binNum[i] = n%8;
        n /= 8;
        i++;
    }
    for(int j= i-1; j>=0;j--){
        cout<<binNum[j];
    }
}

int main(){
    int n;
    cin>>n;
    decimalToOctal(n);
   
    return 0;
}

*/


//                                              or using this for Decimal To Binary

/*
#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while(x<=n){
        x *= 8;
    }
    x /= 8;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = decimalToBinary(n);
    cout<<ans<<endl;
    return 0;
}


*/

//                       3.(f)       Decimal To Hexadecimal

/*
#include<bits/stdc++.h>
using namespace std;


string decimalToHexadecimal(int n){
    string ans = "";
    int x = 1;
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
        if(lastDigit <= 9){
            ans = ans  +  to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    string ans = decimalToHexadecimal(n);
    cout<<ans<<endl;
    return 0;
}

*/


//                                           4. Add two binary number

/*
#include<bits/stdc++.h>
using namespace std;


int addBinary(int a,int b){
    
}
int main(){

    int a,b;
    cin>>a>>b;

    addTwoBinary(a,b);
    return 0;
}

*/



//                                  Date 29 Nov,2021
/*
// Number is sparse or not
Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

Example 1:

Input: N = 2
Output: 1
Explanation: Binary Representation of 2 is 10, 
which is not having consecutive set bits. 
So, it is sparse number.
Example 2:

Input: N = 3
Output: 0
Explanation: Binary Representation of 3 is 11, 
which is having consecutive set bits in it. 
So, it is not a sparse number.

Your Task: The task is to complete the function checkSparse() that takes n as a parameter and returns 1 if the number is sparse else returns 0.


Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 106

*/

// Code
/*
#include<iostream>
using namespace std;

class Solution{
    public:
        bool isSparse(int n){
            return ((n & (n<<1))==0);
        }
};


int main(){
    int t,n;
    while(t--){
        cin>>n;
        Solution ob;
        if(ob.isSparse(n)){
            cout<< "1" <<endl;
        }
        else{
            cout<< "0" <<endl;
        }
    }
    return 0;
}
*/


//                                          Bit Difference

/*
You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.
Example 2:

Input: A = 20, B = 25
Output: 3
Explanation:
A  = 10100
B  = 11001
As we can see, the bits of A that need 
to be flipped are 10100. If we flip 
these bits, we get 11001, which is B.

Your Task: The task is to complete the function countBitsFlip() that takes A and B as parameters and returns the count of the number of bits to be flipped to convert A to B.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ A, B ≤ 106
*/

