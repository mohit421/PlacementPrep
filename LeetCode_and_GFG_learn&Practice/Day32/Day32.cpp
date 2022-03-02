//                                  Date:- 28 Feb,2022


//                                     Explore-> Array and string 

//  Problem:- Maximum Consecutive Ones


/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,begin=0,end=0;
        for(;end<nums.size();end++) {
            if(nums[end]!=1) {
                if((end-begin) > max)
                    max=end-begin;
                begin=end+1;
            }   
        }
        return (end-begin) > max ? (end-begin) : max;
    }
};

*/

// ANother solution
/*

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,begin=0,end=0;
        while(end<nums.size()){
            if(nums[end] != 1){
                if(end-begin>max){
                    max = end - begin;
                    begin = end +1;
                }
            }
            end++;
        }
        return (end-begin) > max ? (end-begin) : max;
    }
};





//  Problem:- Remove Element



//  USing Two Pointer


/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(auto ele:nums){
            if(ele==val){
                cnt++;
            }
        }
        int start = 0, end = nums.size()-1;
        while(start<end){
            if(nums[start]==val){
                if(nums[end] != val){
                    swap(nums[start],nums[end]);
                }
                if(nums[end]==val){
                    end--;
                    swap(nums[start],nums[end]);
                }
            }
            else
                start++;
        }
        return nums.size()-cnt;
    }
};

*/

// ANother Solution



/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int ar:nums){
            if(ar==val){
                cnt++;
            }
        }
        int start = 0, end = nums.size()-1;
        while(start<end){
            if(nums[start]==val){
                swap(nums[start],nums[end]);
                end--;
            }
            else{
                start++;
            }
        }
        return nums.size()-cnt;
    }
};

*/






// Array Partition 1

/*

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minSum = 0;
        for(int i=0;i<nums.size();i+=2){
            minSum += nums[i];
        }
        return minSum;
    }
};

*/








// Problem:-   Two Sum II - Input array is sorted


// Using Two pointer

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size()-1;
        while(numbers[start]+numbers[end] != target){
            if(numbers[start]+numbers[end]<target){
                start++;
            }
            else{
                end--;
            }
        }
        return {start+1,end+1};
    }
};


*/

// Another Solution


/*

vector<int> twoSum(vector<int>& numbers, int target) {
    
    int l = 0;
    int r = numbers.size() -1;
   
    while(l < r){
        if(numbers[l] + numbers[r] == target){
           
            return {l+1,r+1};;
        }
        else if(numbers[l] + numbers[r] > target){
            r--;
        }
        else{
            l++;
        }
    }
	return {};
}

*/





// Using Binary Search 

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i=0;i<N-1;i++){
            int lo = i+1;
            int hi = N;
            while(lo<hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target-nums[i]) return {i+1,mid+1};
                else if(nums[mid]>=target-nums[i]) hi=mid;
                else lo = mid+1;
            }
            if(lo!=nums.size() && nums[lo]==target-nums[i]) return {i+1,lo+1};
        }
        return {}; // not found
    }
};

*/




// Problem:- Rotate Array


/*

Time complexity: O(n). Space complexity: O(n).
*/

/*

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0 || k<=0){
            return;
        }
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i] = nums[i];
        }   
        for(int i=0;i<n;i++){
            nums[(i+k)%n] = arr[i];
        } 
    }
};

*/


// Another solution 



// Unable to understand it for now 
/*

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), start = 0;
        for (; k %= n; n -= k, start += k) {
            for (int i = 0; i < k; i++) {
                swap(nums[start + i], nums[start + n - k + i]);
            }
        }
    }
};

*/


// Using reverse function



// Time complexity of reverse function in stl is O(n) 
// Space complexity of reverse()--> O(n).

// time:O(n) & Space: O(n).
/*

void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}

*/



// Another sol

/*

int n = nums.length;
int arr[] = new int[n];
int j = n-k%n , i =0;
while(i<n){
    arr[i] = nums[j%n];
    i++;
    j++;
}
for(int t =0; t<n; t++){
    nums[t] = arr[t];
} 

*/