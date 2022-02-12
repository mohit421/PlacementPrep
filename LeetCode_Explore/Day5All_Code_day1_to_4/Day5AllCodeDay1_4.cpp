//                                        Date:- 31 Jan,2022

//                                          Explore Leetcode


//                                              Array
//                                            Introduction
/*
Let's recap what we looked at in this explore card:

We explored what the Array data structure is all about.
We looked at the C++ syntax for creating Arrays.
We looked at the C++ syntax for reading and writing from Arrays.
We designed basic insertion, deletion, and search algorithms for Arrays.
We played around with in-place Array algorithms.
We solved heaps of fun and exciting problems!
*/

// Problem 1:- Max Consecutive ones
/*
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of 
consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/
// Code
/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prevCount = 0;
        int currCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                prevCount++;
            }
            if(nums[i]==0){
                
                prevCount = 0;   
            }
            currCount = max(currCount,prevCount);
        }
        return currCount;
    }
};
*/


// another way above problem

/*
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,count=0;
        for(int i=0;i<nums.size();i++){
            nums[i]==1?count++:count=0;
            res=max(res, count);
        }
        return res;
    }
};
*/


// Problem 2:-  Find Numbers with Even Number of Digits

/*
Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
 

Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 105
*/

// code

/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount=0;
        for(int i=0;i<nums.size();i++){
            string num = to_string(nums[i]);
            if(num.size()%2==0){
                evencount++;
            }
        }
        return evencount;
    }
};


*/


// same problem another way -->Find Numbers with Even Number of Digits

/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (int(log10(nums[i]) + 1) % 2 == 0)
                count++;
        }
        return count;
    }
};
*/

// Same problem solution --->Find Numbers with Even Number of Digits
/*
 Only numbers between 10 and 99 or 1000 and 9999 or 100000 have even number of digits.
Taking advantage of nums[i] <= 10^5
*/

/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
    }
};
*/



// Problem 3:- Squares of a Sorted Array
/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number 
sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/


// Code:-
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


// Same problem another way

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int left = 0;
        int right = n - 1;
        int curr = n - 1;
        
        while (curr >= 0) {
            int left_val = pow(nums[left], 2);
            int right_val = pow(nums[right], 2);
            if (left_val > right_val) {
                res[curr] = left_val;
                left++;
            } else {
                res[curr] = right_val;
                right--;
            }
            curr--;
        }
        
        return res;
        
    }
};
*/

// Another solution

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) 
                res[k] = A[r] * A[r--];
            else 
                res[k] = A[l] * A[l++];
        }
        return res;
    }
};
*/


// Optimized solution
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
};
*/


//                              Inserting items into an array

/*
Inserting a new element into an Array can take many forms:

Inserting a new element at the end of the Array.
Inserting a new element at the beginning of the Array.
Inserting a new element at any given index inside the Array.
*/




// Problem 4:- Duplicate Zeros
/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements 
to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to 
the input array in place and do not return anything.

 

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 9
*/

/*
class Solution {
public:
    void moveElementRight(int i,vector<int>&arr){
        int j=arr.size()-1;
        while(j>i){
            arr[j] = arr[j-1];
            j--;
        }
    }
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();){
            if(arr[i]==0){
                moveElementRight(i+1,arr);
                if(i+1<arr.size()){
                    arr[i+1] = 0;
                }
                i = i+2;
            }
            else{
                i = i+1;
            } 
        }
    }
};
*/

// Brute force  solution 

/*
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                for(int j=arr.size()-1;j>=i+1;j--)
                {
                    arr[j]=arr[j-1];
                }
                i=i+1;
            }
        }    
    }
};
*/


//  

/*

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0; i<arr.size();++i){
            if(arr[i]==0){
                arr.pop_back();
                arr.insert(arr.begin()+i,0);
                ++i;
            }
        }
    }
};
*/


// Problem 5:- Merge Sorted Array

/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109


Follow up: Can you come up with an algorithm that runs in O(m + n) time?
*/




/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            nums1[m+i] = nums2[i]; 
        }
        sort(nums1.begin(),nums1.end());
    }
};

*/

// another way

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int>res(m+n);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res[k++] = nums1[i++];
            }
            else{
                res[k++] = nums2[j++];
            }
        }
         while(i<m){
             res[k++] = nums1[i++];
         }
         while(j<n){
             res[k++]=nums2[j++];
         }
         for(int k=0;k<m+n;k++){
             nums1[k]= res[k];
         }
     }
};
*/



/*
// C++ solution O(m+n) solution with detailed explanation.

The way to think about the solution is that we will have to do a reverse sorting.
We initialize k=m+n-1 as that will be the last location of nums1.
We will keep checking for the greater element of the two arrays(i=m-1,j=n-1) and insert the values.
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

nums1 = [1,2,3,0,0,0]
             |     |
             i     k

nums2 = [2,5,6]
             |
             j
nums2[j]>nums1[i] thus nums1[k]=6
k and j are decremented.

nums1 = [1,2,3,0,0,6]
             |     |
             i     k

nums2 = [2,5,6]
           |
           j
nums2[j]>nums1[i] thus nums1[k]=5
k and j are decremented.

nums1 = [1,2,3,0,5,6]
             |   |
             i   k

nums2 = [2,5,6]
         |
         j
We keep following up this procedure and we get the desired reult.

class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
    }
};
*/

// one more solution 

/*
class solution{
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           for(int i=m-1, j=n-1, k=m+n-1; j>=0; )
               nums1[k--] = i>=0 && nums1[i]>nums2[j]? nums1[i--]: nums2[j--];
        }
};
*/



//                          Deleting Items From an Array


// Problem 6 . Remove Element


/*

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The 
relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the 
result be placed in the first part of the array nums. More formally, if there are k elements after 
removing the duplicates, then the first k elements of nums should hold the final result. It does not 
matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place 
with O(1) extra memory.



Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100
*/

// Brute force solution
/*

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i] = -1;
            }
            else{
                count++;
            }
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return count;
	}
};

*/
// Optimal solution

/*

int removeElement(vector<int>& nums, int val) {
    int cnt = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(nums[i] == val)
            cnt++;
        else
            nums[i-cnt] = nums[i];
    }
    return nums.size()-cnt;
}
*/


// Another solution

/*
int removeElement(int A[], int n, int elem) {
    int begin=0;
    for(int i=0;i<n;i++) 
        if(A[i]!=elem) 
            A[begin++]=A[i];
    return begin;
}
*/


// Problem 7 :- Remove Duplicates from Sorted Array

/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each 
unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the 
result be placed in the first part of the array nums. More formally, if there are k elements after removing 
the duplicates, then the first k elements of nums should hold the final result. It does not matter what you 
leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

*/


/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                count++;
            else
                nums[i-count] = nums[i];
        }
        return nums.size()-count;
    }
};

*/

// Two pointer technique


/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0, j=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }   
            else{
                j++;
            }
        }
        return i+1;
    }
};

*/

// Another approach

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()==0)
        {
            return 0;
        }
        int cnt=0;
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[j]=nums[i];
                cnt++;
            }
            else
            {
                j++;
                nums[j]=nums[i];
            }
        }
        nums[j]=nums[nums.size()-1];
        return nums.size()-cnt;
    }
};
*/

//                           Searching for items in an array


// Problem 8:- Check If N and Its Double Exist

/*

Given an array arr of integers, check if there exists two integers N and M such that N is the double 
of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
Example 2:

Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.
Example 3:

Input: arr = [3,1,7,11]
Output: false
Explanation: In this case does not exist N and M, such that N = 2 * M.
 

Constraints:

2 <= arr.length <= 500
-10^3 <= arr[i] <= 10^3
*/


// Code in O(n*n) --> Brute force

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



// Binary Search Soln
// Time O(N.logN)
// Space O(1)

/*
class Solution {
public:
    bool binarySearch (vector<int> &arr, int l, int r, int target)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == target)
                return true;
            else if (arr[m] > target)
                r = m - 1;
            else
                l = m + 1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for (int pointer_one = 0; pointer_one < arr.size(); pointer_one++) {
            if ((arr[pointer_one] % 2 == 0) && arr[pointer_one] < 0) {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, arr[pointer_one] / 2))
                    return true; 
            }
            else {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, 2 * arr[pointer_one]))
                    return true;
            }
        }
        return false;
    }
};

*/

// Problem 9:- Valid Mountain Array

/*

Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:

Input: arr = [2,1]
Output: false
Example 2:

Input: arr = [3,5,5]
Output: false
Example 3:

Input: arr = [0,3,2,1]
Output: true
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 104
*/


/*
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int mx = -1;
        int it = max_element(arr.begin(), arr.end()) - arr.begin();
        // for(int i=0;i<arr.size();i++){
            // int m=0;
            // int n = it;
            // if(it>i && it<arr.size()-1){
                // while(m<it && n<=arr.size()-1)
                // {
                //     if(arr[it] != arr[arr.size()-1])
                //     {
                //         if(arr[m]<arr[m+1] && arr[n]>arr[n+1]){
                //             return true;   
                //         }
                //     }
                //     m++;
                //     n++;
                // }
            // }
        // }
        // return false;
            
            if(it == 0 || it == arr.size()-1){
                return false;
            }
            for(int i=0;i<it;i++){
                if(arr[i]>=arr[i+1]){
                    return false;
                }
            }
            for(int i=it+1;i<arr.size();i++){
                if(arr[i]>=arr[i-1]){
                    return false;
                }
            }
        
            return true;
    }
};

*/


// Optimized solution

/*

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int l = 0;
        int r = arr.size() - 1;
        while(l + 1 < arr.size() - 1 && arr[l] < arr[l + 1]) 
            l++;
        while(r - 1 > 0 && arr[r] < arr[r - 1]) 
            r--;
        return l == r;
    }
};
*/




//                                   In-place Operation

// Problem 10:-- Replace Elements with Greatest Element on Right Side

/*

Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.
Example 2:

Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0.
 

Constraints:

1 <= arr.length <= 104
1 <= arr[i] <= 105

*/

//  brute force

/*
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l = 0;
        while (l < arr.size() - 1) {
            int Max = INT_MIN;
            for (int i = l + 1; i < arr.size(); i++) {
                if (Max < arr[i]) {
                    Max = arr[i];
                }
            }
            arr[l] = Max;
            l++;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
*/




/*
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>res;
        for(int i=0;i<n-1;i++){
           int x= *max_element(arr.begin()+i+1,arr.end());
            res.push_back(x);
        }
        res.push_back(-1);
        return res;
    }
};
*/

// Optimized solution

/*
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),temp,mx=-1;
        for(int i=n-1;i>=0;i--)
        {
            temp=arr[i];
            arr[i]=mx;
            mx=max(mx,temp);
        }
        return arr;
    }
};
*/

// Problem 11:- Remove Duplicates from Sorted Array

/*

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


// Brute force approach

/*

class Solution {
    int removeDuplicates(int[] nums) {
        
        // The initial length is simply the capacity.
        int length = nums.size();
        
        // Assume the last element is always unique.
        // Then for each element, delete it iff it is
        // the same as the one after it. Use our deletion
        // algorithm for deleting from any index.
        for (int i = length - 2; i >= 0; i--) {
            if (nums[i] == nums[i + 1]) {
                // Delete the element at index i, using our standard
                // deletion algorithm we learned.
                for (int j = i + 1; j < length; j++) {
                    nums[j - 1] = nums[j];
                }
                // Reduce the length by 1.
                length--;
            }
        }
        // Return the new length.
        return length;
    }
}

*/

/*
This is actually an in-place algorithm, because it doesn't require any extra space—its space complexity 
is O(1)O(1). However, the time complexity's not so flash, at O(N^2). This is because of the nested loop.

*/

/*

We want to get the algorithm down to an O(N) time complexity.

If we don't try to do this in-place, then it's straightforward. We could simply iterate through the Array,
adding all unique elements to a new Array. Seeing as the the input Array is sorted, we can easily 
identify all unique elements, as they are the first element, and then any element that is different 
to the one before it.


One potential problem is that we actually don't know how long the result Array needs to be. Remember how 
that must be decided when the Array is created? The best solution for this problem is to do an initial pass,
counting the number of unique elements. Then, we can create the result Array and do a second pass to add the
elements into it. Here's the code for this approach.
*/


// Optimized solutiion --> TC->O(N)  and SC-> O(1)


/*
vector<int> copyWithRemovedDuplicates(vector<int> nums) {
        
  // Check for edge cases.
  if (nums == null || nums.length == 0) {
      return nums;
  }

  // Count how many unique elements are in the Array.
  int uniqueNumbers = 0;
  for (int i = 0; i < nums.length; i++) {
      // An element should be counted as unique if it's the first
      // element in the Array, or is different to the one before it.
      if (i == 0 || nums[i] != nums[i - 1]) {
          uniqueNumbers++;
      }
  }

// Create a result Array.

  vector<int> result(uniqueNumbers);

  // Write the unique elements into the result Array.
  int positionInResult = 0;
  for (int i = 0; i < nums.length; i++) {
    // Same condition as in the previous loop. Except this time, we can write
    // each unique number into the result Array instead of just counting them.
      if (i == 0 || nums[i] != nums[i - 1]) {
          result[positionInResult] = nums[i];
          positionInResult++;
      }
  }
  return result;
}

*/




// More optimized solution 
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                count++;
            else
                nums[i-count] = nums[i];
        }
        return nums.size()-count;
    }
};
*/



// Leetcode solution of above problem --> remove duplicate

/*

A Better Repeated Deletion Algorithm - Answer

Implementing this requires the use of the two-pointer technique. This is where we iterate over the Array 
in two different places at the same time.

Read all the elements like we did before, to identify the duplicates. We call this our readPointer.
Keep track of the next position in the front to write the next unique element we've found. We call this
our writePointer.
*/

// Use two pointer techniques


// 

/*
int removeDuplicates(vector<int> nums) {
        
  // Check for edge cases.
  if (nums.size == 0) {
      return 0;
  }
  
  // Use the two pointer technique to remove the duplicates in-place.
  // The first element shouldn't be touched; it's already in its correct place.

  int writePointer = 1;

  // Go through each element in the Array.

  for (int readPointer = 1; readPointer < nums.length; readPointer++) {
      // If the current element we're reading is *different* to the previous
      // element...

      if (nums[readPointer] != nums[readPointer - 1]) {
          // Copy it into the next position at the front, tracked by writePointer.
          nums[writePointer] = nums[readPointer];
          // And we need to now increment writePointer, because the next element
          // should be written one space over.
          writePointer++;
      }
  }
  
  // This turns out to be the correct length value.
  return writePointer;
}

*/

/*

Problem 12:- Move Zeroes

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



//Problem 13->  Sort Array By Parity(leetcode)


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


//Problem 14:- Remove element

// Brute force solution
/*

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i] = -1;
            }
            else{
                count++;
            }
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return count;
	}
};

*/
// Optimal solution

/*

int removeElement(vector<int>& nums, int val) {
    int cnt = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(nums[i] == val)
            cnt++;
        else
            nums[i-cnt] = nums[i];
    }
    return nums.size()-cnt;
}
*/