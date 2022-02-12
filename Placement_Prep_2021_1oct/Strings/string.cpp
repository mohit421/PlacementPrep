//                                  String 

// Different way of using taking input in string 
// 1.
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str;
    return 0;
}
*/

// 2.
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string str1(5,'n');
    cout<<str1<<endl;
    return 0;
}
*/

// 3.

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}
*/


// Different function in string 

// 1. For concatenating a string -->1. using append()  , 2. Using  + operator
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="fam";
    string str2="ily";
    // append function to append a string 
    s1.append(s2);
    cout<<s1<<endl;
    // another way to concatenate a sting
    string s = s1+s2;
    cout<<s<<endl;
    return 0;
}
*/

// 2. clear() function

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    str.clear();
    cout<<str;
    return 0;
}

*/

// 3. Compare two string
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl; // if we got positive result that means s2 is greater ,if 0 then equal
    return 0;
}
*/


/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "abc";
    cout<<s2.compare(s1)<<endl; // if we got positive result that means s2 is greater ,if 0 then equal
    return 0;
}

*/


// 4. empty() function
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abc";
    cout<<s1<<endl;
    s1.clear();
    if(s1.empty()){
        cout<<"s1 is empty "<<endl;
    }

    return 0;
}
*/

// 5. erase() function
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 ="nincompooop";
    // s1.erase(3,4);
    s1.erase(6,4);
    cout<<s1<<endl;
    return 0;

}
*/

// 6. find() function
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "nincompoop";
    cout<<s1.find("com"); // return index of starting character
    return 0;
}
*/


// 7. length() and size() function for finding the length of a string 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 ="dkshgkfbgnf";
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    return 0;
}
*/


// 8.  substr() -->to find substring in a string 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "nincompoop";
    string s = s1.substr(3,4);
    string s2 = s1.substr(5,4);
    cout<<s<<" "<<s2<<endl;
    return 0;
}
*/

// 9. string to integer
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "786";
    int x = stoi(s1);
    cout<<x+2<<endl;
    return 0;
}
*/


// 10. integer to string   using --> to_string() 

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x = 786;
    cout<<to_string(x) + "2" <<endl;

    return 0;
}
*/

//  11. sort a string 

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "fjgjkfgkfgjfdl";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}

*/


// String Challenge

// Uppercase and lowercase of a string

/*
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "adbgcd";
    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout<<str<<endl;

    return 0;
}

*/



// using inbuilt function for conversion for lowercase and uppercase
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "fasjsdsdf";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    return 0;
}
*/


// form biggest number from the numeric string 

/*
"53214" -->  "54321"
*/
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="498734243";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}
*/


// Return the maximum occurance character in a string 

/*

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "faschdkhfkdjfhjjj";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>= maxF){
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxF <<" "<<ans<<endl;
    return 0;
}
*/


// reverse a string 
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string revStr(string S){
            reverse(S.begin(),S.end());
            return S;
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.revStr(S)<<endl;
    }
    return 0;
}

*/

// Another way of reverse a string 

/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string revStr(string S){
            int len = S.size();
            for(int i=len-1;i>=0;i--){
                cout<<S[i];
            }
            cout<<endl;
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        ob.revStr(S);
    }
    return 0;
}

*/



// Another way of reverse a string 

/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string revStr(string S){
            int len = S.size();
            for(int i=0;i<len/2;i++){
                swap(S[i],S[len-i-1]);
            }
            return S;
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.revStr(S)<<endl;
    }
    return 0;
}

*/


/*

Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
*/
/*
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26];
        for(int i=0;i<26;i++){
            freq[i] = 0;
        }
        for(int i=0;i<str.size();i++){
            freq[str[i]-'a']++;
        }
        int ans;
        int maxF = freq[0];
        for(int i=0;i<26;i++){
            if(freq[i]>maxF){
                maxF = freq[i];
                ans = i ;
            }
        }
        return ans +'a';
    }
};

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
} 

*/

/*

Split numeric, alphabetic and special symbols from a String
*/

// CPP program to split an alphanumeric
// string using STL
/*
#include<bits/stdc++.h>
using namespace std;

void splitString(string str)
{
    string alpha, num, special;
    for (int i=0; i<str.length(); i++)
    {
        if (isdigit(str[i]))
            num.push_back(str[i]);
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            alpha.push_back(str[i]);
        else
            special.push_back(str[i]);
    }

    cout << alpha << endl;
    cout << num << endl;
    cout << special << endl;
}

// Driver code
int main()
{
    string str = "geeks01$$for02geeks03!@!!";
    splitString(str);
    return 0;
}
*/



// Convert interger to roman
/*
#include<iostream>
#include<string>
using namespace std;

int main(){
    int number;
    cin>>number;
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string roman_num[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    string ans = "";
    for(int i=12;i>=0;i--){
        while(number-num[i]>=0){
            ans += roman_num[i];
            number -= num[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/

// Split a string into word

/*
Use string tokenizer function "strtok()" in c++ 
*/
// 1.
/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = "Hi, I am studying about string tokenizer, in c++";
    // char *ptr;
    char* ptr = strtok(str, " ");
    cout<<ptr<<endl;

    return 0;
}
*/

// 2.
/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = "Hi, I am studying about string tokenizer, in c++";
    // char *ptr;
    char* ptr;
    ptr = strtok(str, " ");
    cout<<ptr<<endl;
    ptr = strtok(str, " ");
    cout<ptr<<endl;
    return 0;
}
*/


// Remove vowels from string 

// Way - 1
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int n = S.size();
	    string str = "";
	    for(int i =0;i<n;i++){
	        if(S[i] !='a' && S[i] != 'e' && S[i] !='i' && S[i] != 'o' && S[i] !='u'){
	            str += S[i] ;
	        }  
	    }
	    return str;
	}
};

int main(){
    int t;
    string tc;
    getline(cin,tc);
    t = stoi(tc);
    while(t--){
        string S;
        getline(cin,S);
        Solution ob;
        cout<<ob.removeVowels(S)<<"\n"; 
    }
    return 0;
}

*/


// Way -2
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string str) 
	{
	    // Your code goes here
	    vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U'};
    
        for (int i = 0; i < str.length(); i++) 
        {
        if (find(vowels.begin(), vowels.end(),
          str[i]) != vowels.end()) 
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
	}
};

int main(){
    int t;
    string tc;
    getline(cin,tc);
    t = stoi(tc);
    while(t--){
        string S;
        getline(cin,S);
        Solution ob;
        cout<<ob.removeVowels(S)<<"\n"; 
    }
    return 0;
}
*/

// Way - 3
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string strResp = "";
        char charArray[S.size()+1];
        strcpy(charArray,S.c_str());
        for (int i = 0; i < S.length(); i++) {
            if (charArray[i] == 'a' || charArray[i] == 'e' || charArray[i] == 'i' || charArray[i] == 'o' || charArray[i] == 'u')
                strResp = strResp + "";
            else
                strResp = strResp + charArray[i];
        }
        return strResp;
	    }
};

int main(){
    int t;
    string tc;
    getline(cin,tc);
    t = stoi(tc);
    while(t--){
        string S;
        getline(cin,S);
        Solution ob;
        cout<<ob.removeVowels(S)<<"\n"; 
    }
    return 0;
}
*/

// way-4
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	    string s1 = ""; 
       for(int i=0;i<s.length();i++){
           if(!(checkVowel(s.charAt(i))))
               s1+=s.charAt(i);
       
       }
       return s1;
       
   }
   Boolean checkVowel(char c){
       if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
       return true;
       else 
       return false;
   }
};

int main(){
    int t;
    string tc;
    getline(cin,tc);
    t = stoi(tc);
    while(t--){
        string S;
        getline(cin,S);
        Solution ob;
        cout<<ob.removeVowels(S)<<"\n"; 
    }
    return 0;
}

*/



//                                        Date:-24 Jan,2022

//                                       substr() 

/*
Syntax:-

string substr(size_t pos,size_t len) const;

parameter:-
-pos:- Position of the first character to be copied
-len:- Length of the sub-string.
-size_t:- It is an unsigned integral type.

return value:-   It return an string object.


Application:-
1. How to get a sub-string after a character
2. How to get a sub-string before a character
3. Print all substrings of a given string
4. Sum of all substring of a string representing a number

*/

// 1. Code:- How to get a sub-string after a character

/*
#include<string.h>
#include<iostream>
using namespace std;
int main(){
    string s = "hello:Mohit";
    int pos = s.find(":");
    string  sub = s.substr(pos+1);
    cout<<"String is: "<<sub;
    return 0;
}
*/

// 2. Code:- How to get a sub-string before a character

/*
#include<string.h>
#include<iostream>
using namespace std;
int main(){
    string s = "hello:Mohit";
    int pos = s.find(":");
    string  sub = s.substr(0,pos);
    cout<<"String is: "<<sub;
    return 0;
}
*/

// 3. Print all substrings of a given string

// Code
/*
#include<bits/stdc++.h>
using namespace std;

void subString(string str,int n){
    for(int i=0;i<n;i++){
        for(int len=1;len<=n-i;len++){
            cout<< str.substr(i,len)<<endl;
        }
    }
}
int main(){
    string str;
    getline(cin,str);
    subString(str,str.length());
    return 0;
}

*/





// check Palindromic string or not


// analyze later what wrong in this code

/*
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    if(s.size()==0 || s.size()==1){
        return true;
    }
    if(s.at(0)==s.at(s.size()-1)){
        return isPalindrome(s.substr(1,s.size()-1));
    }
    return false;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<(isPalindrome(str));
    return 0;
}
*/



// GFG


/*

#include <bits/stdc++.h>
using namespace std;

bool isPalRec(string str,int s, int e)
{
	if (s == e)
	    return true;

	if (str[s] != str[e])
	    return false;

	if (s < e + 1)
	    return isPalRec(str, s + 1, e - 1);

	return true;
}
bool isPalindrome(string str)
{
	int n = str.size();
	if (n == 0)
		return true;
	
	return isPalRec(str, 0, n - 1);
}
int main()
{
	string str;
	getline(cin,str);
	if (isPalindrome(str))
	    cout << "Yes";
	else
	    cout << "No";
	return 0;
}


*/

/*
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r){
    if(s.size()==0 || s.size()==1){
        return true;
    }
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    if(l<r+1){
        return isPalindrome(s,l+1,r-1);
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    cout<<isPalindrome(s,0,s.size()-1);
    return 0;
}
*/


