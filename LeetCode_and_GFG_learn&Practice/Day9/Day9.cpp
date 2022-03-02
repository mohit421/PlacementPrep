//                              Date:- 5 Feb,2022


/*

Largest Number At Least Twice of Others
You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

 

Example 1:

Input: nums = [3,6,1,0]
Output: 1
Explanation: 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.
Example 2:

Input: nums = [1,2,3,4]
Output: -1
Explanation: 4 is less than twice the value of 3, so we return -1.
Example 3:

Input: nums = [1]
Output: 0
Explanation: 1 is trivially at least twice the value as any other number because there are no other numbers.
 

Constraints:

1 <= nums.length <= 50
0 <= nums[i] <= 100
The largest element in nums is unique.
*/

/*
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        nums[-1] = 0;
        int m = (max_element(nums.begin(),nums.end()) - nums.begin());
        for(int x=0;x<nums.size();x++){
            if(nums[x] != nums[m-1] && nums[m-1]<2*nums[x])
                return -1;
        }
        return m;
    }
};
*/


/*
Introduction to 2D Array
Report Issue
Similar to a one-dimensional array, a two-dimensional array also consists of a sequence of elements. But the 
elements can be laid out in a rectangular grid rather than a line.
*/


/*
#include <iostream>

template <size_t n, size_t m>
void printArray(int (&a)[n][m]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Example I:" << endl;
    int a[2][5];
    printArray(a);
    cout << "Example II:" << endl;
    int b[2][5] = {{1, 2, 3}};
    printArray(b);
    cout << "Example III:"<< endl;
    int c[][5] = {1, 2, 3, 4, 5, 6, 7};
    printArray(c);
    cout << "Example IV:" << endl;
    int d[][5] = {{1, 2, 3, 4}, {5, 6}, {7}};
    printArray(d);
}

*/


// Some link for string to integer and vice versa

/*

https://stackoverflow.com/questions/50844864/runtime-error-addition-of-unsigned-offset-to-0x129000a0-overflowed-to-0x129000/50845238#50845238 

https://www.techiedelight.com/convert-int-array-string-cpp/

https://www.geeksforgeeks.org/converting-strings-numbers-cc/

https://www.geeksforgeeks.org/converting-strings-numbers-cc/ 

https://www.geeksforgeeks.org/stdstol-and-stdstoll-functions-in-c/

*/

