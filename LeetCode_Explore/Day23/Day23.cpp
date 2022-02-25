//                                      Date:- 19 Feb,2022


//                                      Practice String Question

// Problem:- Final Value of Variable After Performing Operations

// Code:-

/*
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int len = operations.size();
        int x = 0;
        for(int i=0;i<len;i++){
            if(operations[i]=="X++"){
                x++;
            }
            else if(operations[i]=="++X"){
                ++x;
            }
            else if(operations[i]=="--X"){
                --x;
            }
            else{
                x--;
            }
        }
        return x;
    }
};

*/


//  Optimized Solution

/*

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int res = 0;
		for(int i = 0; i < operations.size(); i++){
			(operations[i][1] == '+') ? res++ : res--;
		}
		return res;
	}
};
*/





//                                              Date:- 19 Feb, 2022

// Today i Participate in biweekly contest and reach to right aproach but unable to submit it correctly

// Problem:- 2176. Count Equal and Divisible Pairs in an Array


// Brute force

/*
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==temp && ((j*i)%k==0)){
                    count++;
                }
            }
        }
        return count++;
    }
};

*/



