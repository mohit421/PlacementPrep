//                                  Date:- 30 Jan,2022

/*
A Better Repeated Deletion Algorithm - Intro

Problem:-   Given a sorted array, remove the duplicates such that each element appears only once.

Input: array = [1, 1, 2]
Output: [1, 2]
Input: array = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
Output: [0, 1, 2, 3, 4]
You've hopefully already done this question, back when we were looking at deleting items from an Array. 
In that case, your algorithm might have looked something like this.


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

