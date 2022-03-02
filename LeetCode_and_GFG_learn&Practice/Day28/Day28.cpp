//                                  Date: 24 feb, 2022


/*
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, countR = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
                countR++;
            else
                countR--;
            if(countR==0)
                ans +=1;
        }
        return ans;
    }
};
*/


//                              Discussion SOlution


/*

int balancedStringSplit(string s) {
    int res = 0, cnt = 0;
    for (const auto& c : s) {
        cnt += c == 'L' ? 1 : -1;
        if (cnt == 0) ++res;
    }
    return res;        
}
*/


// We can also do it using stack , If i study that theni solve this 


// Brute Force Method:

/*
class Solution {
public:
    int balancedStringSplit(string s) {
      int count_r=0, count_l =0,total_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')count_r++;
            else if(s[i]=='L')count_l++;
            
            if(count_r == count_l){
                total_count++;
                count_r=0;
                count_l=0;
            }
        }
        return total_count;
    }
};


*/






//  Problem :- 1773. Count Items Matching a Rule



/*

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size();
        int count = 0;
        for(int i=0;i<n;i++){
            // count = 0;
            // for(int j = 0; j<3 ; j++){
                if(ruleKey == "type"){
                    if(items[i][0] == ruleValue)
                        count++;
                }
                else if(ruleKey == "color"){
                    if(items[i][1] == ruleValue)
                        count++;
                }
                else if(ruleKey == "name"){
                    if(items[i][2] == ruleValue)
                        count++;
                }
            }
        // }
        return count;
    }
};

*/




//                                      Discussion Solution

/*

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i = ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : 2;
        int ans = 0;
        for(auto item : items)
        {
            if(item[i] == ruleValue)
                ans++;
        }
       return ans;
    }
};

*/

//  Above code more optimized

/*

int countMatches(vector<vector<string>>& items, string key, string val) {
    int idx = key == "type" ? 0 : key == "color" ? 1 : 2;
    return count_if(begin(items), end(items), [&](const auto &i) { return i[idx] == val; });
}

*/




// ANother solution

/*

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i;
        if(ruleKey=="type")i=0;
        if(ruleKey=="color")i=1;
        if(ruleKey=="name")i=2;
        
        int ans=0;
        for(int j=0;j<items.size();j++){
            if(items[j][i]==ruleValue)ans++;
        }
        
        return ans;
    }
};

*/



//  Using Map

/*
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<items.size();++i){
           mp["type"].push_back(items[i][0]);
           mp["color"].push_back(items[i][1]);
           mp["name"].push_back(items[i][2]); 
        }
        int count=0;
        for(const auto &i:mp[ruleKey]){
            if(i==ruleValue) ++count;
        }
        return count;
}

*/


//  ANother solution
/*

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int x;
        if(ruleKey == "type")
            x=0;
        else if(ruleKey == "color")
            x=1;
        else if(ruleKey == "name")
            x=2;
        else
            x=-1;
        int count = 0,i,j;
        if(x != -1)
        {
            for(i=0; i<items.size(); i++)
            {
                if(items[i][x] == ruleValue)
                    count++;
            }    
        }
        
        return count;
    }
*/



