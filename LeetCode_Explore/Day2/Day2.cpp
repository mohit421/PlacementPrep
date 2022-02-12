

//                              Date:- 29 Jan,2022

// Valid mountain array
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


//                                      In-place  Array Operation

/*
vector<int> squareEven(int[] array, int length) {

  // Check for edge cases.
  if (array == null) {
    return null;
  }

  // Create a resultant Array which would hold the result.
  vector<int> result;

  // Iterate through the original Array.
  for(int i = 0; i < length; i++) {

    // Get the element from slot i of the input Array.
    int element = array[i];

    // If the index is an even number, then we need to square element.
    if (i % 2 == 0) {
      element *= element;
    }

    // Write element into the result Array.
    result[i] = element;
  }

  // Return the result Array.
  return result;
}
*/


// in-place implementation for our squareEven(...) function.

/*
vector<int> squareEven(int[] array, int length){

  // Check for edge cases.
  if (array == null) {
    return array;
  }

  // Iterate through the original array.
  for(int i = 0; i < length; i++) {

    // If the index is an even number, then we need to square the element
    // and replace the original value in the Array.
    if (i % 2 == 0) {
      array[i] *= array[i];
    }
    // Notice how we don't need to do *anything* for the odd indexes? :-)
  }

  // We just return the original array. Some problems on leetcode require you
  // to return it, and other's dont.
  return array;
}
*/




// 
/*
 Replace Elements with Greatest Element on Right Side
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




// Remove element

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