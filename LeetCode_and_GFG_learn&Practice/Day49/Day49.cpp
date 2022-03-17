//                      Date:- 17 March, 2022


//                      Linked List

/*

Today i learnt introduction to linked list and array vs linked list 
from mycodeschool.com (youtube) and from leetcode too.

*/






//                      Prefix Sum


// Problem:- 1480. Running Sum of 1d Array

/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefixSum;
        int i,sum=0;
        for(i=0;i<nums.size();i++){
            sum += nums[i];
            prefixSum.push_back(sum);
        }
        return prefixSum;
    }
};
*/



//                  Discussion Solution
/*
vector<int> runningSum(vector<int>& nums) {
    partial_sum(begin(nums), end(nums), begin(nums));
    return nums;
}

*/


// Inplace operation
/*

vector<int> runningSum(vector<int>& nums) {

	for(int i=1;i<nums.size();i++) nums[i] += nums[i-1];
	return nums;
}


*/


// Array

/*

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
                return true;
        }
        return false;
    }
};
*/


// Disscusion solution

/*

bool threeConsecutiveOdds(vector<int>& arr) {
    int odds = 0;
    for (auto i = 0; i < arr.size() && odds < 3; ++i)
        odds = arr[i] % 2 ? odds + 1 : 0;
    return odds == 3;
}

*/


// brute force

/*

 bool threeConsecutiveOdds(vector<int>& arr) {
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] % 2 != 0) {
            count++;
            if(count >= 3)return true;
        }
        else count = 0;
        
    }
    return false;
}

*/


// 1732. Find the Highest Altitude

/*

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefixSum;
        int sum = 0;
        for(int i=0;i<gain.size();i++){
            sum += gain[i];
            prefixSum.push_back(sum);
        }
        int maxi = *max_element(begin(prefixSum),end(prefixSum));
        if(maxi<0){
            maxi = 0;
        }
        return maxi;
    }
};

*/


// another way

/*

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0;
        int curr_alt=0;
        for(int i=0;i<gain.size();i++){
            curr_alt+=gain[i]; 
            max_alt=max(curr_alt, max_alt);
        }
        return max_alt;
    }
};


*/


// In javascript

/*

var largestAltitude = function(gain) {
    var maxAlt = 0, currAlt = 0;
    for(var i = 0;i<gain.length;i++){
        currAlt += gain[i];
        maxAlt = Math.max(currAlt,maxAlt);
    }
    return maxAlt;
};
*/