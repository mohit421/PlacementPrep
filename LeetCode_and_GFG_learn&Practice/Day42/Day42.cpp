//                                      Date:- 10 March, 2022


//                                      Hash Table

/*

// Scenario II - Aggregate by Key

Another frequent scenario is to aggregate all the information by key. We can also use a hash map to 
achieve this goal.


// Here is an example:

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist,
 return -1.


- A simple way to solve this problem is to count the occurrence of each character first. And then go 
through the results to find out the first unique character.

- Therefore, we can maintain a hashmap whose key is the character while the value is a counter for the 
corresponding character. Each time when we iterate a character, we just add the corresponding value by 1.

// What's more
The key to solving this kind of problem is to decide your strategy when you encounter an existing key.

In the example above, our strategy is to count the occurrence. Sometimes, we might sum all the values up. 
And sometimes, we might replace the original value with the newest one. The strategy depends on the problem
 and practice will help you make a right decision.

 */

//                              Template:-

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
            update hashmap[key];
        }
        // Value can be any information you needed (e.g. index)
        hashmap[key] = value;
    }
    return needed_information;
}

*/


// 


/*
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        int i = 0;
        for(char& it:s){
           mp[it]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) return i;
        }
        return -1;
    }
};

*/