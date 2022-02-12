//                                        Date:- 2 Feb,2022

//                                          Height Checker


/*

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].

 

Example 1:

Input: heights = [1,1,4,2,1,3]
Output: 3
Explanation: 
heights:  [1,1,4,2,1,3]
expected: [1,1,1,2,3,4]
Indices 2, 4, and 5 do not match.
Example 2:

Input: heights = [5,1,2,3,4]
Output: 5
Explanation:
heights:  [5,1,2,3,4]
expected: [1,2,3,4,5]
All indices do not match.
Example 3:

Input: heights = [1,2,3,4,5]
Output: 0
Explanation:
heights:  [1,2,3,4,5]
expected: [1,2,3,4,5]
All indices match.
 

Constraints:

1 <= heights.length <= 100
1 <= heights[i] <= 100
*/

/*

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> eql = heights;
        sort(eql.begin(),eql.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(eql[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
};

*/


// Problem :- Squares of a Sorted Array

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
            }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

*/

// Using two pointer technique
/*
class Solution{
    public:
        vector<int> sortedSquares(vector<int> &nums){
            int len = nums.size();
            vector<int> res(len);
            int start = 0,end = len-1;
            for(int i=len-1;i>=0;i++){
                if(abs(nums[start])>abs(nums[end]))
                    res[i] = nums[start]*nums[start++];
                else
                    res[i] = nums[end]*nums[end--];
            }
            return res;
        }
};
*/


// using while loop

/*
class Solution {
    public int[] sortedSquares(int[] nums) {
        int left = 0;
        int right = nums.length -1;
        int index = nums.length- 1;
        int result[] = new int [nums.length];
        while(left<=right)
        {
            if(Math.abs(nums[left])>Math.abs(nums[right]))
            {
                result[index] = nums[left] * nums[left];
                left++;
            }
            else
            {
                result[index] = nums[right] * nums[right];
                right--;
            }
            index--;
        }
        return result;
    }
}
*/
