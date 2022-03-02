//                                      Date:- 1 March,2022

/*
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to sort students with respect to their marks
* v : vector input with student name and their marks
* N : size of vector
* Your need to implement comparator to sort on the basis of marks.
*/

/*
bool sortBySec(const pair<string,int> a,
              const pair<string,int> b)
{
    if(a.second==b.second){
        return (a.first < b.first);
    }
    else{
        return (a.second>b.second);
    }
}
vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N){
    sort(v.begin(),v.end(),sortBySec);
    return v;
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector
	    vector<pair<string, int>> v;
	    
	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        string s;
	        cin >> s;
	        int k;
	        cin >> k;
	        v.push_back(make_pair(s, k));
	    }
	    
	    // Calling function
	    v = sortMarks(v, N);
	    
	    // Printing student name with their marks
	    for(auto it = v.begin(); it!=v.end();it++){
	        cout << it->first << " " << it->second << endl;
	    }
	    
	}
	
	return 0;
}  // } Driver Code Ends

*/




// 2. Find the Frequency
/*

Input:
N = 5
vector = {1, 1, 1, 1, 1}
X = 1
Output: 
5
Explanation: Frequency of 1 is 5.

*/

/*
int findFrequency(vector<int> v, int x){
    // Your code here
    int ans = count(v.begin(),v.end(),x);
    return ans;
}

*/