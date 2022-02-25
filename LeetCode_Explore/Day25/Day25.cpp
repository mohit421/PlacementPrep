

//                                              Date:- 21 Feb, 2022


//                                                  String Problem


//  Problem:- 2114. Maximum Number of Words Found in Sentences                                


//  SPace Complexity :- O(N)
/*
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len = sentences.size(), count = 0;
        vector<int>vec;
        for(int i=0;i<len;i++){
            count = 0;
            for(int j=0;sentences[i][j] != '\0';j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            vec.push_back(count);
        }
        int mx = *max_element(vec.begin(),vec.end());
        return mx+1;
    }
};

*/



// Approach 2:- Space Complexity :- O(1)

/*
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len = sentences.size(), count = 0;
        int maxi=0;
        for(int i=0;i<len;i++){
            count = 0;
            for(int j=0;sentences[i][j] != '\0';j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            if(maxi<count){
                maxi = count;
            }
        }
        return maxi+1;
    }
};
*/



//                                      Discussion Solutiion


// 1
/*
int mostWordsFound(vector<string>& s) {
    return 1 + accumulate(begin(s), end(s), 0, [](int res, const auto &s) {
        return max(res, (int)count(begin(s), end(s), ' ')); });
}
*/

// 2.

/*
int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto i:sentences)
            res=max(res,(int)count(i.begin(),i.end(),' ')+1);
        return res;
}
*/

// Like 2

/*
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for (auto const &s: sentences) {
            int n = count(s.begin(), s.end(), ' ');
            res = max(res, n + 1);
        }
        return res;
    }
};


*/


//  3. 
/*

class Solution {
public:
    int mostWordsFound(vector<string>&s) {
        
        int n=s.size();
        int maxi=INT_MIN;
        //traverse the vector of string 
        for(int i=0;i<n;i++){
            string x=s[i];
            int cnt=0;
            for(int j=0;j<x.length();j++){
              //count the spaces
                if(x[j]==' '){
                    cnt++;
                }
            }
           //set the maximum
            maxi=max(maxi,cnt+1);
        }
        return maxi;
    }
};

*/


// 4. 

/*

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
		int max = 0, ind;
		char *ptr;
		for(int i = 0; i<sentences.size(); i++)
			{
			ind = 1;
			ptr = &sentences[i][0];
			while(*ptr != '\0')
			{
					if(*ptr == ' ')
					ind++;
			ptr++;
			}
        if(max < ind)
            max = ind;
        }
        return max;
    }
    
};

*/





// Problem:-1108. Defanging an IP Address


//                                      Discussion Solution


/*
i < address.size() signed / unsigned comparison will be enabled as a warning in many codebases, and warnings are often treated as errors. Cleaner to do:
for(const char c : address){
or:
for(auto c : address){
    
*/

/*
class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        // for(auto st:address){
        for(const char c : address){
            if(st=='.'){
                str += "[.]";
            }
            else{
                str += st;
            }
        }
        return str;
    }
};
*/




// Another way 

/*

- How could we make sure that the memory is available for string size expansion? I think this solution expands the 
size of address and use inplace replacement.

- address= address.substr(0,i)+"[.]"+address.substr(i+1,n+5);
we all know IP Address has 3 dots and we repleasing "."by"[.]" 2 extra for each dot so in last we can expand like 
this (i+1,n+5) we add 3*2=6 to n-1 that is n-1+6=n+5
*/


/*
class Solution {
public:
    string defangIPaddr(string address) {
        for (int i = address.size() - 2; i >= 0; i--)
            if (address[i + 1] == '.')
                address = address.substr(0, i + 1) + "[.]" + address.substr(i + 2);
        return address;
    }
};






// Problem:-  771. Jewels and Stones



/*

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

*/




//                                      Discussion Solution


// 1. 

/*

Explanation
- read J and build jewels hash set.
- read S and count jewels.
Complexity
- I used hash set and it's O(1) time to check if it contains an element.
- So the total time complexity will be O(J+S), instead of O(JS)

Space is O(J)

*/



/*

int numJewelsInStones(string J, string S) {
        int res = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for (char s : S)
            if (setJ.count(s)) res++;
        return res;
    }


*/


// 2. 

/*

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<int> map(128, 0);
        int res = 0;        
        for (char& c : J) map[c]++;
        for (char& c : S) if (map[c]) res++; 
        return res;
    }
};

*/


// Another Solution 


/*


class Solution {
public:
    
    // ascii from A to z
    bool list[58];
    
    int numJewelsInStones(string J, string S) {
        int cnt=0;
                
        for(int i=0; i < J.size(); i++)
            list[J[i]-65]=true;
        
        for(int i=0; i < S.size(); i++)
            if(list[S[i]-65])
                cnt++;
        
        return cnt;
    }
};

*/