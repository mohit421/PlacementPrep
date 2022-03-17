//                                  Date: 5 March,2022


//                              Hash Table

//                          Leetcode Explore

// Hash Set

/*
The hash set is one of the implementations of a set which is a data structure to store no repeated values.
*/

/*

#include <unordered_set>                // 0. include the library

int main() {
    // 1. initialize a hash set
    unordered_set<int> hashset;   
    // 2. insert a new key
    hashset.insert(3);
    hashset.insert(2);
    hashset.insert(1);
    // 3. delete a key
    hashset.erase(2);
    // 4. check if the key is in the hash set
    if (hashset.count(2) <= 0) {
        cout << "Key 2 is not in the hash set." << endl;
    }
    // 5. get the size of the hash set
    cout << "The size of hash set is: " << hashset.size() << endl; 
    // 6. iterate the hash set
    for (auto it = hashset.begin(); it != hashset.end(); ++it) {
        cout << (*it) << " ";
    }
    cout << "are in the hash set." << endl;
    // 7. clear the hash set
    hashset.clear();
    // 8. check if the hash set is empty
    if (hashset.empty()) {
        cout << "hash set is empty now!" << endl;
    }
}

*/

// Find Duplicates By Hash Set


/*

// An Example
Let's look at an example:

Given an array of integers, find if the array contains any duplicates. 

This is a typical problem which can be solved by a hash set.

You can simply iterate each value and insert the value into the set. If a value has already been in 
the hash set, there is a duplicate.



*/


/*
 * Template for using hash set to find duplicates.
 */

 /*
bool findDuplicates(vector<Type>& keys) {
    // Replace Type with actual type of your key
    unordered_set<Type> hashset;
    for (Type key : keys) {
        if (hashset.count(key) > 0) {
            return true;
        }
        hashset.insert(key);
    }
    return false;
}


*/


//                       Leetcode exxplore -->  Problem--> Contains Duplicate


/*

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int it:nums){
            if(st.count(it)>0){
                return true;
            }
            st.insert(it);
        }
        return false;
    }
};

*/



// Discussion Solution


// Using sorting 
/*

bool containsDuplicate1(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i=0; i<int(nums.size())-1; i++) {
        if (nums[i]==nums[i+1])
            return true;
    }
    return false;    
}

*/


// Using map
/*
bool containsDuplicate2(vector<int>& nums) {
    map<int, bool> myMap;
    // unordered_map<int, bool> myMap;
    for (auto& num: nums) {
        if (myMap.find(num) != myMap.end())
            return true;
        else
            myMap[num] = true;
    }
    return false;
}

*/


// Using multimap

/*

bool containsDuplicate3(vector<int>& nums) {
    multimap<int, bool> myMap;
    // unordered_multimap<int, bool> myMap;
    for (auto& num: nums) {
        if (myMap.find(num) != myMap.end())
            return true;
        myMap.insert(make_pair(num, true));
    }
    return false;
}
*/

// using set 

/*
bool containsDuplicate4(vector<int>& nums) {
    set<int> mySet;
    // unordered_set<int> mySet;
    // multiset<int> mySet;
    // unordered_multiset<int> mySet;
    for (auto& num: nums) {
        if (mySet.find(num) != mySet.end())
            return true;
        mySet.insert(num);
    }
    return false;
}

*/


// One liner
/*
    bool containsDuplicate(vector<int>& nums) {
        return nums.size()>unordered_set<int>(nums.begin(),nums.end()).size();
    }
*/



// Another SOlution


// Calling set.find() performs redundant map lookups, which are somewhat expensive. You can avoid
//  that by just calling insert(), which returns a boolean indicating whether the insertion happened
//  or not:


/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen(nums.size());
        for (int n : nums) {
            auto [it, ok] = seen.insert(n);                 
            if (!ok) {
                return true;
            }
        }
        return false;
     }


*/


//                                  Problem--->Single Number




// Using unordered_set

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
		unordered_set<int> s;
		for (int i = 0; i < nums.size(); i++) {
			if (s.find(nums[i]) != s.end()) {
				s.erase(nums[i]);
			}
			else {
				s.insert(nums[i]);
			}
		}
		return *s.begin();
	}
};

*/


// Another solution

/*

int singleNumber(vector<int>& nums) {
        unordered_set<int>a;
        for (auto i : nums)
        {
            if(a.count(i) > 0)
                a.erase(i);
            else
                a.insert(i);
        }
        return *a.begin();
    }

*/




// Using hashmap

/*

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                ans = it.first;
            }
        }
        return ans;
    }
};

*/


// using sort()

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};


*/



// We can also do this using xor

/*

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};

*/


// One liner

/*
int singleNumber(vector<int> &nums)
    {
        return accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
    }

*/

// Other ways
/*

PS : METHOD 4: SUM OF ELEMENTS

All the unique elements , in the array have a frequency of 2 , except one element.

Store all the unique elements in set.
Add the elements of the set and multiply by 2 (SUM_1).
Add all the elements of the array(ARRAY_SUM).
Return (SUM_1 - ARRAY_SUM) .
Why does this work ??
ARRAY_SUM = 2*(a1+a2+a3...+ak) + a(k+1)
SUM_1 = 2*(a1+a2+a3+....+ak+ a(k+1))

a(x) represents the xth unique element in the array.
a(k+1) represents the element with frequency=1.

*/