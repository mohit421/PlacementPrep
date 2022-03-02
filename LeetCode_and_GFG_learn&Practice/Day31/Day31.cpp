//                                     Date:- 27 Feb,2022

//                                          String

// Problem:- 242. Valid Anagram

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto c:s){
            v1[c-'a']++;
        }
        for(auto c:t){
            v2[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        unordered_set<char>st;
        for(auto c:s){
            st.insert(c);
        }
        unordered_set<char>st1;
        for(auto c:t){
            st1.insert(c);
        }
        // for(auto c:s){
        //     st1.insert(c);
        // }
        if(st.size() != st1.size()){
            return false;
        }
        return true;
    }
};

*/


//                                              Discussion Solution
/*
This idea uses a hash table to record the times of appearances of each letter in the two strings s and t. For each 
letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1. Finally, all 
the counters will be 0 if they two are anagrams of each other.

The first implementation uses the built-in unordered_map and takes 36 ms.

Time Complexity: O (n)
Space Complexity: O(n)
*/

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) 
                return false;
        return true;
    }
};

*/

/*
Since the problem statement says that "the string contains only lowercase alphabets", we can simply use an array to 
simulate the unordered_map and speed up the code. The following implementation takes 12 ms.
Time Complexity: O (n)
Space Complexity: O(1)
*/

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++) { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i]) return false;
        return true;
    }
};

*/

/*
// Sorting

For two anagrams, once they are sorted in a fixed order, they will become the same. This code is much shorter 
(this idea can be done in just 1 line using Python ). However, it takes much longer time --- 76 ms in C++.

Time Complexity: O (nlogn)
Space Complexity: O(nlogn)
*/

/*
class Solution {
public:
    bool isAnagram(string s, string t) { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};
*/


// -----------------------------------------------------------------------------


//                                          Weekly Contest 282



//  Problem 1:- 6008. Counting Words With a Given Prefix


/*

class Solution {
public:
    bool checkForPref(string c,string pref){
        int i=0;
        for(auto ch:pref){
            if(ch!=c[i]){
                return false;
            }
            i++;
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int lenPref = pref.size();
        int count =0;
        for(auto c:words){
            if(checkForPref(c,pref)){
                count++;
            }
        }
        return count;
    }
};

*/



// Problem 2:- 6009. Minimum Number of Steps to Make Two Strings Anagram II


/*

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int ans = 0;
        for(auto c:s){
            v1[c-'a']++;
        }
        for(auto c:t){
            v2[c-'a']++;
        }
        for(int i=0;i<26;i++){
            ans += abs(v1[i]-v2[i]);
        }
        return ans;
    }
};

*/

// --------------------------------------------------------------------------------




// Problem:  Explore-->2D Array and String --> Two Pointer technique --> Reverse String


/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());

        //              OR

        // vector<char>revStr;
        // for(auto it=s.rbegin();it<s.rend();it++)
        //     revStr.push_back(*it);
        // s = revStr;

        //        OR

        int start = 0, end = s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;end--;
        }
    }
};
*/


//                                          Discussion Solution


//  Recursive Approach

/*
class Solution {
public:
    void rev(vector<char>& s, int start, int end)
    {
        if(start>=end)                             // Base Condition
            return;
        swap(s[start++],s[end--]);                 // makes the problem smaller of same type            
        rev(s,start,end);
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);
    }
};
*/