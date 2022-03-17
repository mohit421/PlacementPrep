//                              Date:- 11 March, 2022

// 


/*

// Design the Key
In the previous problems, the choice of key is comparatively straightforward. Unfortunately, sometimes 
you have to think it over to design a suitable key when using a hash table.

// An Example
Let's look at an example:

Given an array of strings, group anagrams together.

As we know, a hash map can perform really well in grouping information by key. But we cannot use the 
original string as key directly. We have to design a proper key to present the type of anagrams. For 
instance, there are two strings "eat" and "ate" which should be in the same group. While "eat" and "act" 
should not be grouped together.


*/


/*


// Solution
Actually, designing a key is to build a mapping relationship by yourself between the original 
information and the actual key used by hash map. When you design a key, you need to guarantee that:

1. All values belong to the same group will be mapped in the same group.

2. Values which needed to be separated into different groups will not be mapped into the same group.

This process is similar to design a hash function, but here is an essential difference. A hash function 
satisfies the first rule but might not satisfy the second one. But your mapping function should satisfy 
both of them.

In the example above, our mapping strategy can be: sort the string and use the sorted string as the key. 
That is to say, both "eat" and "ate" will be mapped to "aet".


*/



//                                  Hash Table ---> Leetcode tagwise

// Problem - 1512. Number of Good Pairs



// Brute force
/*

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        }
        return count;
    }
};
*/



/*

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int &it:nums){
            ans += mp[it]++;
        }
        return ans;
    }
};


*/


// using unordered_map
/*


int numIdenticalPairs(vector<int>& A) {
    int res = 0;
    unordered_map<int, int> count;
    for (int a: A) {
        res += count[a]++;
    }
    return res;
}

*/



// Problem:- Jewels and stone

// brute force

/*



// Using unordered_map
/*

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        int count =0;
        for(auto it:jewels){
           mp[it] = 1;
        }
        for(auto it:stones){
            if(mp.count(it)){
                count++;
            }
        }
        return count;
    }
};

*/



// Using hashset---> using unordered_set
/*

int numJewelsInStones(string J, string S) {
        int res = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for (char s : S)
            if (setJ.count(s)) res++;
        return res;
    }

*/


// 


// using unordered_set and count function 

/*


int numJewelsInStones(string J, string S) {
    int num = 0;
    unordered_set<char> setJ(J.begin(), J.end());
    for(const auto jewel : jewels){
        num += count(stones.begin(), stones.end(), jewel);
    }
    return num;
}


*/


// Using vector

/*

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> vec(128, 0);
        int res = 0;        
        for (char& it : jewels) vec[it]++;
        for (char& it : stones) if (vec[it]) res++; 
        return res;
    }
};

*/


// Problem:- 1365. How Many Numbers Are Smaller Than the Current Number


// Brute force

/*

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                    count++;
            }
            vec.push_back(count);
        }
        return vec;
    }
};

*/