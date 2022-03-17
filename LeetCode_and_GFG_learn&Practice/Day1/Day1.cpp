//                                      Date:- 28 Jan,2022

/*

Explore of leetcode--->Array

1. Search for items in an array

Check If N and Its Double Exist

*/


// Code in O(n*n)
/*
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i,j;
        for(int i = 0;i<arr.size();i++){
            int n = arr[i];
            for(int j=i+1;j<arr.size();j++){
                int m = arr[j];
                if(n==(m*2) || m == (2*n)){
                    return true;
                }
            }
        }
        return false;
    }
};

*/


// Problem-2
/*
2.Remove Duplicates from Sorted Array

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/
//  O(n*n)--> solution
/*



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        for(int i=len-2;i>=0;i--){
            if(nums[i]==nums[i+1]){
                for(int j=i+1;j<len;j++){
                    nums[j-1] = nums[j];
                }
                len--;
            }
        }
        return len;
    }
};

*/


// O(N)-->solution
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
                count++;
            else
                nums[i-count] = nums[i];
        }
        return nums.size()-count;
    }
};
*/






// Problem:- 2202. Maximize the Topmost Element After K Moves






//                      Discussion solution

/*
class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(nums.size()==1 && k%2==1)
            return -1;
        int maxi = 0;
        for(int i=0;i<k-1 && i<nums.size();i++)
            maxi = max(maxi,nums[i]);
        if(k<nums.size()){
            maxi = max(maxi,nums[k]);
        }
        return maxi;
    }
};

*/