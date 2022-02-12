//                              Date:- 23 Jan,2022

//                                      Day 1

/*
Problem -1:- company tag Amazon

Replace all 0's with 5

Expected Time Complexity: O(K) where K is the number of digits in N
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 10000

*/

// Code

// mine 1st time approach
/*
#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<convertFive(n)<<endl;;
    }
    
    return 0;
}

int convertFive(int n){
    string st= to_string(n);
    for(int i=0;i<st.size();i++){
        if(st[i]=="0"){
            st[i]='5';
        }
    }
    int ans = stoi(st);
    return ans;
}
*/

// Seen from problem and learnt that approach-->that the good one

/*

#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<convertFive(n)<<endl;;
    }
    
    return 0;
}

int convertFive(int n) {
    int store = 0;
    int mult = 1;
    while(n>=1){
        int rem = n%10;
        if(rem==0){
            store += mult*5;
        }
        else{
            store += rem*mult;
        }
        mult *=10;
        n /=10;
    }
    return store;
}

*/


// 

/* 
Problem-2:-
company tag:- Accolite, Amazon ,FactSet, SAP, Labs, Times, Internet, Zoho, Adobe, Amdocs

Find second largest element 


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1).

 

Constraints:
1 ≤ N ≤ 106

 
*/
/*
Before doing this i know how to remove duplicate so i do this problem using this concept
*/ 

// Code:-

/*
#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int removeDup(int arr[],int n){
        
        if (n==0 || n==1)
            return n;
        int j = 0;
 
        for (int i=0; i < n-1; i++)
            if (arr[i] != arr[i+1])
                arr[j++] = arr[i];
    
        arr[j++] = arr[n-1];
    
        return j;
        
    }
    int print2largest(int arr[], int arr_size)
    {
    	sort(arr,arr+arr_size);
    	int n = removeDup(arr,arr_size);
    	if(n==0 || n==1){
    	    return -1;
    	}
    	return arr[n-2];
    	
    }
    

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
*/



// 
/*
Problem- 3:-

Third largest element
------------------------
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105
*/

// code

/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    int removeDup(int a[],int n){
        if (n==0 || n==1)
            return n;
        int j = 0;
 
        for (int i=0; i < n-1; i++)
            if (a[i] != a[i+1])
                a[j++] = a[i];
    
        a[j++] = a[n-1];
    
        return j;
    }
    int thirdLargest(int a[], int n)
    {
         sort(a,a+n);
    	int m = removeDup(a,n);
    	if(m==0 || m==1 || m==2){
    	    return -1;
    	}
    	return a[m-3];
    }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}    

*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    string s1,s2;
    int t;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            
            cin>>s1>>s2>>t;
        }
    }
    int count = 0;
    for(int i=0;i<n;){
        for(int j=0;i<3;j++){
            if((arr[i][0]==arr[1][j+1]) && (arr[i][3]-arr[i+1][3]==d)){
                count++;
                i+=2;
            }
        }
        
    }
    cout<<count;
    return 0;
}


