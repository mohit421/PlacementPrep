//                                  Date:- 23 Feb, 2022

//                                      String 


// Problem:- 1528. Shuffle String

//  Vector pair;
/*

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        vector< pair<int, char> >vect;
        for(int i=0;i<n;i++){
            vect.emplace_back( make_pair(indices[i],s[i]));
        }
        sort(vect.begin(), vect.end());
        string str;
        for(auto it:vect){
            str += it.second;
        }
        return str;
    }
};

*/




//                                          Discussion Solution 

// using map

/*
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map <int , char> m;
        for(int i = 0 ; i < indices.size() ; ++i){
            m.insert(pair<int , char> {indices[i], s[i]});
        }
        string ans;
        for(auto it = m.begin() ; it != m.end() ; it++){
            ans += it->second;
        }
        return ans;
    }
};

*/

/*

**1. This Problem can best solved with cyclic sort because all indices lies between 0 to n-1 and the swaps also follows the same pattern.
2. This will help you achieve O(1) Space complexity and with minimum no of swaps you can achieve your target
**

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
 
        
        for(int i=0;i<indices.size();i++)
        {
            
              while(indices[i]!=i)
              {
                  swap(s[i],s[indices[i]]);
                  swap(indices[i],indices[indices[i]]);
                       
              }
        }
        
       
        return s;
    }
};

*/





// Another SOlution


/*
Time: O(N)
Space: O(N)
*/
/*
string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
        return res;
    }
*/











/*
Question :-
I was doing it like
```
char res[indices.size()];
for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
string ret = res;
return ret;

```

but this gave lot of memory errors, can someone please explain why this was wrong

*/



/*
Answer:-
We cannot declare an char array with "indices.size()". You have to put a constant value.

If you want to do res[indices.size()] then you have to dynamically allocate that memory in heap 
(using pointers). we could something like this:

char * res = new char[indices.size()]

However, this is not the end. When we dynamically allocate char array of size "indices.size()" we 
have to mention the null character in the end "\0".

I would  make the type "string" for your dynamic array and add to the string ret 
"element by element using indexing".


*/




//  Another Solution 

/*

Explanation:-

Change positions to place items correctly.
If we could place one element in its correct position and swap it with the element in that position, 
we would have atleast one element that is in correct place.

Algorithm:

loop tilli<indices.size()

if indices[i]==i is true, as when true means item is already in right place.
else:
swap s[i] and s[indices[i]], which corrects the place of item s[i] in original string
swap indices[i] and indices[indices[i]], which corrects the place of item indices[i] in indices array
return original string

Time: O(N)
Space: O(1)
*/


/*
string restoreString(string s, vector<int>& indices) {
        int i=0;
        while(i!=indices.size()){
            if(indices[i]==i)
                i++;
            else {
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
            }
        }
        return s;
    }
*/




/*

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector <char> v(indices.size());
        for(int i = 0; i < indices.size(); i++)
        {
            char ch = s[i];
            v[indices[i]] = ch;
        }
        string ans = "";
        for(int i = 0; i < v.size(); i++)
        {
            ans+=v[i];
        }
        return ans;
    }
};

*/




// Problem:- 1678. Goal Parser Interpretation


/*

class Solution {
public:
    string interpret(string command) {
        // string res;
        int n = command.length();
        for(int i=n-2;i>=0;i--){
            if(command[i]=='(' && command[i+1]=='a'){
                command.replace(i,4,"al");
            }
            if(command[i]=='(' && command[i+1]==')'){
                command.replace(i,2,"o");
            }
            if(command[i]=='G'){
                command.replace(i,1,"G");
            }
        }
        return command;
    }
};

*/




//                                  Discussion Solution

// Time: O(N)
// Space: O(1)

/*
class Solution {
public:
    string interpret(string s) {
        string ans;
        for (int i = 0; i < s.size(); ) {
            if (s[i] == 'G') ans += 'G', ++i;
            else if (s[i + 1] == ')') ans += 'o', i += 2;
            else ans += "al", i += 4;
        }
        return ans;
    }
};

*/


/*
class Solution {
public:
    string interpret(string command) {
        string s="",str;
        for(char ch: command){
            s+=ch;
            if(s=="G"){
                str+="G";
                s="";
            }else if(s=="()"){
                str+="o";
                s="";
            }else if(s=="(al)"){
                str+="al";
                s="";
            }
        }
        return str;
    }
};

*/




// 1662. Check If Two String Arrays are Equivalent


/*
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        for(int i=0;i<word1.size();i++){
            s1 += word1[i];
        }
        // sort(s1.begin(),s1.end());
        for(int i=0;i<word2.size();i++){
            s2 += word2[i];
        }
        // sort(s2.begin(),s2.end());
        if(s1==s2)
            return true;
        return false;
    }
};


*/


//                                      Discussion Solution


// Space:- O(1)

/*
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0; // word pointers
        int m = 0, n = 0; // char pointers
        
        while (i < word1.size() and j < word2.size()) {            
            if (word1[i][m++] != word2[j][n++])
                return false;
            
            if (m >= word1[i].size())
                i++, m = 0;
            
            if (n >= word2[j].size())
                j++, n = 0;
        }
        
        return i == word1.size() and j == word2.size();
    }
};

*/

// ANother solution

/*
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string s1=accumulate(word1.begin(),word1.end(),string());
       string s2=accumulate(word2.begin(),word2.end(),string());
       return (s1==s2)?true:false; 
    }
*/


/*
class Solution {
public:
    string concat(vector<string>& word) {
        string res = "";
        for (auto w : word) res += w;
        return res;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return concat(word1) == concat(word2);
    }
};
*/

//                                      Wipro question 

/*

Print a string representing the booking ID from the random sequence with the kth digit
in the same sequence in clockwise circular order

example:-
56237   --> string
3       --> key
*/



/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int k;
    cin>>str;
    cin.ignore();
    cin>>k;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(((int)str[i])%2!=0)
            str[i] = str[(i+k)%n];
    }
    cout<<str<<endl;
    return 0;
}


*/