//                                      Date:- 21 Nov,2021
//  1 week  study and solve coding question related to Bit Manipulation


// Odd or Even  --->GFG question
/*
Given a positive integer N, determine whether it is odd or even.

 

Example 1:

Input:
N = 1
Output:
odd
Explanation:
The output is self-
explanatory.

*/

// Using OR operator
/*

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string oddEven(int N){
            if ((N | 1) > N){
                return "even";
            }
            else{
                return "odd";
            }
            
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.oddEven(N)<<endl;
    }
    return 0;
}


// Using AND operator    

/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string oddEven(int N){
            if ((N & 1) == 0){
                return "even";
            }
            else{
                return "odd";
            }
            // if (N&1 != 0){          
            //     return "odd";
            // }
            // else{
            //     return "even";
            // }  
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.oddEven(N)<<endl;
    }
    return 0;
}
*/



// Using XOR operator

/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string oddEven(int N){
            
            if ((N^1) == N+1){          
                return "even";
            }
            else{
                return "odd";
            }

        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.oddEven(N)<<endl;
    }
    return 0;
}

*/

// Question 2: Party of Couples  --->GFG question


/*
In a party of N people, each person is denoted by an integer. Couples are represented by the same number. Find out the 
only single person in the party of couples.


Example 1:

Input: N = 5
arr = {1, 2, 3, 2, 1}
Output: 3
Explaination: Only the number 3 is single.

Example 2:

Input: N = 11
arr = {1, 2, 3, 5, 3, 2, 1, 4, 5, 6, 6}
Output: 4
Explaination: 4 is the only single.

Your Task:
You do not need to read input or print anything. Your task is to complete the function findSingle() which takes the 
size of the array N and the array arr[] as input parameters and returns the only single person.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 104
1 ≤ arr[i] ≤ 106

*/

/*
#include<iostream>
using namespace std;

class Solution{
    public:
        int findSingle(int N,arr[]){
            int res = 0;
            for(int i=0;i<N;i++){
                res ^= arr[i];
            }
            return res;
        }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N,X;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findSingle(N,arr)<<endl;
    }
    return 0;
}

*/



//                                                          Date:-  22 Nov, 2021  

//                                                               Get Bit
// We need to get bit at position ,i = 2

/*
#include<iostream>
using namespace std;

int getBit(int n,int pos){
    // if((n & (1<<pos))!=0){
    //     cout<<"1";
    // }
    // else{
    //     cout<<"0";
    // }
    return ((n&(1<<pos))!=0);
    
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<getBit(n,k)<<endl;
    // getBit(n,k);
    return 0;
}

*/


//                                                          Set Bit

/*
#include<iostream>
using namespace std;

int setBit(int n,int k){
    return (n | (1<<k));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<setBit(n,k);
    return 0;
}
*/

//                                          Clear bit

/*
#include<iostream>
using namespace std;

int clearBit(int n,int k){
    // int mask = ~(1<<k);
    return (n & (~(1<<k)));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<clearBit(n,k);
    return 0;
}

*/


//                                                      Update bit

/*
 #include<iostream>
using namespace std;

int updateBit(int n,int k,int value){
    int mask = ~(1<<k);
    n = n&mask;
    return (n | (value<<k));
}
int main(){
    int n,k,value;
    cin>>n>>k>>value;
    cout<<updateBit(n,k,value);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;


bool ispowerof2(int n){
    return (n && !(n & (n-1)));
}
int main(){
    int n;
    cin>>n;
    cout<<ispowerof2(n)<<endl;
    return 0;
}
*/


//                                          Power of 2

/*
#include<iostream>
using namespace std;


class Solution{
    public:
    bool isPowerofTwo(long long n){
        return (n && !(n & (n-1)));
    }
};
int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        Solution ob;
        if(ob.isPowerofTwo(n))
            cout<<"Yes"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}

*/





//                                  Date:-  23 Nov, 2021

//  WAP to count the no. of ones in binary representation of a NUmber 


/*
#include<iostream>
using namespace std;

class Solution{
    public:
    int count =0;
        int numberOfOnes(int n){
            while(n){
                n = n & (n-1);
                count++;
            }
            return count;
        }
};

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.numberOfOnes(n)<<endl;
    }
    return 0;
}

*/




// W.A.P  to generate all possible subsets of a set
/*
#include<iostream>
using namespace std;

void subsets(int arr[], int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[4] = {1,2,3,4};
    subsets(arr,4);

    return 0;
}

*/



//                              Date:24 Nov,2021

// Check whether two numbers differ at one bit position only 

/*
Given two non-negative integers a and b. The problem is to check whether the two numbers differ at one-bit position only or not. 
If yes then the answer is 1, otherwise 0.


Example 1:

Input: a = 13, b = 9
Output: 1
Explanation: (13)10 = (1101)2
(9)10 = (1001)2
Both the numbers differ at one bit 
position only, i.e, differ at the 
3rd bit from the right.

â€‹Example 2:

Input: a = 15, b = 8
Output: 0
Explanation: (15)10 = (1111)2 
(8)10 = (1000)2 
Both the numbers differ at 3 bit
positions.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function DifferOne() which takes a, b as inputs and 
returns the answer.

Expected Time Complexity: O(max(log a, log b))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ a, b ≤ 109

*/
/*
#include<iostream>
using namespace std;
class Solution{
    public:
        int DifferOne(long int a, long int b){
            long int ans = a^b;
            return (((ans & (ans-1))==0)?1:0);
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.DifferOne(a,b)<<endl;
    }
    return 0;
}

*/



//  Combinational Logic 

/*
Construct a 6 input gate which performs the following logical operation:
 (not(A)).B + C.D +E.(not(F))
where A, B, C, D, E and F are the inputs to the 6 input gate.

Example 1:

Input: A = 1, B = 1, C = 0
       D = 0, E = 1, F = 1
Output: 0 
Explanation: (not(A)).B + C.D +E.(not(F))
= (not(1)).1 + 0.0 +1.(not(1)) = 0.
Example 2:

Input: A = 1, B = 1, C = 1
       D = 1, E = 1, F = 1
Output: 1
Explanation: (not(A)).B + C.D +E.(not(F))
= (not(1)).1 + 1.1 +1.(not(1)) = 1.
Your Task:  
You dont need to read input or print anything. Complete the function logicalOperation() which takes A, B, C, D, E, F as input parameter and returns the result after executing the given opearation.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
0 <= A,B,C,D,E,F <= 1
*/


/*
#include<iostream>
using namespace std;

class Solution{
    public:
    int logicalOperation(int A, int B,int C, int D, int E, int F){
        return (((!A) & B) | (C&D) | (E & (!F)));
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D,E,F;
        cin>>A>>B>>C>>D>>E>>F;
        Solution ob;
        cout<<ob.logicalOperation(A,B,C,D,E,F)<<endl;
    }
    return 0;
}

*/




// Smallest power of 2 greater than or equal to n 

/*

Given a number N.Find the nearest number which is a power of 2 and greater than or equal to N.

Example 1:

Input:
N = 1
Output:
1
Explanation:
The nearest power of 2 greater than or 
equal to 1 is 2^0=1.
Example 2:

Input:
N = 5
Output:
8
Explanation:
The nearest power of 2 greater than 5 is 
2^3=8.
Your Task:
You don't need to read input or print anything.Your Task is to complete the function nearestPowerOf2() which takes a number N as input parameter and returns the nearest power of 2 that is greater than or equal to N.

Expected Time Complexity:O(LogN)
Expected Auxillary Space:O(1)

Constraints:
1<=N<=1018

*/

//                                      


/*
#include<iostream>
#include<cmath>
using namespace std;

class Solution{
    public:
    long long nearestPowerOf2(long long N){
        long long int ans;
        for(long long int i=0;i<N;i++){
            if(pow(2,i)>=N){
                ans = pow(2,i);
                break;
            }
        }
        return ans;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.nearestPowerOf2(N)<<"\n";
    }
    return 0;
}

*/


//                                  Date:- 30 Nov,2021

//                                  Bit Difference

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
1 ≤ A, B ≤ 10^6

*/
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countBitsFlip(int a ,int b){

    int res = a^b;
    int count = 0;
    while(res>0){
        res = res & (res-1);
        count++;
    }

    return count;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.countBitsFlip(a,b)<<endl;
    }
    return 0;
}
*/


//                              or

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//      int countBitsFlip(int a, int b){
       
//         int x=a^b;
//         vector<int>v;
//         int rem;
//         while(x>0){
//             rem=x%2;
//             v.push_back(rem);
//             x=x/2;
            
//         }
//         int count=0;
//         for(int i=0;i<v.size();i++){
//             if(v[i]==1)
//             count++;
//         }
//         return count;
       
//    }
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         Solution ob;
//         cout<<ob.countBitsFlip(a,b)<<endl;
//     }
//     return 0;
// }




//                          Game with nos


/*

 You are given an array arr[], you have to re-construct an array arr[].
The values in arr[] are obtained by doing Xor of consecutive elements in the array.

Example 1:

â€‹Input : arr[ ] = {10, 11, 1, 2, 3}
Output : 1 10 3 1 3
Explanation:
At index 0, arr[0] xor arr[1] = 1
At index 1, arr[1] xor arr[2] = 10
At index 2, arr[2] xor arr[3] = 3
...
At index 4, No element is left So, it will remain as
it is.
New Array will be {1, 10, 3, 1, 3}.

â€‹Example 2:

Input : arr[ ] = {5, 9, 7, 6} 
Output :  12 14 1 6 
 

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function game_with_number() that takes an array (arr), sizeOfArray (n), and return the array re-constructed array arr. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

 

Constraints:

1 ≤ N ≤ 105

1 ≤ arr[i] ≤ 10^7
*/

/*
#include<bits/stdc++.h>
using namespace std;

int* game_with_number(int arr[],int n);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int *arr2;
        arr2 = game_with_number(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr2[i]<<" ";
        }
        cout<< endl;
    }
}

int* game_with_number(int arr[],int n){
    int temp = arr[n];
    for(int i=0;i<n;i++){
        if(n>(i+1))
            arr[i] = arr[i] ^ arr[i+1];
    }
    arr[n] = temp;
    return arr;
}

*/



//                          Midori and Chocolate

/*

Midori like chocolates and he loves to try different ones. There are N shops in a market labelled from 1 to N and each shop offers a different variety of chocolate. Midori starts from ith shop and goes ahead to each and every shop. But as there are too many shops Midori would like to know how many more shops he has to visit. You have been given L denoting number of bits required to represent N. You need to return the maximum number of shops he can visit.

Example 1:

Input: i = 2, L = 3
Output: 6
Explanation: There are 3 bits So N = 8
Hence midori can visit 8 - 2 = 6 more shops.
Example 2:

Input: i = 1, L = 2
Output: 3
Explanation: There are 2 bits so N = 4
Hence midori can visit 4 - 1 = 3 more shops.

Your Task:  
You dont need to read input or print anything. Complete the function leftShops() which takes i and L as input parameter and returns the maximum number of shops that midori can visit.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1<= i <=N
1<= L <=30
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         long long int leftShops(long long int i,long long int L){
//             long long int N = pow(2,L);
//             return N-i;
//         }
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int i,L;
//         cin>>i>>L;
//         Solution ob;
//         cout<<ob.leftShops(i,L)<<endl;
        
//     }
//     return 0;
// }





//                                      XOR of all elements

/*
Given a list A having N positive elements. The task to create another list such as ith element is XOR of all elements of  A except A[i].

Example 1:

Input:
A = [2, 1, 5, 9]
Output:
13 14 10 6
Explanation:
At first position 1^5^9 = 13
At second position 2^5^9 = 14
At third position 2^1^9 = 10
At last position 2^1^5 = 6
Example 2:â€‹

Input:
A = [2, 1]
Output:
1 2
Explanation: 
At first position except first position 
there is only one element = 1
At second position except second position
â€‹there is only one element = 2
Your Task:  
You don't need to read input or print anything. Your task is to complete the function getXor() which takes a list A and an integer N which is the size of the list A and return the modified list.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1), Where N is the size of the input array

Constraints:
1<= N <=10000
1<= A[i] <=100000

*/



