//                                  Date:- 8 March, 2022


//                                      HashMap


// Link:- https://leetcode.com/explore/learn/card/hash-table/184/comparison-with-other-data-structures/1114/

/*

// Practical Application - Hash Map
-We have known that the hash set is able to store only values. On the other hand, the hash map is an 
implementation of map which is able to store (key, value) pairs.

With the ability to store more information, the hash map can help us to solve more complicated problems. 
-For example, we can aggregate all the information by key using a hash map and look up for the information
 related to a specific key in average constant time.

*/

/*

#include <unordered_map>                // 0. include the library
#include<iostream>
using namespace std;
int main() {
    // 1. initialize a hash map
    unordered_map<int, int> hashmap;
    // 2. insert a new (key, value) pair
    hashmap.insert(make_pair(0, 0));
    hashmap.insert(make_pair(2, 3));
    // 3. insert a new (key, value) pair or update the value of existed key
    hashmap[1] = 1;
    hashmap[1] = 2;
    hashmap[4] = 1;
    hashmap[5] = 2;
    // 4. get the value of a specific key
    cout << "The value of key 1 is: " << hashmap[1] << endl;
    // 5. delete a key
    hashmap.erase(2);
    // 6. check if a key is in the hash map
    if (hashmap.count(2) <= 0) {
        cout << "Key 2 is not in the hash map." << endl;
    }
    // 7. get the size of the hash map
    cout << "the size of hash map is: " << hashmap.size() << endl; 
    // 8. iterate the hash map
    for (auto it = hashmap.begin(); it != hashmap.end(); ++it) {
        cout << "(" << it->first << "," << it->second << ") ";
    }
    cout << "are in the hash map." << endl;
    // 9. clear the hash map
    hashmap.clear();
    // 10. check if the hash map is empty
    if (hashmap.empty()) {
        cout << "hash map is empty now!" << endl;
    }
}


*/


// Scenario I 
/*

The first scenario to use a hash map is that we need more information rather than only the key.
 Then we can build a mapping relationship between key and information by hash map.



//  An Example
Let's look at an example:

// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

In this example, if we only want to return true if there is a solution, we can use a hash set to store 
all the values when we iterate the array and check if "target - current_value" is in the hash set or not.

However, we are asked to return more information which means we not only care about the value but also 
care about the index. We need to store not only the number as the key but also the index as the value. 
Therefore, we should use a hash map rather than a hash set.


// What's More
In some cases, we need more information not just to return more information but also to help us with our 
decisions.

In the previous examples, when we meet a duplicated key, we will return the corresponding information 
immediately. But sometimes, we might want to check if the value of the key is acceptable first.
*/



// Here we provide a template for you to solve this kind of problems:

/*
/*
 * Template for using hash map to find duplicates.
 * Replace ReturnType with the actual type of your return value.
 */

 /*

ReturnType aggregateByKey_hashmap(vector<Type>& keys) {
    // Replace Type and InfoType with actual type of your key and value
    unordered_map<Type, InfoType> hashtable;
    for (Type key : keys) {
        if (hashmap.count(key) > 0) {
            if (hashmap[key] satisfies the requirement) {
                return needed_information;
            }
        }
        // Value can be any information you needed (e.g. index)
        hashmap[key] = value;
    }
    return needed_information;
}

*/



//                      Problem

// Two Sum

// Brute force

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
*/



// USing hashmap
//  To speed up the search
/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int res = target-nums[i];
            auto it = mpp.find(res);
            if(it != mpp.end()){
                return {it->second,i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

*/




//                                  Evening time


//                            Sliding Window Technique Algorithm


// 
/*

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int maxi = INT_MAX;
    int maxi = 0;
    int arr[8] = {-2,10,1,3,2,-1,4,5};
    int k = 3;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    cout<<sum<<" ";
    for(int i=0;i<8-k;i++)
    {
        sum = sum - arr[i] + arr[i+k];
        // maxi = min(sum,maxi);
        cout<<sum<<" ";
        maxi = max(sum,maxi);
        
    }
    cout<<endl;
    cout<<maxi<<endl;
    return 0;
}



*/


//  Reverse array in group

/*

void reverseInGroups(vector<long long>& arr, int n, int k){
    // code here
    for(int i=0;i<n;i+=k){
        int start = i;
        int end = min(i+k-1,n-1);
        while(start<end){
            swap(arr[start++],arr[end--]);
        }
    }
}

*/



// another way using STL

/*

void reverseInGroups(vector<long long>& arr, int n, int k){
    // code here
   
   for(int i=0;i<n;i+=k){
       int len = i+k;
       if(len>=n){
           reverse(arr.begin()+i,arr.end());
          break;
       }
        reverse(arr.begin()+i,arr.begin()+k+i);
       
   }
}

*/


// Rotate array

/*

void rotateArr(int arr[], int d, int n){
        // code here
        vector<int>ans;
        
        for(int i=d;i<n;i++){
            ans.push_back(arr[i]);
        }
        for(int i=0;i<d;i++){
            ans.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i] = ans[i];
        }
    }

*/

// another way

/*

void swap(int arr[],int i,int j){
        while(i<j){
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
            i++;j--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d%n;
        swap(arr,0,n-1);
        swap(arr,0,n-d-1);
        swap(arr,n-d,n-1);
    }

*/



// Find Immediate smaller than x

/*

int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        sort(arr,arr+n);
        auto y =(lower_bound(arr,arr+n,x));
        int idx = y-arr;
        if(idx-1==-1){
            return -1;
        }
        return arr[idx-1];
    }

*/


// Another solution
/*

int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int mini = -1,i;
        for(i=0;i<n;i++){
            if(arr[i]<x){
                mini = max(arr[i],mini);
            }
        }
        return mini;
    }

*/



// Who has the majority

/*

int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int maxi,countx=0,county=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            countx++;
        }
        else{
            if(arr[i]==y){
                county++;
            }
        }
    }
    // int i = count(arr,arr+n,x);
    // int j = count(arr,arr+n,y);
    if(countx>county){
        return x;
    }
    if(county>countx){
        return y;
    }
    if(countx==county && x<y){
        return x;
    }
    return y;
    }


*/