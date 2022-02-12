//                              A better repeated deletion algorithm

// Brute force -->O(N^2)->TC  and  O(1)->SC

/*
#include<bits/stdc++.h>
using namespace std;

int deleteDup(vector<int>& nums){
    // The initial length is simply the capacity.
    int len = nums.size();

    // Assume the last element is always unique.
    // Then for each element, delete it iff it is
    // the same as the one after it. Use our deletion
    // algorithm for deleting from any index
    for(int i=len-2;i>=0;i--){
        if(nums[i]==nums[i+1]){
            // Delete the element at index i, using our standard
            // deletion algorithm we learned.
            for(int j=i+1;j<len;j++){
                nums[j-1] = nums[j];
            }
            len--;
        }
    }
    return len;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int m = deleteDup(nums);
    for(int i=0;i<m;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
*/

// Optimized solution-->O(n)->TC and O(1)->Space complexity


/*
#include<bits/stdc++.h>
using namespace std;

vector<int> copyWithRemovedDuplicates(vector<int>& nums){
    int len = nums.size();
    // Check for edge cases.
    if(len==0){
        return nums;
    }
    // Count how many unique elements are in the Array.
    int uniqueNumbers = 0;
    for(int i=0;i<len;i++){
        // An element should be counted as unique if it's the first
        // element in the Array, or is different to the one before it.
        if(i==0 || nums[i]!=nums[i-1]){
            uniqueNumbers++;
        }
    }
    // Create a result Array.
    vector<int>result(uniqueNumbers);
    int positionOfNonDup=0;
    for(int i=0;i<len;i++){
        // Same condition as in the previous loop. Except this time, we can write
        // each unique number into the result Array instead of just counting them.
        if(i==0 || nums[i]!=nums[i-1]){
            result[positionOfNonDup] = nums[i];
            positionOfNonDup++;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res = copyWithRemovedDuplicates(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
*/