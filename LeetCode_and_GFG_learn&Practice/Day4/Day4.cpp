//                          Date:- 31 Jan,2022

/*

Problem:- Move Zeroes

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int count=0;
        if(nums.size()<=1){
            return;
        }
        for(int i=0;i<len;i++){
            if(nums[i]!=0)
                nums[count++] = nums[i];
        }
        for(int i=count;i<nums.size();i++){
            nums[i] = 0;
        }
    }
};

*/

// Using while loop

/*
void moveZeroes(vector<int>& nums) {
    int last = 0, cur = 0;
    
    while(cur < nums.size()) {
        if(nums[cur] != 0) {
            swap(nums[last], nums[cur]);
            last++;
        }
        
        cur++;
    }
}
*/


// Brute force 

/*
class Solution {
public:
void moveZeroes(vector<int>& nums) {

      int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]!=0)
                continue;
            for(int j=i;j<n-1;j++)
            {
                swap(nums[j],nums[j+1]);
            }
        }
}
};
*/




                                //Problem->  Sort Array By Parity(leetcode)


/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the 
odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 5000
0 <= nums[i] <= 5000
*/
// My solution
/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()<=1){
            return nums;
        }
        int start = 0,end = nums.size()-1;
        while(start<end){
            if(nums[start]%2!=0){
                if(nums[end]%2==0){
                    swap(nums[start],nums[end]);
                    start++;end--;
                }
                else{
                    if(nums[end]%2!=0){
                        end--;
                    }
                }
            }
                    
            else{
                start++;
            }
        }
        return nums;
    }
};

*/


// Another way--Optimized solution  
/*
class Solution {
public:
     vector<int> sortArrayByParity(vector<int> &A) {
        for (int i = 0, j = 0; j < A.size(); j++)
            if (A[j] % 2 == 0) 
                swap(A[i++], A[j]);
        return A;
    }
};
*/

// Another way

/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                v.push_back(nums[i]);
        }
        
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
                v.push_back(nums[i]);
        }
        return v;
    }
};

*/

