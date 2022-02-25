//                                      Date: 21 Feb,2022

//  Problem:- Majority Voting Problem:



/*

Using unordered Map | Majority Voting Solution

I First try with stl function :- **std::count(firstIterator, lastIterator,val) ** --> It's time complexity is O(n).
It's Brute force solution --> we can do by using count function in stl but this give TLE:- Most of the test cases are passed.
So I try it using unordered_map below it's solution
1st we count it's each occourence and store it mpp and return when mpp[x] > n/2 as it is given in description .
*/


//  TC:- O(n)  , SC:- O(n)

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans;
        // for(auto it:nums){
        //     if(count(nums.begin(),nums.end(),it)>n/2){
        //         ans = it;
        //     }
        // }
        // return ans;
        unordered_map<int,int>mpp;
        int maxi = n/2;
        for(auto it:nums){
            mpp[it]++;
        }
        for(int it:nums){
            if(mpp[it]>n/2){
                ans= it;
            }
        }
        return ans;
    }
};

*/

/*



// The standard guarantees
- From the C++11/14 standard, std::sort is guaranteed to have:
Complexity: O(N log(N)) (where N == last - first) comparisons.

- The other, stable, standard sorting algorithm (namely std::stable_sort) is guaranteed to have:
Complexity: It does at most N log²(N) (where N == last - first) comparisons; if enough extra memory is available,
 it is N log(N).

- For std::forward_list::stable, instead:

Complexity: Approximately N log(N) comparisons, where N is distance(begin(), end()).

- The same goes for std::list:

Complexity: Approximately N log(N) comparisons, where N == size().


*/




//                                              Discussion Soltuion


/*
// Numbers occupying more than half the space must be in the middle when sorted


// TC:- O(nlogn)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};


*/


//  Another discussion Solution

/*

- time complexity is o(n) and space complexity is o(1)

We use the **Moore Vooting Algorithm**

The basic thinking is that we need to pair the distinct elements and once all the elements are paired , the left out element may be the potential answer

Eg 1) - nums = [3,2,3]
Here we pair 3 and 2 and the left out element which is 3 may be the potential answer

Eg 2) - nums = [2,2,1,1,1,2,2]
Here three 1's are paired with three 2's and 2 is left . Therefore it is the answer

*/


//  Implementation part
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int value = nums[0];   // initialize value with 1st element of the array
        int count = 1;          // therefore the count is 1
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(value==nums[i])
            {
                count++;     // if the value is equal to nums[i] , means the consecutive elements are same so increase the value of count
            }
            else
            {
                count--;  // if the value is not equal to nums[i] , means the consecutive elements are not same so pair them and decrease the value of count by 1
            }
            if(count==0)   // this means the pairing of the elements till the ith element of the array is done and now we have a new value which is not paired with any element
            {                      // for eg in nums = [3,2,3] when we reach the last element count is zero so , the new value now becomes 3 (last element) and it is not paired with any element 
                value = nums[i];    
                count = 1; 
            }
        }
        
        return value;   // after traversing the whole loop , value will have the final answer and will contain the elements which are not paired so that is the Majority Element
    }
};

*/





//  Another one

/*

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            if(majority == nums[i]) 
                count++;
            else 
                count--;
        }
        return majority;
    }
};

*/