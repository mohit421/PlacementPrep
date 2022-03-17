//                                          Date: 7 March, 2022
//                                                  Hash Table
/*

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>vec;
        
        if(nums1.size()<nums2.size()){
            for(auto it:nums1){
                if(find(nums2.begin(),nums2.end(),it) != nums2.end()){
                    vec.insert(it);
                }
            }
        }
        else{
            for(auto it:nums2){
                if(find(nums1.begin(),nums1.end(),it) != nums1.end()){
                    vec.insert(it);
                }
            }
        }
        vector<int>ans(vec.begin(),vec.end());
        return ans;
    }
};

*/


/*

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        vector<int>ans;
        for(auto it:nums2){
            if(st.count(it)){
                ans.push_back(it);
                st.erase(it);
            }
        }
        return ans;
    }
};


*/


// Another Solution



/*

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        vector<int>ans;
        for(auto it:nums2){
            if(st.erase(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};


*/




// Problem:- Happy Number


/*

class Solution {
public:
    bool isHappy(int n) {
        bool found = false;
        if(n==1 || n==1111111){
            return true;
        }
        
        while(n!=1){
            string s = to_string(n);
            int sqr=0;
            for(auto it:s){
                int i = it-'0';
                sqr += i*i;
            }
            n = sqr;
            if(n==1){
                return true;
            }
            if(n>=2 && n<=9){
                return false;
            }
        }
        return false;
    }
};


*/




// Using Hashset


/*

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1){
            if(st.find(n)==st.end()){
                st.insert(n);
            }
            else{
                return false;
            }
            int sum = 0;
            while(n != 0){
                sum += pow(n%10,2);
                n=n/10;
            }
            n = sum;
        }
        return true;
    }
};

*/



// Using Hashmap

/*

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>st;
        while(n!=1){
            if(st[n] == 0){
                st[n]++;
            }
            else{
                return false;
            }
            int sum = 0;
            while(n != 0){
                sum += pow(n%10,2);
                n=n/10;
            }
            n = sum;
        }
        return true;
    }
};

*/



//              Discussion


// Learn this later

/*

we can do this using two other method too

1- Floyd's Cycle detection algorithm
2- Brent's Cycle detection algorithm

*/




//                  Array --> Leetcode-> Explore

//  Find All Numbers Disappeared in an Array


//  Brute work not work due to constraint

//  Brute force for this questio
// TC- O(N*N)
/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(find(begin(nums), end(nums), i) == end(nums))  // linear search in nums for each i
                ans.push_back(i);
        return ans;
    }
};


*/



//  Binary search optimal than before--> Taking help

// TC:- O(NlogN)  
/*
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(!binary_search(begin(nums), end(nums), i))   // binary search in nums for each i
                ans.push_back(i);
        return ans;
    }
};

*/


//                  Discussion SOlution

// Using Hashset-->
// unordered_set

// TC:-O(n)  , SC:- O(n)

/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));   // insert every nums[i] in hashset
        vector<int> ans(size(nums) - size(s));
        for(int i = 1, j = 0; i <= size(nums); i++)  
            if(!s.count(i)) 
                ans[j++] = i;               // add all elements not found in hashset to ans
        return ans;
    }
};
*/



// Using boolean array
// TC:- O(n)  , SC:- O(n)
/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool>arrb(size(nums)+1);
        vector<int>res;
        for(auto n:nums){
            arrb[n] = true;
        }
        for(int i=1;i<=size(nums);i++){
            if(!arrb[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};
*/




// Space optimized by negating element

// TC:- O(n),SC:- O(1) 
/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(auto c : nums)
            nums[abs(c)-1] = -abs(nums[abs(c)-1]);   // mark c is present by negating nums[c-1]
        for(int i = 0; i < size(nums); i++) 
            if(nums[i] > 0) 
                ans.push_back(i+1);      // nums[i] > 0 means i+1 isnt present in nums
        return ans;
    }
}

*/

/*

The idea is very similar to problem 442. Find All Duplicates in an Array: 
https://leetcode.com/problems/find-all-duplicates-in-an-array/.

First iteration to negate values at position whose equal to values appear in array.
 Second iteration to collect all position whose value is positive, which are the missing values. 

//  Complexity is O(n) Time and O(1) space.
*/
/*
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};

*/