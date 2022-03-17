//                              Date:- 9 March, 2022


//                                  Hash Table:-Hashmap

/*

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = 0, m1[256] = {0}, m2[256] = {0};
        for(i = 0; s[i] != 0 && t[i] != 0; i++){
            if(m1[s[i]] != m2[t[i]])
                return false;
            m1[s[i]] = m2[t[i]] = -i - 1;
        }
        return true;
        }
};

*/


// ?Another solution
/*

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};


*/


// Leetcode solution

/*

    bool isIsomorphic(string s, string t) {
        vector<int>mp1(256,-1);
        vector<int>mp2(256,-1);
        for(int i=0;i<s.length();++i){
            char c1 = s[i];
            char c2 = t[i];
            // Case 1: No mapping exists in either of the dictionaries
            if(mp1[c1] == -1 && mp2[c2] == -1){
                mp1[c1] = c2;
                mp2[c2] = c1;
            }
            // Case 2: Ether mapping doesn't exist in one of the dictionaries or Mapping                    exists and
            // it doesn't match in either of the dictionaries or both 
            else if(!(mp1[c1] == c2 && mp2[c2]==c1)) {
                return false;
            }
        }
        return true;
    }

*/


//                  Another solution

/*

bool isIsomorphic(string s, string t) {
    map<char,char>mp;
    set<char>st;
    int i=0;
    while(i<s.length()){
        if(mp.find(s[i]) != mp.end()){
            if(mp[s[i]] != t[i]){
                return false;
            }
        }
        else{
            if(st.find(t[i]) != st.end()){
                return false;
            }
            mp[s[i]] = t[i];
            st.insert(t[i]);
        }
        i++;
    }
    return true;
}


*/



// Firstuniq ue character in a string 

/*

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(int i= 0;i< s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};

*/


/*

int firstUniqChar(string s) {
    vector<int> v(26,0);
	for(char c : s) v[c - 'a']++;
	for(int i = 0; i < s.length(); i++){
		if(v[s[i] - 'a'] == 1) return i;
	}
	return -1;
}


*/


// 