

// 413. Arithmetic Slices

/*

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int i = 0, j,count = 0;
        if(nums.size()<3){
            return 0;
        }
        for(i=0;i<nums.size()-2;i++){
            for(j=i+2;j<nums.size();j++){
                if(nums[i+1]-nums[i]==nums[j]-nums[j-1]){
                    count++;
                }
                else{
                    if(nums[i+1]-nums[i]!=nums[j]-nums[j-1])
                    break;
                }
            }
        }
        return count;
    }
};

*/



//                                          Discussion Solution



// Most optimized one
/*
int numberOfArithmeticSlices(vector<int>& A, int res = 0) {
    for (auto i = 2, j = 1; i < A.size(); ++i) {
        if (A[i] - A[i - 1] != A[j] - A[j - 1])
            j = i;
        res += i - j;
    }
    return res;
}

*/






/*


class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int i,j=2,count=0,ans=0;
        int prev_diff = nums[1]-nums[0];
        for(i=1;i<nums.size()-1;i++){
            int curr_diff = nums[i+1]-nums[i];
            if(curr_diff==prev_diff){
                count++;
            }
            else{
                prev_diff = curr_diff;
                count = 0;
            }
            ans += count;
        }
        return ans;
    }
};


*/