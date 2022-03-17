//                                      Date:- 15 March, 2022

//                                      Sliding window

// Problem:- 643. Maximum Average Subarray I

// TC:- O(n) and SC:- O(1)
/*

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum;
        for(int i=0;i<k;i++){
            maxSum += nums[i];
        }
        double winSum = maxSum ,maxAvg;
        for(int i=k;i<nums.size();i++){
            winSum += nums[i] - nums[i-k];
            maxSum = max(winSum,maxSum);
        }
        maxAvg = maxSum/k;
        return maxAvg;
    }
};

*/


//  Using While Loop --> Sliding WIndow 

/*
double findMaxAverage(vector<int>& nums, int k) {
    //This question will be solved by sliding window technique
    //first we will take a window of size k 
    //and move it till the end
    double sum=0;
    double max_sum=0;
    int i=0;
    for(;i<k;i++) //calculate the sum for first k values(intial window)
    {
        sum+=nums[i];
    }
    max_sum=sum;
    
    //now slide the window 
    //remove element from left and add from right 
    //make note of max sum
    int j=0;
    while(i<nums.size())
    {
        sum-=nums[j++];
        sum+=nums[i++];
        max_sum=max(max_sum,sum);
    }
    return max_sum/k;
        
    }

*/

// Brute force

// Give TLE 
/*

n == nums.length
1 <= k <= n <= 105
-104 <= nums[i] <= 104

*/
/*

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = INT_MIN,maxAvg;
        for(int i=0;i<nums.size()-k+1;i++){
            double currSum = 0;
            for(int j=0;j<k;j++)
                currSum = currSum + nums[i+j];
            maxSum = max(currSum,maxSum);
        }
        maxAvg = maxSum/k;
        return maxAvg;
    }
};

*/




// Problem:-1984. Minimum Difference Between Highest and Lowest of K Scores


// Optimized approach:- sliding window
/*

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int minDiff = nums[k-1] - nums[0];
        for(int i=k-1;i<nums.size();i++){
            minDiff = min(minDiff,nums[i]-nums[i-k+1]);
        }
        return minDiff;
    }
};

*/