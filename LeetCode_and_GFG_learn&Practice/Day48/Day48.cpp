//                                      Date: 16 March, 2022

//                                         HashMap

// 

// Problem:- 4Sum II


// Using hashmap
/*

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp;
        int count = 0;
        for(auto it:nums1){
            for(auto it1:nums2){
                mp[it+it1]++;
            }
        }
        for(auto it:nums3){
            for(auto it1:nums4){
                if(mp.count(0-it-it1)){
                    count += mp[0-it-it1];
                }
            }
        }
        return count;
    }
};

*/


// using multiset

/*
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        multiset<int>st;
        int res = 0;
        for(auto it:nums1){
            for(auto it1:nums2)
                st.insert(it+it1);
        }
        for(auto it:nums3){
            for(auto it1:nums4){
                if(st.find(0-it-it1) != st.end())
                    res += st.count(0-it-it1);
            }
        }
        return res;
    }
};

*/

// PRoblem:- rings and rods


// Brute force
/*

class Solution {
public:
    int countPoints(string rings) {
        int red[10] = {0};
        int green[10] = {0};
        int blue[10] = {0};
        for(int i=0;i<rings.size();i+=2){
            if(rings[i]=='R'){
                red[rings[i+1]-'0'] = true;
            }
            else if(rings[i]=='B'){
                blue[rings[i+1]-'0'] = true;
            }
            else if(rings[i]=='G'){
                green[rings[i+1]-'0'] = true;
            }
        }
        int count = 0;
        for(int i=0;i<10;i++){
            if(red[i]==1 and green[i]==1 and blue[i]==1){
                count++;
            }
        }
        return count;
    }
};

*/



// Hashmap and hashset

/*

class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,unordered_set<char>>st;
        for(int i=0;i<rings.size();i+=2)
            st[rings[i+1]-'0'].insert(rings[i]);
        int count = 0;
        for(auto it:st){
            if(it.second.size()==3)
                count++;
        }
        return count;
    }
};

*/

// Using 2d vector

/*

class Solution {
public:
    int countPoints(string rings) {
        vector<vector<int>>nums(10,vector<int>(3,0));
        int ans=0;
        for(int i=0;i<rings.size();i+=2){
            if(rings[i] == 'R')
                nums[rings[i+1]-'0'][0] = 1; 
            else if(rings[i] == 'G')
                nums[rings[i+1]-'0'][1] = 1; 
            else
                nums[rings[i+1]-'0'][2] = 1; 
        }
        for(auto &i:nums){
            if(i[0]==1 && i[1] ==1 && i[2] == 1)
                ans++;
        }
        return ans;
    }
};

*/