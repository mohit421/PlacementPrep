//                                          Date:- 31 Jan, 2022
//                                              Day1

/*
Problem---> 1672. Richest Customer Wealth

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer 
has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is 
the customer that has the maximum wealth.

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
Example 2:

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
Example 3:

Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17
 

Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100
*/


// Code

/*
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // int rows = sizeof(accounts)/sizeof(accounts[0]);
        int rows = accounts.size();
        int cols = accounts[0].size();
        int currSum = 0,prevSum=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                prevSum += accounts[i][j];
            }
            currSum = max(prevSum,currSum);
            prevSum=0;
        }
        return currSum;
    }
};

*/




// Using STL


/*
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for (auto &customer : accounts)
            richest = max (richest, accumulate(customer.begin(), customer.end(), 0));
        
        return richest;
    }
};

*/



/*

// 1.
std::array<std::array<int, 2>, 3> m = {{ {1, 2}, {3, 4}, {5, 6} }};

auto result = ranges::accumulate(ranges::join(m), 0); // flatten range then apply accumulate


//  2.
std::unique_ptr<int[][Column]> matrix (new int[Row][Column]);
long long total = 0;
for(int i=0; i < Row; i++){
total =  std::accumulate(std::begin(matrix[i]),std::end(matrix[i]),total);
}



The numeric header is part of the numeric library in C++ STL. This library consists of basic mathematical 
functions and types, as well as optimized numeric arrays and support for random number generation. Some 
of the functions in the numeric header:

- iota
- accumulate
- reduce
- inner_product
- partial_sum etc.

This article explains accumulate() and partial_sum() in the numeric header which can be used during competitive programming to save time and effort. 

1) accumulate(): This function returns the sum of all the values lying in a range between [first, last) with the variable sum. We usually find out the sum of elements in a particular range or a complete array using a linear operation which requires adding all the elements in the range one by one and storing it into some variable after each iteration.

Syntax:

accumulate(first, last, sum);
or

accumulate(first, last, sum, myfun); 
Parameters:

first, last: first and last elements of range whose elements are to be added
sum:  initial value of the sum
myfun: a function for performing any specific task. 


// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <numeric>
using namespace std;

// User defined function
int myfun(int x, int y)
{
	// for this example we have taken product
	// of adjacent numbers
	return x * y;
}

int main()
{
	// Initialize sum = 1
	int sum = 1;
	int a[] = { 5, 10, 15 };

	// Simple default accumulate function
	cout << "\nResult using accumulate: ";
	cout << accumulate(a, a + 3, sum);          // 31

	// Using accumulate function with
	// defined function
	cout << "\nResult using accumulate with"
			"user-defined function: ";
	cout << accumulate(a, a + 3, sum, myfun);           // 5*10*15--> 750

	// Using accumulate function with
	// pre-defined function
	cout << "\nResult using accumulate with "
			"pre-defined function: ";
	cout << accumulate(a, a + 3, sum, std::minus<int>());  -29

	return 0;
}

*/

