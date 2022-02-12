//                                          Date:-3 Feb,2022


// Problem 1:- Count Distinct Element

// non optimal approach 
// Time Complexity --> O(n^2)
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 10, 15, 12, 12, 12, 12, 12, 12, 12, 12, 12, 5, 4, 5};
    int length = sizeof(arr) / sizeof(int);
    int counter = 1;

    for (int i = 1; i < length; i++)
    {
        bool repeat = false;

        for (int j = 0; j < i; j++)

            if (arr[i] == arr[j])
            {
                repeat = true;
                break;
            }

        if (!repeat)
            counter++;
    }

    cout << counter;
}
*/

// Using Hashing 

/*
int countDistinct(int *a,int n){
    unordered_set<int> set;
    for(int element: a){
        set.insert(element);
    }
    return set.size();
}
*/

// 
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;
// int countDistinct(vector<int>&a,int n){
//     unordered_set<int> set;
//     for(auto element=a.begin();element!a.end();element++){
//         set.insert(*element);
//     }
//     return set.size();
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<countDistinct(arr,n);
//     return 0;
// }



// Problem 2:- Union of two unsorted array

