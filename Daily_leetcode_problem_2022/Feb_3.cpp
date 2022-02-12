//                                      Date:- 3 Feb,2022

// 


// Brute force ---> TLE | 21/132 test cases passed --> O(N^4)
/*
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        for(int i=0;i<n;i++)
            for(int j = 0;j<n;j++)
                for(int k=0;k<n;k++)
                    for(int l=0;l<n;l++)
                        if(nums1[i]+nums2[j]+nums3[k]+nums4[l] ==0)
                            count++;
        return count;
    }
};

*/


// Optimized approach


/*
The naive solution is to run four loops by iterating all elements and check for 
(A[i] + B[j] + C[k] + d[h]) == 0. Time complexity: N^4
We can improve solution by iterating through elements of three arrays and check if the fourth array 
contains A[i] + B[j] + C[k] + d == 0 ----> d = -A[i] - B[j] - C[k]. We can use HashSet to store elements 
of fourth array. Overall time complexity: N^3;
To improve the solution we can divide arrays into two parts. Then make calculation of sums of one part 
(A[i] + B[j]) and store their sum's occurences counter in a HashMap. While calculating second part 
arrays' sum (secondSum = C[k] + D[h]) we can check whether map contains secondSum*(-1);
A[i] + B[j] == - C[k] - D[h]
A[i] + B[j] == - (C[k]+D[h])
This solution can be extended for N arrays.
*/
// O(N^2)


// Code

/*
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        for(auto a:nums1)
            for(auto b:nums2)
            // Increment the hashtable at the sum of the pair
                mp[a+b]++;
        int count =0;
        for(auto c:nums3)
            for(auto d:nums4)
                // 1. Check if the negative of curr sum of the pair exists in the hash table. Then they will add 
                      // upto zero. 
                // 2. i.e hash[p[w] + q[x]] + hash[r[y] + s[z]] == 0.
                // 3. But we dont want zero. We want no. of two touples. Hence we store the value in hashtable 
                      // in ans. If it is present in hashtable it will get stored in ans, else it will get 
                      // neglected cosidering it as a zero.
                count += mp[-(c+d)];
        return count;
    }
};

*/

