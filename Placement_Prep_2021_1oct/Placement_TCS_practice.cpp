//                                      1 Oct, 2021 
/*
1. Find Smallest Element in an Array 
In this program we will find the smallest element in the given unsorted array. We will initialize the starting element of array as smallest one and compare with all other elements of the given array and upadte the smallest value.

Sample Test Case

Enter the size of array : 6
Enter the elements of array : 2 0 8 44 6 17
Output
Smallest element of array : 0

/////////
// Algorithm
1. Start.
2. Declare an array of given size.
3. Initialize smallest to arr[0].
4. Traverse the entire array using for loop.
5. If arr[n] < smallest, update smallest to arr[n].
6. Once we reach the end of loop, display the current value of smallest.
7. End.
*/
// Code in c++


/*
#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int smallest = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }

    }
    cout<<smallest<<endl;
    return 0;
}

*/


/*
2. Problem : Program to check whether a number is even or odd
Here we will discuss how to check whether a number is even or odd in C++ programming language.

1. A number is even if it is divisible by 2
2. To check this we use if else statement along with the % (modulus) operator.
3. modulus operator returns remainder when first number is divided by second
4. If the condition is true i.e. number is divisible by 2 then the number is even
5. Otherwise the number is odd



Algorithm:-
1. Input a integer  number
2. check wether the number is divisible by 2
3. if yes, print “Even number”
4. if not, print “Odd number
*/

//C++ Program
// number is even or odd
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%2==0){
        cout<<n<<" is even number "<<endl;
    }
    else{
        cout<<n<<" is an odd number"<<endl;
    }


    return 0;
}
*/

                // Important Codes related to Arrays
/*
3 . Problem : Find Second Smallest Element in an Array :
Second Smallest Element
In this paragraph today we learn how to find second smallest element in an array with help of Python Programing concept.In Python it does not have arrays, but it has list with the help of using lists it is more easy and comfortable to work with in comparison to arrays.
For Example:
Input : list = [11, 15, 2, 4, 91, 10, 20, 16, 14]

Output :
Second Smallest element is: 4


*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     cout<<arr[1];
//     return 0;
// }

/*
4. Problem ->Find Largest element in an array using C++
In this program we will find the maximum element of the array using iterative approach. We will initialize the starting element of array as largest one and compare with all other elements of the given array and update the largest value.

Sample Test Case :

Enter size of array : 5
Enter elements of array : 52 24 12 36 95
Output
Largest element in array : 95
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}
*/

/*
5. Problem ->Find the Smallest and largest element in an array :
Here we will discuss how to find the smallest element and largest element from inputted One Dimensional Array 
Elements. In this array we traverse elements recursively and encounter the value of smallest element and largest
 element until the end of the array with the help of concept of C and For loop in the code.
The solution of this problem is given in C programming language


Implementation:-
1. Take the size of array from the user
2. Input the array elements from the user
3. Initialize small = large = arr[0]
4. Repeat from i = 1 to size of array
5. if(arr[i] > large)
6. large = arr[i]
7. if(arr[i] < small)
8. small = arr[i]
9. Print the element as smallest and largest

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int large,small;
    small = large = arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large = arr[i];
        }
        if(small>arr[i]){
            small = arr[i];
        }

    }
    cout<<small<<" "<<large<<endl;
    return 0;
}

*/

/*
Sum of Elements in an Array
Today we will learn how to find sum of elements in an array is easy task when you know how to iterate through array 
elements. In this problem we will explain you C approach to find sum of array elements inputted by the user.
Here is the solution of this query in C Language


Working:-
1. Input the size of array and store the value in m and arr[m].
2. To store sum of array elements, initialize a variable sum = 0.
3. To find sum of all elements, iterate through each element and add the current element to the sum.
4. Inside the loop add the current array element to sum i.e.sum = sum + arr[i] or sum += arr[i].
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum<<endl;
    return 0;

}*/

/*

6. Problem-> C Program to Reverse elements of an array

Learn how to reverse an array
Today, we will learn how to print the elements of the array in reverse order.That is:- The last element should be displayed first, followed by second last element and so on.
For Example:-
arr{1,2,3,4,5} is the array input by the user and the reverse order of it should be arr{5,4,3,2,1}

To answer this problem here in C programming language.

Algorithm:-
STEP 1: START
STEP 2: INITIALIZE a[100] and b[100]
STEP 3: Enter size of an array.
STEP 4: PRINT “Array Elements:”
STEP 5: REPEAT STEP 6 and STEP 7 UNTIL i=0
STEP 6: PRINT arr[p]
STEP 7: p=p+1
STEP 8: PRINT new line
STEP 9: PRINT “Array in reverse order”
STEP 10: SET p=length-1. REPEAT STEP 11 and STEP 12 UNTIL p>=0
STEP 11: PRINT a[p]
STEP 12: p=p-1
STEP 13: RETURN 0
STEP 14: END
*/

/*
#include<bits/stdc++.h>
using namespace std;
int reverseArr(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    reverseArr(arr,0,n-1);
    printArr(arr,n);
    return 0;

}

*/
// Using recursion 
/*
#include<bits/stdc++.h>
using namespace std;
int reverseArr(int arr[],int start,int end){
    if(start>=end){
        return -1;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArr(arr,start+1,end-1);
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr,0,n-1);
    printArr(arr,n);
    return 0;

}

*/


/*
6. Program->
Finding the frequency of elements in an array
In this paragraph, we will learn how to code in Python. Here we have an array of elements to count the frequency or occurrence of its each element entered by the user. One of the approaches to resolve this problem is to maintain one array to store the counts of each element of the array then iterate loop through the array and count the frequency of each element and store it in another array.

For example:
Enter the size of array: 5
Enter the elements:
2  3   31  2  3
The occurrence of 2 is 2
The occurrence of 3 is 2
The occurrence of 31 is 1


*/

/*
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	vector<bool> visited(n, false);
	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {
		// Skip this element if already processed
		if (visited[i] == true)
			continue;
		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}

int main()
{
    int n;
    cin>>n;
    
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	countFreq(arr, n);
	return 0;
}
*/

/*
Problem 7. Counting Distinct Elements in an Array 
*/
/*
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	vector<bool> visited(n, false);
	// Traverse through array elements and
	// count frequencies
	int count =0;
	for (int i = 0; i < n; i++) {
		// Skip this element if already processed
		if (visited[i] == true)
			continue;
		// Count frequency
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
			}
		}
		
	}
	for(int i=0;i<n;i++){
	    if(visited[i]==false){
	        count++;
	    }
	}
    cout<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	countFreq(arr, n);
	return 0;
}
*/

// Another way of above problem
/*
#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
	int res = 1;

	// Pick all elements one by one
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++){
			if (arr[i] == arr[j]){
				break;
			}
		}
		// If not printed earlier, then print it
		if (i == j){
			res++;
		}
	}
	return res;
}

// Driver program to test above function
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cout << countDistinct(arr, n);
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
	int res = 1;

	// Pick all elements one by one
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++){
			if (arr[i] == arr[j]){
				break;
			}
		}
		// If not printed earlier, then print it
		if (i == j){
			res++;
		}
	}
	return res;
}

// Driver program to test above function
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cout << countDistinct(arr, n);
	return 0;
}
*/

/*
// Using STL
#include <bits/stdc++.h>
using namespace std;
// function that accepts the array and it's size and returns
// the number of distince elements
int distinct(int* arr, int len)
{
	set<int> S; // declaring a set container using STL
	for (int i = 0; i < len; i++) {
		S.insert(arr[i]); // inserting all elements of the
						// array into set
	}
	int ans = S.size(); // calculating the size of the set
	return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	int dis_elements = distinct(arr, n); // calling the function on array
	cout << dis_elements << endl;
	return 0;
}
*/

/*
8. Problem ->Finding  Repeating elements in an Array :
*/

/*
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	vector<bool> visited(n, false);
	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {
		// Skip this element if already processed
		if (visited[i] == true)
			continue;
		// Count frequency
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
			}
		}
	}
	for(int i=0;i<n;i++){
	    if(visited[i]==true){
	        cout<<arr[i]<<" ";
	    }
	}
	cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	countFreq(arr, n);
	return 0;
}

*/


// Another way of above question 

/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s; // declare size of array
    
    cout << “Enter size of array :” << endl;
    
    cin >> s;
    
    int arr[s]; // declare array
    
    cout << “Enter elements of array :” << endl;
    
    for(int i=0; i<s; i++)  // input elements of an array
    {
        cin >> arr[i];
    }
    
    cout << “Duplicate elements are :” << endl;
    
    for(int i=0; i<s–1; i++) // loop to traverse array
    {
        for(int j=i+1; j<s; j++) // loop to compare elements 
        {
            if(arr[i]==arr[j] && i!=j) // compare duplicates when i not equals j
              cout << arr[i] << ” “;
        }
    }
    
    return 0;
}

*/


/*

// 9. Problem -> Finding Non Repeating elements in an Array 
//                     or
// 10. Problem -> Removing Duplicate elements from an array

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	vector<bool> visited(n, false);
	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {
		// Skip this element if already processed
		if (visited[i] == true)
			continue;
		// Count frequency
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
			}
		}
	}
	for(int i=0;i<n;i++){
	    if(visited[i]==false){
	        cout<<arr[i]<<" ";
	    }
	}
	cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	countFreq(arr, n);
	return 0;
}

*/


// Another Way of doing above question 

/*
#include<iostream>
using namespace std;

// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(int arr[], int n)
{
	// Return, if array is empty
	// or contains a single element
	if (n==0 || n==1)
		return n;

	int temp[n];
	// Start traversing elements
	int j = 0;
	for (int i=0; i<n-1; i++)
		// If current element is not equal
		// to next element then store that
		// current element
		if (arr[i] != arr[i+1])
			temp[j++] = arr[i];

	// Store the last element as whether
	// it is unique or repeated, it hasn't
	// stored previously
	temp[j++] = arr[n-1];

	// Modify original array
	for (int i=0; i<j; i++)
		arr[i] = temp[i];

	return j;
}

// Driver code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	// removeDuplicates() returns new size of array.
	n = removeDuplicates(arr, n);

	// Print updated array
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
}

*/

/*
11. Problem-> Finding Minimum scalar product of two vectors


Example : Vector 1 – 2 3 1 4, Vector 2- 3 7 1 9
Sort Vector 1 in ascending order 1 2 3 4
Sort Vector 2 in descending order 9 7 3 1
Multiply the same index elements in both vectors -1*9+2*7+3*3+4*1=36
Minimum scalar product of two vectors=36
*/
/*
1. Using default inner_product : 
Syntax: 
 

Template :
T inner_product (InputIterator1 first1, InputIterator1 last1,
                 InputIterator2 first2, T init);

Parameters :

first1, last1
Input iterators to the initial and final positions in the first
sequence.

first2
Input iterator to the initial position in the second sequence.
The range starts at first2 and has as many elements as the range
above [first1, last1].

init
Initial value for the accumulator.

Neither operations shall modify any of the elements passed as
its arguments.

Return Type :
The result of accumulating init and the products of all the pairs
of elements in the ranges starting at first1 and first2.
*/
/*
#include<bits/stdc++.h>
using namespace std;

int miniProd(vector<int> a,vector<int> b,int n){
	int res = 0;
	if(n!=0){
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		// reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
	}
	return res = inner_product(a.begin(),a.end(),b.begin(),0);
}
int main(){
	int n;
	cin>>n;
	vector<int> arrA(n),arrB(n);
	for(int i=0;i<n;i++){
		cin>>arrA[i];
	}
	for(int i=0;i<n;i++){
		cin>>arrB[i];
	}
	cout<<miniProd(arrA,arrB,n)<<endl;
	return 0;
}

*/

/*
12. Problem-> Program to Find Maximum Scalar Product of Two Vectors in an Array

Scalar product of two vectors is also known as the dot product. Dot product is an algebraic expression which 
takes two equal sized vectors and returns a single scalar.

Lets say we have two arrays arr1 [1,3,4,2] and arr2 [2,4,3,5] , for finding the maximum scalar product of arrays
 we need to multiply the minimum value of arr1 to the minimum value of arr2 and add all these multiplied value. 
 So, here we need to sort both the array 1 and array 2 in ascending order i.e.we get arr1 [1,2,3,4] and arr2 
 [2,3,4,5]

Maximum dot product =  1*2 + 2*3 + 3*4 + 4*5  =  40
*/
/*
#include<bits/stdc++.h>
using namespace std;
int maxProd(vector<int> a,vector<int> b,int n){
	int res = 0;
	if(n!=0){
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
	}
	return inner_product(begin(a),end(a),begin(b),0);

}
int main(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	cout<<maxProd(a,b,n)<<endl;
	return 0;
}

*/

/*

program to count numbers of even and odd elements in an array

*/

/*
#include<bits/stdc++.h>
using namespace std;

vector<int> countEvenOdd(vector<int> arr,int n)
{
	int countEven = 0,countOdd= 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			countEven++;
		}
		else{
			countOdd++;
		}
	}
	cout<<countEven<<" \n"<<countOdd<<endl;
	// return {countEven,countOdd};
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	countEvenOdd(arr,n);

	return 0;
}



*/





/*
13. Problem-> program for finding the maximum product of sub-array of a given array

Program to find the maximum product sub array in a given array is discussed here. Given an array of integers 
as input, the task is to find the sub array from the given input array whose product is maximum.

Example
Input: {-1, -3, -10, 60,0}

Output: 1800

Sub-array : {-3, -10, 60}

Product of the sub-array = -3 * -10 * 60 = 1800
*/

/*
#include<bits/stdc++.h>
using namespace std;

int maxSubArrProd(vector<int> arr,int n){
	int res = arr[0];
	for(int i=0;i<n;i++){
		int mult = arr[i];
		for(int j=i+1;j<n;j++){
			res = max(res,mult);
			mult *= arr[j];
			
		}
		res =  max(res,mult);
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxSubArrProd(arr,n);
	return 0;
}


// Time complexity :- O(n^2);
*/
/*
Efficienet Approach:-
Time complexity:- O(N)
*/
/*
#include<bits/stdc++.h>
using namespace std;
int maxSubArrProd(vector<int> arr,int n){
	int min_ending_index = 1;
	int max_ending_index = 1;
	int max_so_far = 0;
	int flag = 0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			max_ending_index = max_ending_index*arr[i];
			min_ending_index = min(min_ending_index*arr[i],1);
			flag=1;
		}
		else if(arr[i]==0){
			max_ending_index = 1;
			min_ending_index = 1;
		}
		else{
			int temp = max_ending_index;
			max_ending_index = max(min_ending_index*arr[i],1);
			min_ending_index = temp*arr[i];
		}
		if(max_so_far<max_ending_index){
			max_sor_far = max_ending_index;
		}
		
	}
	if(flag==0 && max_so_far==0){
		return 0;
	}
	return max_so_far;

}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxSubArrProd(arr,n);
	return 0;
}
*/

/*
14. Problem-> Array is disjoint or not
Here is the program to determine that the array is disjoint or not which is discussed here. Two arrays are 
known to be disjoint when they have non repeating elements in both the arrays

Example
arr1 = {1,2,3,4,5}

arr2 = {6,7,8,9}

arr1 & arr2 are disjoint

arr3 = {1,2,3,4,5} arr4 = {4,5,6,7}
aar3 & arr4 are not disjoint as they have 4,5 are repeating elements
*/
/*
#include<bits/stdc++.h>
using namespace std;


int disjoint_set(int arrA[],int arrB[],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			if(arrA[i]==arrB[j])
			{
				return -1;
			}
		}

	}
	return 1;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arrA[n],arrB[m];
	for(int i=0;i<n;i++){
		cin>>arrA[i];
	}
	for(int j=0;j<m;j++){
		cin>>arrB[j];
	}
	cout<<disjoint_set(arrA,arrB,n,m);
	return 0;
}
*/

/*
15. Problem-> Determine Array is a subset of another array or not 
*/
/*
Time Complexity:- O(N^M)

#include<bits/stdc++.h>
using namespace std;

int subSet(int arrA[],int arrB[],int m,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arrA[i]==arrB[j]){
				break;
			}
			if(j==m){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int n;
	int m;
	cin>>n>>m;
	int arrA[n], arrB[m];
	for(int i=0;i<n;i++){
		cin>>arrA[i];
	}
	for(int j=0;j<m;j++){
		cin>>arrB[j];
	}
	cout<< subSet(arrA,arrB,m,n);
	return 0;
}

*/
/*
Time Complexity:- O(m+n)
*/

/*
#include<bits/stdc++.h>
using namespace std;

int subsetArr(int arrA[],int arrB[],int n,int m){
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arrA[i]);
	}
	int p = s.size();
	for(int j=0;j<m;j++){
		s.insert(arrB[j]);
	}
	if(s.size()==p){
		return 1;
	}
	return -1;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arrA[n],arrB[m];
	for(int i=0;i<n;i++){
		cin>>arrA[i];
	}
	for(int j=0;j<m;j++){
		cin>>arrB[j];
	}
	cout<<subsetArr(arrA,arrB,n,m)<<endl;
	return 0;
}
*/


/*
16. Problem-> Check if all the numbers of array can be made equal
Let take an array arr[]. We need to check if all the numbers of an array can be  made equal to a particular number.
 In a single operation, any element of the array can be either multiplied by 2 or by 3. If it’s possible to make 
 all the array elements equal with the given operation then print Yes else print No.

Example:
 Input: 3

50 75 100

Output: Yes ->{50 * 2 * 3, 75 * 2 * 2, 100 * 3} = {300, 300, 300}

Input: 2

10 14

Output:no
*/

/*
#include<bits/stdc++.h>
using namespace std;

bool isequalArr(int arr[],int n){
	for(int i=0;i<n;i++){
		while(arr[i]%2==0){
			arr[i] /=2;
		}
		while(arr[i]%3==0){
			arr[i] /=3;
		}
		if(arr[i] != arr[0]){
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<isequalArr(arr,n);
	return 0;
}

*/


/*
17 .Problem-> Sum of minimum absolute difference
Program to find the sum of minimum absolute difference of the array is discussed here. An array of distinct 
elements is given as input and the sum of minimum absolute difference of each array element has to be found.

Example:
arr = {2, 3, 9, 5, 6}

choose optimal solution = 3

output = 12

*/

/*
#include<bits/stdc++.h>
using namespace std;


int absDiff(int arr[],int n){
	sort(arr,arr+n);

	int sum =0;
	sum += abs(arr[0] - arr[1]);
	sum += abs(arr[n-1] - arr[n-2]);
	for(int i=1;i<n-1;i++){
		sum += min(abs(arr[i] - arr[i-1]),abs(arr[i] - arr[i+1]));
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<absDiff(arr,n);

}

*/
/*
18. Problem -> left-rotation of an array using vector in c++
*/
/*
#include<bits/stdc++.h>
using namespace std;

int leftRotate(vector<int>& vec, int n,int d){
	for(int i=0;i<d;i++){
		vec.push_back(vec[0]);
		vec.erase(vec.begin());
	}
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
}
int main(){
	int n,d;
	cin>>n>>d;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	leftRotate(vec,n,d);
	return 0;
}
*/
/*
Left Rotation of an array in c++ using STL
*/
/*
#include<bits/stdc++.h>
using namespace std;
int leftRotate(int arr[],int n,int d){
	rotate(arr,arr+(d%n),arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	leftRotate(arr,n,d);
	return 0;
}
*/

/*
19. Problem-> Finding Circular rotation of an array
*/
/*
#include<bits/stdc++.h>
using namespace std;

int cycRotateByK(int arr[],int n){
	int temp = arr[n-1];
	for(int i=n-1;i>0;i--){
		arr[i] = arr[i-1];
		
	}
	arr[0] = temp;
	
}
int cycRotate(int arr[],int n,int d)
{
	for(int i=0;i<d;i++){
		cycRotateByK(arr,n);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cycRotate(arr,n,d);
	return 0;
}

*/
					
							// TCS Ninja Toppers Test Coding Questions
						
// Question 1
/*
Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically 
rotate the array clockwise by K.						

Note : Keep the first of the array unaltered.

 

Example 1:

5  —Value of N
{10, 20, 30, 40, 50}  —Element of Arr[ ]
2  —–Value of K
Output :

40 50 10 20 30

Example 2:

4  —Value of N
{10, 20, 30, 40}  —Element of Arr[]
1  —–Value of K
Output :

40 10 20 30

*/


// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         void leftRotateByOne(int arr[],int n){
//             int temp = arr[0],i;
//             for(int i=0;i<n-1;i++){
//                 arr[i] = arr[i+1];
//             }
//             arr[n-1] = temp;
//         }
//         void leftRotate(int arr[],int d,int n){
//             for(int i=0;i<d;i++){
//             leftRotateByOne(arr,n);
//             }
//         }
//         void Print(int arr[],int n){
//             for(int i=0;i<n;i++){
//                 cout<<arr[i]<<" ";
//             }
//         }
// };

// int main()
// {
//     int n,d;
//     cin>>n;
//     cin>>d;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Solution ob;
//     ob.leftRotate(arr,d,n);
//     ob.Print(arr,n);
//     return 0;
// }


/*
						Operations on Strings

*/
/*
1. Problem -> C++ program for calculating the length of string without using length() function
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int len=0;
	for(int i=0;str[i]!='\0';i++){
		len++;
	}
	cout<<len<<endl;
	return 0;
}
*/

/*
2. Problem-> Using strlen() to find string length
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	cout<<strlen(str.c_str())<<endl;
	cout<<str.length()<<endl;
	cout<<str.size()<<endl;
	return 0;
}
*/
/*
3. Problem -> Counting the number of vowels in a string.
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int vowels=0;
	string str;
	getline(cin,str);
	for(int i=0;str[i];i++){
		if(str[i]=='a' || str[i]=='e' || str[i] == 'i' || str[i]=='o' || str[i]=='u' || str[i] == 'A' || str[i]=='E' || str[i] == 'I' || str[i]=='O' || str[i]=='U'){
			vowels++;
		}
	}
	cout<<vowels<<endl;
	return 0;
}
*/
/*
4. Problem-> Remove the vowels from a String 
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	for(int i=0;str[i];i++){
		if(str[i]=='a' || str[i]=='e' || str[i] == 'i' || str[i]=='o' || str[i]=='u' || str[i] == 'A' || str[i]=='E' || str[i] == 'I' || str[i]=='O' || str[i]=='U'){
			continue;
		}
		cout<<str[i]<<"";
	}

	return 0;
}

*/



/*
5. problem -> Toggling each character in a string.
In this article we will learn how to write a C++ program to toggle each character in a string. Toggling characters 
means to convert lower case characters to upper case characters and upper case characters to lower case 
characters. This can be simply achieved by using ASCII values as there is a difference of 32 between lower case and
 upper case alphabets ASCII values.

 */
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	for(int i=0;str[i] !='\0';i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] += 32;
		}
		else if(str[i]>='a' && str[i]<='z'){
			str[i] -=32;
		}
	}
	cout<<str<<endl;
	return 0;
}
*/

/*
6. Problem->  Check if the given string is Palindrome or not 
*/
/*
#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s){
	string P = s;
	reverse(P.begin(),P.end());
	if(s==P){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
int main(){
	string s;
	getline(cin,s);
	isPalindrome(s);
	return 0;
}
*/


/*
7. Problem-> Print the given string in reverse order
*/
/*
#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
	string P = s;
	reverse(P.begin(),P.end());
	cout<<P<<endl;
}
int main(){
	string s;
	getline(cin,s);
	reverse(s);
	return 0;
}
*/
/*
8.Problem-> Remove all characters from string except alphabets
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int len = str.size();
	for(int i=0;i<len;i++){
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
			cout<<str[i]<<"";;
		}
		continue;
	}
	return 0;
}
*/

/*
9. Problem-> Remove spaces from a string 
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int len = str.size();
	for(int i=0;i<len;i++){
		if(str[i] ==' '){
			continue;
		}
		cout<<str[i]<<"";
	}
	return 0;
}
*/
/*
10. Problem->  Remove brackets from an algebraic expression
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int len = str.size();
	for(int i=0;i<len;i++){
		if(str[i] =='(' || str[i] ==')'){
			continue;
		}
		cout<<str[i]<<"";
	}
	return 0;
}
*/

/*
11. Problem -> Count the sum of numbers in a string
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	int num = 0,sum =0;
	int len = S.size();
	for(int i=0;i<len;i++){
		if(S[i]>='0' && S[i]<='9'){
			num = 10*num + (S[i] - '0');
		}
		else{
			sum += num;
			num=0;
		}
	}
	cout<<sum+num;
	return 0;
}
*/
/*
// Another way of above question 


#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	string temp ="";
	int sum = 0;
	for(char ch:str){
		if(isdigit(ch)){
			temp += ch;
		}
		else{
			sum += atoi(temp.c_str());
			temp ="";
		}

	}
	cout<<sum + atoi(temp.c_str());
	return 0;
}

*/
/*
12. Problem-> Capitalize the first and last character of each word of a string
/*
#include<bits/stdc++.h>
using namespace std;
int main()

{
	string str;
	getline(cin,str);
	int len = str.size();
	for(int i=0;str[i]!='\0';i++){
		if(i==0 || i==(len-1)){
			str[i] = toupper(str[i]);
		}
		else if(str[i]==' '){
			str[i-1] = toupper(str[i-1]);
			str[i+1] = toupper(str[i+1]);
		}
	}
	cout<<str;
	return 0;
}

*/

/*
13. problem ->C++ program to calculate frequency of characters in a string
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int freq[256] = {0};
	for(int i=0;str[i] != '\0';i++)
	{
		freq[str[i]]++;
	}
	for(int i=0;i<256;i++){
		if(freq[i] != 0)
			cout<<char(i)<<" "<<freq[i]<<endl;
	}
	return 0;
}
*/

/*
14. Problem-> Finding non repeating characters in a string.
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int freq[256] = {0};
	for(int i=0;i<str.size();i++){
		if(str[i]!=' ')
			freq[str[i]]++;
	}
	char ch = ' ';
	for(int i=0;i<str.size();i++){
		if(freq[str[i]]==1){
			ch = str[i];
			cout<<ch<<" ";
		}
	}
	return 0;
}
*/

/*
// above question code 

#include<iostream>
#include <cstring>
using namespace std;
main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int in,len=0,i;
    for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
    int arr[256]={0};
    for(i=0;i<len;i++)
    {
        if(str[i]!=' ')
        arr[str[i]]++;
    }
     char ch=' ';
    cout<<"All Non-repeating character in a given string is:";
   for(i=0;i<len;i++)
    {
        if(arr[str[i]]==1){
            ch=str[i];
             cout<<ch<<" ";
        }
    }
}

*/

/*
15. Problem-> Checking if two strings are anagram or not?
In this article we will learn how to code a C++ program to check if two strings are anagram or not. If two strings 
have same frequency of  characters and only the order of characters is different then such strings are said to be 
anagram. So to check if the strings are anagram or not we will take both the string as input then we will count the 
frequency of characters presents in both string. we will use while loop to count the frequency of characters. Then 
if  the frequency of both string matches then they are anagram.


#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1,string str2){
	int n1 = str1.size();
	int n2 = str2.size();
	if(n1 != n2){
		return false;
	}
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	for(int i=0;i<n2;i++){
		if(str1[i]==str2[i]){
			return true;
		}
	}
	return false;
}
int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	cout<<isAnagram(str1,str2);
	return 0;
}

*/

/*

1. Problem ->Program to find the GCD or HCF of two numbers

Here we will discuss how to find the GCD or HCF of two numbers entered by the user using C++ programming language.

GCD i.e. Greatest Common Divisible or HCF i.e. Highest Common Factor of two numbers is the largest positive integer 
that can divide both the numbers

There are many methods to calculate GCD:

1. Using Prime Factorisation,
2. Euclid’s Algorithm,
3. Lehmer’s GCD algorithm, etc

Here we will use Euclid’s Algorithm to find the GCD, which is based on the idea that the GCD doesn’t change when 
smaller number is subtracted from the greater number. This keeps on going until only the GCD left.

*/
/*
#include<bits/stdc++.h>
using namespace std;

int gcdOfNum(int num1,int num2){
	if(num1==0){
		return num2;
	}
	else if(num2==0){
		return num1;
	}
	else if(num1 == num2){
		return num1;
	}
	else if(num1>num2){
		return gcdOfNum(num1-num2,num2);
	}
	return gcdOfNum(num1,num2-num1);
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<gcdOfNum(num1,num2);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

int gcdOf2Num(int a,int b){
	if(a==0){
		return b;
	}
	return gcdOf2Num(b%a,a);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcdOf2Num(a,b);
	return 0;
}
*/

/*
2. Problem -> Program to find the LCM of two numbers
Here we will discuss how to find the LCM of two numbers entered by the user in c++ programming language.

LCM, or least common multiple in mathematics,of two numbers is the smallest positive integer that is divisible by 
both the numbers.

For a reference let’s find LCM of 6 and 7

Multiples of 6 are 6, 12, 18, 24, 30, 36, 42, 48…
Multiples of 7 are 7, 14, 21, 28, 35, 42, 47, 54…
As we can see the lowest or least common multiple of 6 and 7 is 42

There are many approaches to find the LCM of two numbers like recursion, loops, etc. Here we are using the recursion 
method
*/




/*
												TCS Digital 2021
												Day 1 Slot 1
												Question 1

*/
/*
Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

Note : Keep the first of the array unaltered.
Example 1:

5  —Value of N
{10, 20, 30, 40, 50}  —Element of Arr[ ]
2  —–Value of K

Output :
40 50 10 20 30

Example 2:

4  —Value of N
{10, 20, 30, 40}  —Element of Arr[]
1  —–Value of K
 
Output :
40 10 20 30
*/

/*
#include<bits/stdc++.h>
using namespace std;

vector<int>rotateArr(vector<int> arr,int n,int k){
	if(n<k){
		k =k%n;
	}
	vector<int> ans(n);
	for(int i=0;i<k;i++){
		ans[i] = arr[n-k+i];
	}
	int index = 0;
	for(int i=k;i<n;i++){
		ans[i] = arr[index++];
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	vector<int>ans = rotateArr(arr,n,k);
	for(int i=0;i<n;++i){
		cout<<ans[i] <<" ";
	}
	return 0;
}

*/

/*
												Day 1 Slot 1
												Question 2

Problem Description -:  Given two non-negative integers n1 and n2, where n1<n2. The task is to find the total 
number of integers in the range [n1, n2](both inclusive) which have no repeated digits.
 
For example:
Suppose n1=11 and n2=15.

There is the number 11, which has repeated digits, but 12, 13, 14 and 15 have no repeated digits. So, the output is 
4.
Example1:

Input:
11 — Vlaue of n1
15 — value of n2

Output:
4
 
Example 2:
Input:
101 — value of n1
200 — value of n2

Output:
72
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int count =0;
	for(int i=n1;i<=n2;i++){
		int num = i;
		vector<bool> visited;
		visited.assign(10,false);
		while(num>0){
			if(visited[num%10]==true)
				break;
			visited[num%10] = true;
			num /=10;
		}
		if(num == 0){
			count++;
		}
		
	}
	cout<< count;
	return 0;

}
*/

/*
Question 3
Problem Description -:  In this 3 Palindrome, Given an input string word, split the string into exactly 3 
palindromic substrings. Working from left to right, choose the smallest split for the first substring that 
still allows the remaining word to be split into 2 palindromes.

Similarly, choose the smallest second palindromic substring that leaves a third palindromic substring.

If there is no way to split the word into exactly three palindromic substrings, print “Impossible” (without quotes). 
very character of the string needs to be consumed.

Cases not allowed –

After finding 3 palindromes using above instructions, if any character of the original string remains unconsumed.
No character may be shared in forming 3 palindromes.
Constraints

1 <= the length of input sting <= 1000
Input

First line contains the input string consisting of characters between [a-z].
Output

Print 3 substrings one on each line.
Time Limit
1

Examples
Example 1
Input
nayannamantenet

Output
nayan
naman
tenet

Explanation

The original string can be split into 3 palindromes as mentioned in the output.
However, if the input was nayanamantenet, then the answer would be “Impossible”.
Example 2
Input
aaaaa

Output
a
a
aaa

Explanation
The other ways to split the given string into 3 palindromes are as follows –
[a, aaa, a], [aaa, a, a], [aa, aa, a], etc.
Since we want to minimize the length of the first palindromic substring using left to right processing, the correct 
way to split is [a, a, aaa].
Example 3
Input
aaaabaaaa

Output
a
aaabaaa
a

Explanation
The other ways to split the given string into 3 palindromes are as follows –
[aaaa, b, aaaa], [aa, aabaa, aa], etc.
Since we want to minimize the length of the first palindromic substring using left to right processing, the correct
 way to split is [a, aaabaaa, a].
*/
/*

#include<bits/stdc++.h>
typedef long long int lld;
#define mod 1000000007
using namespace std;
bool palindrome(string s)
{
    if(s.length()==1) 
		return true;
    string s1=s;
	reverse(s1.begin(),s1.end());
    return (s1==s);
}
int main()
{
    string s,s1,s2,s3;
    cin>>s;
    int l=s.length();
    for(int i=1;i<l-1;i++)
    {
        s1=s.substr(0,i);
        if(palindrome(s1))
            for(int j=1;j<l-i;j++)
        	{
            	s2=s.substr(i,j);s3=s.substr(i+j,l-i-j);
            	if(palindrome(s2)&&palindrome(s3))
            	{
            	    cout<<s1<<endl<<s2<<endl<<s3;return 0;
            	}
        	}
    }
    cout<<"Impossible";
    return 0;
}
*/