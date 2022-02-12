//                              Apna College C++ Placement course.

// Max till i
/*
Given an arraay a[] of size n. For every i from 0 to n-1 ouput max(a[0],a[1],...,a[i])

Example:-  arr[] = {1,0,5,4,6,8}
                    0 1 2 3 4 5  --> index
                    1 1 5 5 6 8  --> Max till i
It is non-decreasing 
        or
Max till i is constant or increasing

*/
// Code:-
/*
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int mx = INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}

*/


// Subarray vs Sub sequence

/*
Subarray:- Continuous part of the array
example:- 
int arr[] = {1,2,0,7,2,0,2}
subarray part :- 2,0,7,2
not subarray:- 1,2,7,0 not continuous

    no. of subarray of an array with n elements = ⁿC₂+ n = n*(n+1)/2

Subsequence:- A subsequence is a sequence that can be derived from an array by selecting zero or more elements, without 
changing the order of teh remaining elements.

example:- int arr[] = {1,2,0,7,2,0,2}

                       1   0     0 2    --->every element have two choices either we take it or not take
                          2 7 2 -->subsequence
        
    No. of subsequence of an array with n elements = 2ⁿ

Note:- Every suarray is a subsequence but every subsequence is not a subarray



*/

//                                      Problem->Sum of all SubArray
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum=0;
        for(int j=i;j<n;j++){
            currSum += arr[j];
            cout<<currSum<<endl;
        }
    }
    return 0;
}
*/

//                              Longest arithmetic subsequence
// Kickstart problem

/*
Problem:- 
An arithmetic array is an array that contains two integers and teh differences between consecutive integers
are equals.

for eg) [9,10],[3,3,3] and [9,7,5,3] are arithmetic arrays, while [1,3,3,7], [2,1,2] and [1,2,4] are not 
arithmetic arrays.

Saraswati has an array of N non=negative integers. The ith integer of the array is A. She wants to choose a 
contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine
the length of he longest contiguous arithmetic sbuarray.

Input:- 
The first line of input gives the  number of test case. T- test cases follow . Each test case begins with 
a line containig the integer N. the 2nd line contains N inegers The ith integer is A.

Output:- 
For each test case, output one line containing
case #x:y, where x is teh test case number (starting from 1) and y is the lengh of the longest contiguous 
arithmetic subarray


constraints:-
Time limits:- 20 sec per test set
Memory limit: 1GB
1<=T<=100
0<=Aᵢ<=10⁹.

Test set 1:-
2<=N<=2000

Test set 2:-
2<=N<=2*10⁵ for atmost 10 test cases

for remainig cases:- 2<=N<=2000

*/

// 1 sec= 10⁸ operation (approx.)
//20 sec = 2*10⁹ operations(approx.)

//  GLobally we can make array of size 10⁸

/*
Sample test cases:- 
int arr[] = {10,7,4,6,8,10,11}
             -3 -3 2 2 2  1  --> difference

             so ans = 4


2 cases:-
1. pd==arr[i]-arr[i-1]
    a. curr ans increased by 1
    b. ans = max(ans,curr)

2. pd != arr[i] - arr[i-1]
    a. update current ans to 2.
*/



// Code
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 2;
    int curr=2;
    int pd = arr[1] - arr[0];
    int j = 2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
*/


//                                      Record Breaker -->Google kickstart
/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

Limits
Time limit: 20 seconds.
Memory limit: 1 GB.
1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 105.
Test Set 1
1 ≤ N ≤ 1000.
Test Set 2
1 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.
Sample
Sample Input
save_alt
content_copy
4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9
Sample Output
save_alt
content_copy
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0
In Sample Case #1, the bold and underlined numbers in the following represent the record breaking days: 1 2 0 7 2 0 2 0.

In Sample Case #2, only the last day is a record breaking day.

In Sample Case #3, the first, the third, and the sixth days are record breaking days.
*/

/*
Brute force approach:
1.Iterate over all the elements and check if it is record breaking day or not.

Note:- To check if a[i] is a record breaking day, we have to iterate over a[0],a[1],...,a[i-1].

Time complexity for this operation : O(n).
Overall time complexity : O(n²)


Optimised approach:-

Intuition:- If we can optimise step(1) , then we can optimise our overall solution

Step 1:- We need to check if a[i] > {a[i-1],a[i-2],...,a[0]},
which is smae as a[i]>max(a[i-1],a[i-2],...,a[0])

For this , we will keep a variable mx, which will store the maximum value till a[i]. Then we just need to check

                a[i]>mx
                a[i]>a[i+1];
                {if i+1<n}
                and update mx, mx=max(mx,a[i]);

so step 1 time complexity reduces to O(1).

overall time complexiy : O(n).
*/
/*

Example:- 
 int arr[] = {1, 2, 0, 7, 2, 0, 2, 2}
              |  |  |  |  |  |  |  |
              x  rt x  rt x  x  x  x
not satisfy   2     1     1  1  1  1
                    2     2  2  2  2

*/

            // Code
/*
#include<iostream>
using namespaces std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans = 0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}
            
*/


//                              Character Array
// Code
/*
#include<iostream>
using namespace std;
int main(){
    char arr[100] = "apple";
    int i=0;
    while(arr[i] !='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}
*/

//          How to take input and output in char array
// Code
/*
#include<iostream>
using namespace std;

int main(){
    char arr[100];
    cin>>arr;
    cout<<arr<<" "<<arr[2];
    return 0;
}
*/


//                                  Check Plaindrome
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;
    for(int i=0;i<n;i++){
        if(arr[i]!= arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true){
        cout<<"Word is palindrome"<<endl;
    }
    else{
        cout<<"word is not palindrome"<<endl;
    }
    return 0;
}
*/


//                  Largest word in a sentence
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currLen = 0, maxLen = 0;
    while(1){
        if(arr[i]==' ' || arr[i] == '\0'){
            if(currLen>maxLen){
                maxLen = currLen;
            }
            currLen = 0;
        }
        else{
            currLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    return 0;
}
*/

//   Find maximum length  and maximum word in a sentence

// Code 
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i = 0,currLen=0,maxLen=0,maxst=0,st=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        else{
            currLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
        

    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}
*/


