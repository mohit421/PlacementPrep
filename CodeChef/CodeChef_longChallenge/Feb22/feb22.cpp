

/*



You are given a binary string S and an integer K. In one operation, you can pick any bit and flip it, i.e turn 0 to 1 or 1 to 0. Can you make the string S a palindrome using exactly K operations?

Print YES if this is possible, and NO if it is not.

Input Format
The first line of input contains one integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers N and K, denoting the length of the binary string and the number of operations to be performed.
The second line contains the binary string S.
Output Format
For each test case, print the answer on a new line — YES if the S can be made a palindrome using exactly K operations, and NO otherwise.

You may print each character of YES and NO in either uppercase or lowercase (for example, yes, yEs, Yes will all be considered identical).

Constraints
1≤T≤1000
1≤N≤1000
0≤K≤N
S is a binary string, i.e, contains only characters 0 and 1
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
2
3 0
110
6 1
101100
Sample Output 1 
NO
YES
Explanation
Test case 1: S is not a palindrome, and no operations can be performed on it because K=0.

Test case 2: Flip the first bit to obtain S=001100, which is a palindrome

*/

// Wrong answer---> my approach
/*
#include<bits/stdc++.h>
using namespace std;

string binaryBase(string str,int n,int k){
    string re = string(str.rbegin(),str.rend());
    if(k==0 && str!=re){
        return "NO";
    }
    else{
        for(int i=0;i<k;i++){
            if(str[i]=='0')
                str[i]='1';
            else
                str[i]='0';
            }
    }
    

    // string rev = string(str.rbegin(),str.rend());
    string rev;
    for(int i=n-1;i>=0;i--)
        rev.push_back(str[i]);
    if(rev!=str){
        return "NO";
    }
    return "YES";
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        cin.ignore();
        string str="",C;
        cin>>C;
        for(int i=0;i<n;i++){
            str +=C[i];
        }
        cout<<binaryBase(str,n,k)<<endl;
    }
    return 0;
}
*/


// Give wrong on submission --> my approach

/*
#include<bits/stdc++.h>
using namespace std;

void binaryBase(string str,int n,int k){
    int start=0,end=n-1;
    int countequal=0,count=0;
    string p = str;
    while(start<end){
        if(str[start]!=str[end]){
            if(str[start]=='0'){
                str[start] = '1';
            }
            else{
                str[start]='0';
            }
            count++;
        }
        start++;end--;
    }
    string rev = string(str.rbegin(),str.rend());
    if(count==k  && str==rev){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        cin.ignore();
        string str;
        cin>>str;
        binaryBase(str,n,k);
    }
    return 0;
}
*/

/*

You are given an array A of length N.

You can perform the following operation on the array, as long as it has more than one element:

Choose any two adjacent elements, remove them from the array and insert their sum at that position.
Formally, if the current length of the array is |A|, you can choose an index 1≤i<|A|, and transform the array into [A1,A2,…,Ai−1,Ai+Ai+1,Ai+2,…,AN].
Note that after each operation, the length of array decreases by exactly 1.

Print the minimum number of operations to be applied on array A such that all the elements in the resulting array are equal. See sample explanation for more details.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of two lines of input.
The first line contains an integer N.
The second line contains N space-separated integers, the elements of array A.
Output Format
For each test case, output on a new line the minimum number of operations required to make all the elements equal.

Constraints
1≤T≤104
2≤N≤3⋅104
−3⋅104≤Ai≤3⋅104
Sum of N over all test cases does not exceed 3⋅104
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
3
5 2 3
2
6 9
5
3 6 5 4 9
3
3 3 3
Sample Output 1 
1
1
2
0
Explanation
Test case 1: It is optimal to remove A2 and A3 in the first operation, after which the array becomes [5,5] — all of whose elements are equal.

Test case 2: Remove A1 and A2 after which the array becomes [15], which contains equal elements because it is of length 1.

Test case 3: First remove A3 and A4 after which the updated array A becomes [3,6,9,9]. Now remove A1 and A2 after which the array becomes [9,9,9].

Test case 4: The array elements are already equal.

*/

// Wrong answer --> my approaches

/*
#include<bits/stdc++.h>
using namespace std;


int adjacentK(vector<int>& arr,int n){
    int opt=0;
    vector<int>nums;
    int maxIdx = max_element(arr.begin(),arr.end())-arr.begin();
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            opt = 0;
            return opt;
            
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==arr[maxIdx]){
            nums.push_back((arr[i]+arr[i+1]));
            opt++;
        }
    }
    return  opt;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<adjacentK(arr,n)<<endl;
    }
    return 0;
}

*/
/*
//  Give TLE   --->
/*
#include<bits/stdc++.h>
using namespace std;
int removeAdj(vector<int>& arr,int n){
    int start = 0,end = 1,opt=0;
    if(arr.size()<=2){
        return 1;
    }
    int maxIdx = max_element(arr.begin(),arr.end())-arr.begin();
    if(start != maxIdx){
        while(start<=n-2 && end <=n-1){
            if((arr[start]+arr[end]==arr[maxIdx])){
                arr[start] = arr[start]+arr[end];
                opt++; start+=2; end+=2;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                return 0;
            }
        }
        vector<int>nums;
        // int maxIdx = max_element(arr.begin(),arr.end())-arr.begin();
        nums.push_back(arr[maxIdx]);
        for(int i=n-2;i>=0;i--){
            if(arr[i]+arr[i-1]==nums[0]){
                nums.push_back((arr[i]+arr[i-1]));
                opt++; 
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return opt;
            }
        }
    }
    return opt;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<removeAdj(arr,n)<<endl;
    }
    return 0;
}
*/