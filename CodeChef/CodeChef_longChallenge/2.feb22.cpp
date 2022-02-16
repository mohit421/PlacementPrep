// 



// Problem:-   Bitiwise Swap


// Some test cases passess but give TLE 

/*
#include<bits/stdc++.h>
using namespace std;
string bitiwiseSwap(vector<int>& arr,int n){
    vector<int>nums = arr;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]&arr[j-1]!=0){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j]= temp;
            }
        }
        if(arr[i]==nums[i]){
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]==arr[i]){
            return "Yes";
        }
    }
    return "No";
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<bitiwiseSwap(arr,n)<<endl;
    }
    
    return 0;
}

*/