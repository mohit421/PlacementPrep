//                                      Date:- 16 Feb, 2022


/*
I just solve 3 full problem in this contest and 1 partial

*/

// Problem1:- Car or Bus Problem Code: TRAVELFAST

// Code
/*
#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<"BIKE"<<endl;
        }
        else if(x>y){
            cout<<"CAR"<<endl;
        }
        else{
            cout<<"SAME"<<endl;
        }
    }
    return 0;
}

*/


// Problem 2:- Count the Notebooks Problem Code: NOTEBOOK

// Code

/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    cout<<n*10<<endl;
	}
	return 0;
}

*/




// Problem 3:- Valentine is Coming Problem Code: VALENTINE

// Code

/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int x,y;cin>>x>>y;
	    cout<<x/y<<endl;
	}
	return 0;
}

*/




// Editorial Solution 

//Problem 4:- Hostel Room Problem Code: HOSTELROOM

// My partial solution

//  I don't know what wrong with this solution
/*
#include<bits/stdc++.h>
using namespace std;

void hostelRoom(vector<int>& arr,int n,int x){
    vector<int>nums={(x+arr[0])};
    for(int i=1;i<n;i++){
        nums[i] = (nums[i-1] + arr[i]);
    }
    int maxi= nums[0];
    for (int i = 1; i <n; i++){
        if (nums[i] > maxi)
            maxi = nums[i];
    }
    cout<<maxi<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int maxi=0;
        int enter=0,ext = 0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        hostelRoom(arr,n,x);
    }
    return 0;
}


*/


// I don't understood what wrong with this solution
/*

#include<bits/stdc++.h>
using namespace std;

void hostelRoom(int arr[],int n,int x){
    int nums[n-1];
    nums[0] = x+arr[0];
    for(int i=1;i<n;i++){
        nums[i] = (nums[i-1] + arr[i]);
    }
    cout<<*max_element(nums,nums+n)<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        hostelRoom(arr,n,x);
    }
    return 0;
}

*/


// Student Solution 

/*

#include <bits/stdc++.h>
using namespace std;
 

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int GCD(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> n >> x;
        int Max  = x, cur  = x;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<n;i++)
        {
            if (Max  + v[i] > cur )
            {
                cur  = Max  + v[i];
                Max  += v[i];
            }
            else
            {
                Max += v[i];
            }
        }
        cout << cur  << endl;
    }
    return 0;
}
*/

//  Editorial Solution


/*

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    int a[n];
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    int maxm = x;
	    int curr_sum = x;
	    for(int i = 0; i<n; i++){
	        curr_sum += a[i];
	        maxm = max(maxm, curr_sum);
	    }
	    cout<<maxm<<endl;
	}
	return 0;
}

*/



