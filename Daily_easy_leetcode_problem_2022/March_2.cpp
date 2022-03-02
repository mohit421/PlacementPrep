// 


// Problem:- 392. Is Subsequence



/*
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool found = false;
        int j = 0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j])
                j++;
        }
        if(j==s.size())
            found = true;
        return found;
    }
};


*/

//  Using two pointer

/*


bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == m ? 1 : 0;
    }

*/

// Recursive solution


/*

class Solution {
public:
    bool isSubSeq(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSeq(str1, str2, m-1, n-1); 
    // If last characters are not matching 
    return isSubSeq(str1, str2, m, n-1); 
} 
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s,t,m,n);
    }
};


*/