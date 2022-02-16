//                              


// Problem --> 136. Single Number

// 
// 1. O(NLog N) Time and O(1) Space solution:

/*

    // Sorting the array will bring all the duplicate elements next to each other 
    // After sorting we just need to check its neighbour if it is same.If it is not then 
    // this must be the single number
*/


/*
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1;){
            if(nums[i+1] != nums[i])
                return nums[i];
            else
                i+=2;
        }
        return nums[nums.size()-1];
    }

*/



// 2. Using Unordered Maps (Hash Tables)


/*
    int singleNumber(vector<int>& nums) {        
        unordered_map<int, int> um;
        for(int a: nums)
            um[a]++;
        for(auto it = um.begin(); it!=um.end(); it++){
            if(it->second==1)
                return it->first;
        }
        return 0;
    }

*/




// 3. Using XOR(^) bitwise operator to find unique number (Fastest)

/*

Bitwise XOR Operator(^) has three properties:
a^a = 0
0^a = a
XOR is associative just like addition, multiplication, etc which means that -> a^b^c = a^(b^c) = (a^b)^c = (a^c)^b
So, when we XOR all the numbers in the list, all the numbers that occur 2 times become 0 as a^a = 0. At the end, 
we will be left with an expression like 0^n, where n is the only number occurring once. 
Using second property 0^a = a :- 0^n = n. Hence, we get the unique number.
    
*/

/*
    int singleNumber(vector<int>& nums) {        
        
        // Using XOR property for Unique number
        int resultXOR = 0;                
        for(int a: nums)
            resultXOR ^= a;        
        return resultXOR;            
    }

*/

// Using while loop

/*


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n=nums.size();
        while(i<n-1){
            if(nums[i]==nums[i+1])
                i=i+2;
            else
                return nums[i];
        }
        return nums[n-1];
    }
};

*/




// Using Hashing

/*
//O(n) time and O(n) space
    // maintain a hashtable insert an element when it has not been inserted before 
    // if it was already there then remove that element after these operations only one element
    // will be left in the hashtable return that element;
    // verdict Accepted

*/


/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int>hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i]) != hash.end())
                hash.erase(nums[i]);
            else
                hash.insert(nums[i]);
        }
        return *hash.begin();
    }
};

*/



/*

class Solution {
public:
    // brute force
    // O(n^2) time and O(n) space
    // check each pair of index of nums to check if it is repeated and if it is repeated
    // insert into a hash table to avoid computing again
    
    int solveBrute(vector<int>&nums){
        unordered_set<int>indexToSkip;
        for(int i=0;i<nums.size();i++){
            if(indexToSkip.find(i) != indexToSkip.end()) // if already found for this index
                continue;
            indexToSkip.insert(i);
            int target = nums[i];
            bool found = false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j] == target){
                    found = true;
                    indexToSkip.insert(j);
                    break;
                }
            }
            if(!found)
                return nums[i]; 
        } 
        return -1;// no element is repeated
    }
*/