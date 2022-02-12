//                                  Date:- 15 Jan, 2022
//                                          Day - 1

// Problem -1 :--         Maximum consecutive ones
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


// Problem2:- Find Numbers with even number of Digits

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


// same problem another way 

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



// Problem 3:-   Squares of a sorted array 

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



//                          Date:- 19 Jan,2021



// Duplicate Zeros 
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



//                                  Date:- 20 Jan,2022


// Remove Element

/*

there is some problem in this code 

*/

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int temp;
        int start = 0,end = n-1;
        while(start<end){
            if(nums[start]==val){
                if(nums[end] == val){
                    end--;
                    n--;
                    temp = nums[start];
                    nums[start] = nums[end];
                    nums[end] = temp;
                }
            }
            start++;
        }
        return n-1;
    }
};
*/


// Correct one
/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), i = 0;
		while ( i < n )
		{
			 if ( nums[i] == val )
			 {
				 nums[i] = nums[n - 1];
				 n--;
			 }
				
			else i++;
		}
		 return n;  
	}
};
*/



// Merge sorted array



// Brute force approach

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



