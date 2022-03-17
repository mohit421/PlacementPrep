//                         Date: 12 March, 2022


// Problem:- Contain duplicate II

// Using vector pair

/*

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0){
            return false;
        }
        vector<pair<int,int>> pr;
        for(int i=0;i<nums.size();i++){
            pr.push_back({nums[i],i});
        }
        sort(pr.begin(),pr.end());
        for(int i=0;i<pr.size()-1;i++){
            if(pr[i].first==pr[i+1].first && abs(pr[i].second - pr[i+1].second) <=k)
                return true;
        }
        return false;
    }
        
};


*/

//  Using hashing

/*

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                if(i-mp[nums[i]]<=k)
                    return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
        
};

*/




// using unordered_set



// I left it for analyze it further

/*

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	unordered_set<int> uset;
	int size = nums.size();
	int w=0;
	for(int i=0;i<size;++i){
		if(i-w>k){
			uset.erase(nums[w++]);
		}
		auto r=uset.insert(nums[i]);
		if(!r.second)
			return true;
	}
	return false;
}

*/


// Using unordered_set
/*
The basic idea is to maintain a set s which contain unique values from nums[i - k] to nums[i - 1],
if nums[i] is in set s then return true else update the set.

*/
/*
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
       unordered_set<int> s;
       
       if (k <= 0) return false;
       if (k >= nums.size()) k = nums.size() - 1;
       
       for (int i = 0; i < nums.size(); i++)
       {
           if (i > k) s.erase(nums[i - k - 1]);
           if (s.find(nums[i]) != s.end()) return true;
           s.insert(nums[i]);
       }
       
       return false;
    }
};

*/