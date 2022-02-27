//                                  Date:- 26 Feb, 2022


//                                      String

// 1832. Check if the Sentence Is Pangram

/*
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>st;
        for(auto it:sentence){
            st.insert(it);
        }
        if(st.size()==26){
            return true;
        }
        return false;
    }
};
*/



//                                      Discussion Solution

/*

Insert every letters in an unordered_set and just check the size of the set. If size of the set is 26 then every 
letters are present in the given string.
//Basic Idea of solution : All the elements in a set are unique


*/

/*
class Solution {
public:
    bool checkIfPangram(string sentence) {     
        unordered_set<char>s;
        for(auto x:sentence)
            s.insert(x);   
                return (s.size()==26);
        return 1;
    }
};

*/


// Another solution

/*

 bool checkIfPangram(string s) {
        return set<char>(s.begin(), s.end()).size() == 26;
    }

*/


// Another solution

/*
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> n(26,0);
        
        for(char c:sentence)
            n[c-'a']++;
        
        for(int i=0;i<26;i++)
            if(n[i]==0)
                return false;
        
        return true;
    }
};

*/


// Another Solution

/*

bool checkIfPangram(string sentence) {
    int cnt[26] = {}, total = 0;
    for (auto ch: sentence)
        if (++cnt[ch - 'a'] == 1)
            total++;
    return total == 26;
}

*/


// We can also do using bits manipulation


//  I need to analyze it more 






//                                  Using bitiwise operator

/*
1. int ci = c - 'a'; is just setting each alphabet letters to 0 ~ 25.
Java can do operations with characters since characters are just bytes.
In this case, we are assigning ci to
0 if c is 'a'
25 if c is 'z'

2. seen = seen | (1 << ci); in this line, we are doing bit operation with | which is very similar to 'or' operator.
Here is how we do, you put them in different row alined on right, and do 'or' operations with the number in the 
same position.
For example, with 101 and 101011,

000101
101011
=> 
101111
if there exists one in either position, then the result has 1 in the position. If both positions has 0, 
then the result has 0.

2-1. (1 << ci) refers to pushing 1 to left. In case of ci ==2, 1 << 2 => 100 (you pushed twice).
Which means, since we know that a = 0, ... , z = 25

a => 1 
b => 10 (push left once)
c => 100
z => 1000000...000(25 zeros)
Example,
seen is 0 at first. What if we have sentence = "ab"?

a = 1
b = 10
Every time you do | operation, you are filling in the 1
Therefore, seen after the for loop would be 11.

What if we have sentence = "aca"?

a = 1
c = 100
seen after the for loop would be 101.

4. Now we need to know whether the sentence has all alphabets. How can we check?
we can ensure that the sentence has all alphabets if seen has twenty-six 1's like 111....1111 in the end.
we check that here return seen == ((1 << 26) - 1);
the right-hand side makes twenty-six 1's with bit operations .1<<26 makes 100...000(1 and 26 zeros) and 
that -1 would make 111...1111(26 ones).

Then we compare it with seen in the end to get a boolean result.
*/


/*

class Solution {
    public boolean checkIfPangram(String sentence) {
        int seen = 0;
        for(char c : sentence.toCharArray()) {
            int ci = c - 'a';
            seen = seen | (1 << ci);
        }
        return seen == ((1 << 26) - 1);
    }
}

*/





// Problem:-2068. Check Whether Two Strings are Almost Equivalent

/*
Optimized
Instead of traversing the strings over and over again for each character, we can simply count the frequencies of 
each character and store them in a hashmap. In this case, since only lowercase english characters are allowed, 
we can also use a frequency array instead of a hashmap. After storing all character frequencies for both the 
strings, we can traverse the frequency array to check if there's any character whose difference in frequencies 
exceeds 3.

*/


/*
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>n1(26,0);
        vector<int>n2(26,0);
        for(char c:word1){
            n1[c-'a']++;
        }
        for(char c:word2){
            n2[c-'a']++;
        }
        vector<int>arr;
        for(int i=0;i<26;i++){
            arr.push_back(abs(n1[i]-n2[i]));
        }
        for(int i=0;i<26;i++){
            if(arr[i]>3){return false;}
        }
        return true;
    }
};


*/



//                                  Discussion Best solution

/*

// Time: O(N)
// Space: O(1)
class Solution {
public:
    bool checkAlmostEquivalent(string s, string t) {
        int cnt[26] = {};
        for (char c : s) cnt[c - 'a']++;
        for (char c : t) cnt[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (abs(cnt[i]) > 3) return false;
        }
        return true;
    }
};
*/



// Another solution

/*

bool checkAlmostEquivalent(string w1, string w2) {
    int cnt[26] = {};
    for (int i = 0; i < w1.size(); ++i) {
        ++cnt[w1[i] - 'a'];
        --cnt[w2[i] - 'a'];
    }
    return all_of(begin(cnt), end(cnt), [](int cnt){ return abs(cnt) < 4; });
}

*/


/*

// C++ [Brute Force]

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        for(char ch = 'a'; ch <= 'z'; ch++) {
            int f1 = 0, f2 = 0;
            for(char c : word1) {
                if(c == ch)
                    f1++;
            }
            for(char c : word2) {
                if(c == ch)
                    f2++;
            }
            if(abs(f1 - f2) > 3)
                return false;
        }
        return true;
    }
};

-----------------------------------------------------------------------------

// Space Complexity (Auxiliary): O(1)
// Time Complexity: O(26 * n) = O(n)

// Optimized
// Instead of traversing the strings over and over again for each character, we can simply count the frequencies of 
// each character and store them in a hashmap. In this case, since only lowercase english characters are allowed, 
// we can also use a frequency array instead of a hashmap. After storing all character frequencies for both the 
// strings, we can traverse the frequency array to check if there's any character whose difference in frequencies
//  exceeds 3.



class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int f1[26] = {0}, f2[26] = {0};
        
        for(char c : word1) {
            f1[c - 'a']++;
        }
        for(char c : word2) {
            f2[c - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(abs(f1[i] - f2[i]) > 3)
                return false;
        }
        return true;
    }
};


*/






// -------------------------------------------------------------------------------------------------

// 2108. Find First Palindromic String in the Array



//  We need function to solve this problem 
/*

class Solution {
public:
    bool checkPalindrome(string it){
        int start = 0;int end = it.size()-1;
        while(start<end){
            if(it[start] != it[end]){
                return false;
            }
            start++;end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        // sort(words.begin(),words.end(),greater<string>());
        for(auto it:words){
            if(checkPalindrome(it)){
                return it;
            }
//             int start =0, end = it.size()-1;
//             if(it.size()==1){
//                 return it;
//             }
//             while(start<end){
//                 if(it[start] != it[end]){
//                     break;
//                 }
//                 else if(it[start]==it[end]){
//                         start++;end--;
//                         return it;
//                     }   
//             }
            
        }
        return "";
    }
};

*/



//                                      Discussion Solution


//  ANother Solution

/*

string firstPalindrome(vector<string>& words) {
    for (auto &w : words)
        if (w == string(rbegin(w), rend(w)))
            return w;
    return "";
}

*/


//  Another Solution

/*

string firstPalindrome(vector<string>& words) {
    for (auto &w : words)
        if (equal(begin(w), end(w), rbegin(w)))
            return w;
    return  {};
} 

*/



/*

bool isPal(string word) {
    int l = 0, r = word.size()-1;
    while (l < r && word[l] == word[r]) l++, r--;
    return r == l || r+1 == l;
}

string firstPalindrome(vector<string>& words) {
    int i = 0;
    while (i < words.size() && !isPal(words[i])) i++;
    return i < words.size() ? words[i] : "";
}


*/




/*


// Solution 1.
// OJ: https://leetcode.com/contest/weekly-contest-272/problems/find-first-palindromic-string-in-the-array/

// Time: O(NW)
// Space: O(W)

class Solution {
public:
    string firstPalindrome(vector<string>& A) {
        for (auto &s : A) {
            string r(rbegin(s), rend(s));
            if (r == s) return s;
        }
        return "";
    }
};

// Solution 2.

// OJ: https://leetcode.com/contest/weekly-contest-272/problems/find-first-palindromic-string-in-the-array/


// Time: O(NW)
// Space: O(1)

class Solution {
    bool isPalindrome(string &s) {
        int i = 0, j = s.size() - 1;
        while (i < j && s[i] == s[j]) ++i, --j;
        return i >= j;
    }
public:
    string firstPalindrome(vector<string>& A) {
        for (auto &s : A) {
            if (isPalindrome(s)) return s;
        }
        return "";
    }
};

*/