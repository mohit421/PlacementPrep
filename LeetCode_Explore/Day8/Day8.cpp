//                                              Date:- 4 feb,2022


//                                      Explore-> Array & String

//                                      Introduction to Array

/*
An array is a basic data structure to store a collection of elements sequentially. But elements can be accessed 
randomly since each element in the array can be identified by an array index.

An array can have one or more dimensions. Here we start with the one-dimensional array, which is also called the 
linear array. 

*/

// Operations in Array


/*
#include <iostream>
using namespace std;
int main() {
    // 1. Initialize
    int a0[5];
    int a1[5] = {1, 2, 3};  // other element will be set as the default value
    // 2. Get Length
    int size = sizeof(a1) / sizeof(*a1);
    cout << "The size of a1 is: " << size << endl;
    // 3. Access Element
    cout << "The first element is: " << a1[0] << endl;
    // 4. Iterate all Elements
    cout << "[Version 1] The contents of a1 are:";
    for (int i = 0; i < size; ++i) {
        cout << " " << a1[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of a1 are:";
    for (int& item: a1) {
        cout << " " << item;
    }
    cout << endl;
    // 5. Modify Element
    a1[0] = 4;
    // 6. Sort
    sort(a1, a1 + size);
}

*/



//                                          Introduction to Dynamic Array

/*

As we mentioned in the previous article, an array has a fixed capacity and we need to specify the size of the array 
when we initialize it. Sometimes this will be somewhat inconvenient and wasteful.

Therefore, most programming languages offer built-in dynamic array which is still a random access list data structure 
but with variable size. For example, we have vector in C++ and ArrayList in Java.
*/

// Operations in Dynamic Array


/*
#include <iostream>
using namespace std;
int main() {
    // 1. initialize
    vector<int> v0;
    vector<int> v1(5, 0);
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);
    // 2. cast an array to a vector
    int a[5] = {0, 1, 2, 3, 4};
    vector<int> v4(a, *(&a + 1));
    // 3. get length
    cout << "The size of v4 is: " << v4.size() << endl;
    // 4. access element
    cout << "The first element in v4 is: " << v4[0] << endl;
    // 5. iterate the vector
    cout << "[Version 1] The contents of v4 are:";
    for (int i = 0; i < v4.size(); ++i) {
        cout << " " << v4[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of v4 are:";
    for (int& item : v4) {
        cout << " " << item;
    }
    cout << endl;
    cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
    // 6. modify element
    v4[0] = 5;
    // 7. sort
    sort(v4.begin(), v4.end());
    // 8. add new element at the end of the vector
    v4.push_back(-1);
    // 9. delete the last element
    v4.pop_back();
}

*/



//                                          Problem-->Find Pivot Index
// My solution

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>P={0};
        int prefixSum=0;
        vector<int>::iterator it;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            P.push_back(prefixSum);
        }
        for(int i=0;i<P.size()-1;i++){
            if(P[i]==(P[P.size()-1]-P[i]-nums[i]))
                return i;
        }
        return -1;
    }
};
*/

// Another solution

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix_sum  =0;
        for(int i= 0; i < nums.size(); i++){
            prefix_sum += nums[i];
        }
        int left_sum =0; 
        int right_sum = prefix_sum ;
        for(int i= 0; i < nums.size(); i++){
            right_sum = right_sum - nums[i];
            if(left_sum == right_sum)
                return i;
            
            left_sum += nums[i];
        }
        return -1;
    }
};


*/

// Another solution

/*
class Solution{
    public:
long long int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
    
    long long int lsum=0;
    long long int rsum= sum;
    
    for(int i=0;i<nums.size();i++)
    {
        rsum = rsum-nums[i];
        
        if(lsum==rsum)
        {
            return i;
        }
        
        lsum +=nums[i]; 
    }
    return -1;
}
};

*/

// Optimized approach

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int num : nums) 
            total += num;
        int sum = 0;
        for (int i = 0; i < nums.size(); sum += nums[i++])
            if (sum * 2 == total - nums[i])
                return i;
        
        return -1;
    }
};
*/




