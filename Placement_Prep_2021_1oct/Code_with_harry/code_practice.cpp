//****************************************************************************************************
//*********************    Data Structure & algorithm implementation in c++ language   ***************
//****************************************************************************************************
//**************************************   Day 1   ***************************************************
//*******    Implementing Array as an Abstract Data Type in C++ Language   ***************************
/*
                                    Code
*/

//************************   Using Structure  *****************************************
// #include<iostream>
// using namespace std;

// typedef struct MyArray{
//     int total_size;
//     int used_size;
//     int *ptr;
// }Node;
// void createArray(Node *a,int tsize, int usize){
//     a->total_size = tsize;
//     a->used_size = usize;
//     a->ptr = new int(tsize);

// }
// void setArray(Node * a){
//     int n;
//     for(int i=0;i<a->used_size;i++){
//         cout<<"Enter Element  "<<i<<" ";
//         cin>>n;
//         a->ptr[i]=n;
//     }

// }
// void getArray(Node *a){
//     for(int i=0;i<a->used_size;i++){
//         cout<<a->ptr[i]<<endl;
//     }
// }

// int main(){
//     Node  marks; 
//     createArray(&marks,10,2);
//     setArray(&marks);
//     getArray(&marks);
//     return 0;

// }


//***************************************************************************************************
//*****************************  Using Class  (later )**********************************************

// #include<iostream>
// using namespace std;
// class MyArray{
//     public:
//         int total_size;
//         int used_size;
//         int *ptr;
//     void createArray(int * a,int tsize, int usize){
//         total_size = tsize;
//         used_size = usize;
        
//     }
// };
// int main(){
//     MyArray marks;

// }

//***************************************************************************************************
//**************************************   Day 2   ***************************************************
//****** Coding Insertion Operation in Array in Data Structures in C++ language   ********************
/*
                                    Code
*/
// #include<iostream>
// using namespace std;

// void display(int arr[],int size){
//     //code for traversal
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int indInsert(int arr[],int size,int capacity,int index, int element){
    //code of insertion
//     if(size>=capacity){
//         return -1;
//     }
//     for(int i=size-1;i>=index;i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// }
// int main(){
//     int arr[100] = {12,13,17,3,2};
//     int size=5, element= 44,index = 3;
//     display(arr,size);
//     indInsert(arr,size,100,index,element);
//     size += 1;
//     display(arr,size);
// }



//****************************************************************************************************
//**************************************   Day 3   ***************************************************
//****** Coding Deletion Operation in Array in Data Structures in C++ language   *********************
/*
                                    Code
*/


// #include<iostream>
// using namespace std;
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int indDeletion(int marks[],int size ,int index){
//     //code of deletion
//     for(int i=index;i<size-1;i++){
//         marks[i]=marks[i+1];
//     }
    
// }
// int main(){
//     int marks[100]= {12,15,11,1,56};
//     int size=5,element= 89,index=3;
//     display(marks,size);
//     indDeletion(marks, size,index);
//     size -= 1;
//     display(marks,size);
// }




//****************************************************************************************************
//**************************************   Day 4   ***************************************************
//****** Coding Binary and linear search in Data Structures in C++ language   ************************
/*
                                    Code
*/
//************************************ Linear search   ***********************************************
// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int element,int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {10,23,4,5,2,1,123,998};
//     int element = 9994;
//     int size = sizeof(arr)/sizeof(int);
//     int searchIndex = linearSearch(arr,element,size);
//     cout<<"Element found at index "<<searchIndex<<endl;
//     return 0;
// }



//*********************************************************************************************************
//********************************* Binary Search     *****************************************************
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int element,int size){
//     int low=0;
//     int high=size-1;
//     while(low<=high){
//     int mid = (low+high)/2;
//     if(arr[mid]==element){
//         return mid;
//     }
//     if(arr[mid]>element){
//         high = mid-1;
//     }
//     else{
//         low = mid+1;
//     }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,4,5,6,8,9,11,112,144};
//     int size= sizeof(arr)/sizeof(int);
//     int element = 112;
//     int search = binarySearch(arr,element,size);
//     cout<<"Element "<<element<< " found at index "<<search<<endl;
//     return 0;
// }




//******************************************************************************************
//***********************   GeeksforGeeks practice Question     ****************************
//******************************************************************************************      
//*****************************  Day 5      ************************************************      

//**************** Print Alternate element of an array *************************************

// #include<bits/stdc++.h>
// using namespace std;

// void print(int ar[], int n)
// {
//     for(int i=0;i<n;i++){

//         if(i%2==0){
//             cout<<ar[i]<<" ";
//         }
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int ar[100001]={0};
//         int n;
//         cin>>n;
//         for(int i=0;i<n;i++)
//             cin>>ar[i];
//             print(ar,n);
//             cout<<endl;    
//     }
//     return 0;
// }



//***********************************************************************************************
//***********************************************************************************************
//***********************************************************************************************
//***************************** Value equal to index value    ***********************************


/*
                                code
*/


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> valueEqualToIndex(int arr[],int n){
//             vector<int> new_arr;
//             for(int i=0;i<n;i++){
//                 if(arr[i]==i+1){
//                     new_arr.push_back(arr[i]);
//                 }
//             }
//             return new_arr;
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         auto ans = ob.valueEqualToIndex(arr,n);
//         if(ans.empty()){
//             cout<<"Not Found";
//         }
//         else{
//             for(int x: ans){
//                 cout<<x<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;                                                              // check this program one more time                            
// }





//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 6   *********************************************
//*****************************      Sum of Array             ***********************************


/*
                                code
*/


// #include<bits/stdc++.h>
// using namespace std;
// class sumArray{
//     public:
//         int sum(int arr[],int n){
//         int s=0;
//         for(int i=0;i<n;i++){
//             s += arr[i];
//         }
//         return s;
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sumArray sum_arr;
//         int ans= sum_arr.sum(arr,n);
//         cout<<ans<<endl;
//     }
//     return 0;
// }


//*****************************      Sum of Array             ***********************************


/*
                                code
*/



// #include<bits/stdc++.h>
// using namespace std;
// class printArray{
//     public:
//         int print(int arr[],int n){
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         printArray p;
//         p.print(arr,n);
//         cout<<"\n";
        
//     }
//     return 0;
// }




//later add some question here


//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 7   *********************************************
//*****************************      Find Index               ***********************************


/*
                                code
*/
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;


// class findIndex{
//     public:
//     vector<int> Index(int a[], int key, int n){
//         vector<int> m;
//         start = -1;
//         end=-1;
//         for(int i=0;i<n;i++){
//             if(a[i]==key){
//                 start = i;
//                 break;
//             }
//         }
//         for(int i=n-1;i>start;i++){
//             if(a[i]==key){
//                 end=i;
//                 break;
//             }
//         }
//         if(start>-1 && end==-1){
//             end=start;
//         }
//         m.push_back(start);
//         m.push_back(end);
//         return m;
//     }
    
        
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> res;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int key;
//         cin>>key;
//         findIndex ob;
//         res = ob.Index(arr,key,n);
//         for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//         cout<<endl;
//         }
        

//     }
//     return 0;
// }



//*****************************    Smaller and Larger             ***********************************


/*
                                code
*/

// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// class solution{
//     public:
//         vector<int> getMoreAndLess(int arr[],int n, int x){
//             vector<int> s={0,0};

//             for(int i=0;i<n;i++){
//                 if(arr[i]<=x){
//                     s[0] +=1;

//                 }
//                 if(arr[i]>=x){
//                     s[1] +=1;
//                 }
//             }
//             return s;
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     While(t--){
//         int n,x;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         solution ob;
//         auto ans = ob.getMoreAndLess(arr,n, x);
//         cout<<ans[0]<<" "<<ans[1]<<endl;
//     }
//     return 0;
// }


//************************************same above question(again do) **************************
// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// class smallLarge{
//     public:
//     vector<int> LargeAndSmall(int arr[],int n, int x){
//         vector<int> s={0,0};
//         int larger=0, smaller = 0;
//         for(int i=0;i<n;i++){
//             if(arr[i]<=x){
//                 s[0] +=1;
//             }
//             if(arr[i]>=x){
//                 s[1] +=1;
//             }
//         }
//         return s;
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         smallLarge SL;
//         auto ans = SL.LargeAndSmall(arr,n,x);
//         cout<<ans[0] <<" "<<ans[1]<<endl;
//     }
//     return 0;
// }



//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 8   *********************************************
//*****************************                   ***********************************


/*
                             No code for today just take rest and watch movie .....
*/


//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 9   *********************************************
//*************************    Print the left element           *********************************


/*
                                code
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int leftElement(int arr[],int n){
//             sort(arr,arr+n);
//             if(n%2==0){
//                 return arr[n/2-1];
//             }
//             return arr[n/2];
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution s;
//         cout<<s.leftElement(arr, n)<<endl;
//     }
//     return 0;

// }

//***********************************************************************************************
//*************************            Second largest           *********************************


/*
                                code
*/


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int secondLargest(int arr[],int n){
//             sort(arr,arr+n);
//             int i=n-2;
//             while(arr[n-1]==arr[i] && i>=0){
//                 i--;
//             }
//             if(i<0){
//                 return -1;
//             }
//             return arr[i];
//         }
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution s;
//         cout<<s.secondLargest(arr, n)<<endl;
//     }
//     return 0;

// }




//***********************************************************************************************
//*************************            Perfect Array            *********************************


/*
                                code
*/

//**********************             using While loop  *****************************************

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         bool isperfectArray(int a[],int n){
//             int start =0, end = n-1;
//             while(start<end){
//                 if(a[start]==a[end]){
//                     start++;
//                     end--;
//                 }
//                 else{
//                     return 0;
//                 }
//             }
//             return 1;
//         }
// };


// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         if(ob.isperfectArray(arr,n)){
//             cout<<"Perfect\n";
//         }
//         else{
//         cout<<"Not Perfect\n";
//         }
//     }
//     return 0;
// }


//**************************** Using For loop   ****************************************


//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 10   *********************************************
//*************************         Left rotate--> Hackerrank            *****************************


/*
                                code
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



//***********************************************************************************************
//*************************      Swap kth elements                  *****************************


/*
                                code
*/

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         void swapKth(int *arr,int k,int n){
//             int temp = arr[k-1];
//             arr[k-1] = arr[n-k];
//             arr[n-k] = temp;
//         }
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         ob.swapKth(arr,k,n);
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }






//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 11   *********************************************
//*************************         Binary Search---> gfg           *****************************


/*
                                code
*/



// #include<iostream>
// using namespace std;

// class Solution{
//     public:
//         int BinarySearch(int arr[],int k, int n){
//             int low = 0, high = n-1;
//             while(low<= high){
//                 int mid = (low+high)/2;
//                 if(arr[mid]==k){
//                     return mid;
//                 }
//                 if(arr[mid]<k){
//                     low = mid+1;
//                 }
//                 else{
//                     high = mid-1;
//                 }
//             }
//             return -1;
//         }
// };
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         auto ans = ob.BinarySearch(arr,n,k);
//         cout<<ans<<endl;
//     }
// }



//********************  Search an Element in an array---> gfg           *****************************


/*
                                code
*/
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int Searchele(int arr[],int N, int X){
//             for(int i=0;i<N;i++){
//                 if(arr[i]==X){
//                     return i;
//                 }
//             }
//             return -1;
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         int ans = ob.Searchele(arr,n,x);
//         cout<<ans<<endl;
//     }
// }


//********************  Product of array elements---> gfg           *****************************


/*
                                code
*/

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// class Solution{
//     public:
//     long long int product(int ar[],long long int n,int mod){
//         long long int prod = 1;
//         for(int i=0;i<n;i++){
//             prod =(prod*ar[i])%mod;
//         }
//         return prod;
//     }

// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         long long int mod = 1000000007;
//         cout<<ob.product(arr,n,mod)<<endl;
//     }
//     return 0;
// }




//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 12   ********************************************
//*****************    Cyclically rotate an array by one---> gfg           **********************


/*
                                check this code
*/

// #include<bits/stdc++.h>
// using namespace std;

// void Rotate(int arr[],int n);
// void display(int arr[],int n);
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Rotate(arr,n);
//         display(arr,n);
//     }
//     return 0;
// }
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void rotate(int arr[],int n){
//     int temp = arr[n-1],i;
//     for(i=n-1;i>0;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
// }



//***********************************************************************************************
//***********************************************************************************************
//**************************************    Day 13   ********************************************
//*****************    Number of occurence ---> gfg           **********************


/*
                             code   ------> with time complexity O(n)
*/
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int count(int arr[],int n, int x){
//             int count=0;
//             for(int i=0;i<n;i++){
//                 if(arr[i]==x){
//                     ++count;
//                 }
//             }
//             return count;
//         }
// };

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         auto ans = ob.count(arr,n,x);
//         cout<<ans<<"\n";
//     }
//     return 0;
// }





/*
                             code   ------> with time complexity O(logN)
*/


/*

                                            Date - 27 Aug ,2021 

    I started learning 11 week workshop on data structure and algorithm ----> GeeksforGeeks

*/

/*                                            week -1   ----> Plan 

    learn Mathematics and array 
*/

/*
                                    Week-1 , Day-1  

Learn -Topic Mathematics

 1-Finding number of digits in a number
 2- A.P,G.P,H.P 
 3- Quadratic Equation

  from that workshop 

*/

/////////////////////////////////////////////////////////////////////
/*
                                    Week-1 , Day-2  
                                    
Learn -Topic Mathematics
 
 1- Mean and median
 2- Solve one problem from mathematics section ---> GP Term
 3- Prime Number 
 4- HCF and LCM
*/

//                                      Code - GP Term

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         double termOfGP(int A, int B, int N){
//             double r = ((double)B)/((double)A);
//             double nthTerm = A*(pow(r,(N-1)));
//             return nthTerm;
//         }
// };
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++){
//         int A,B;
//         cin>>A>>B;
//         int N;
//         cin>>N;
//         Solution ob;
//         cout<<floor(ob.termOfGP(A,B,N))<<endl;
//     }
//     return 0;
// }


/////////////////////////////////////////////////////////////////////
/*
                                    Week-1 , Day-3  
                                    
Learn -Topic Mathematics
 
 1- Factorials
 2- Permutation and Combination
 3- Modular Arithmetic
 
*/

/////////////////////////////////////////////////////////////////////
/*


                                    Date - 30 Aug ,2021 
                                    Week-1 , Day- 4  
                                    
Learn -Topic Mathematics
 
 1- Program for factorial of a number 
    a) Using Recursive Method
    b) Using Iterative method -
                                i)  Using for loop
                                ii) Using While Loop
    c) Using Ternary Operator 
 
 2- Program section in Mathematics portion
    - Digits in Factorials
 
*/

//                                  a)Code  Using Recursive Solution

// #include<iostream>
// using namespace std;

// unsigned int factorial(unsigned int n){
//     if(n==0){
//         return 1;
//     }
//     return n*(factorial(n-1));
// }
// int main(){
//     int num = 5;
//     cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
//     return 0;
// }




//                                  b)Code  Using Iterative Solution - i)Using For Loop

// #include<iostream>
// using namespace std;

// unsigned int factorial(unsigned int n){
//     int res =1,i;
//     for(i=2;i<=n;i++){
//         res *=i;

//     }
//     return res;
// }
// int main(){
//     int num = 5;
//     cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
//     return 0;
// }




//                                  b)Code  Using Iterative Solution - ii)Using while Loop

// #include<iostream>
// using namespace std;

// unsigned int factorial(unsigned int n){
//     if(n==0){
//         return 1;
//     }
//     int i=n,fact=1;
//     while(n/i != n){
//         fact = fact*i;
//         i--;
//     }
//     return fact;
// }
// int main(){
//     int num = 5;
//     cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
//     return 0;
// }




//                                  b)Code  Using Ternary Operator-One line Solution

// #include<iostream>
// using namespace std;

// unsigned int factorial(unsigned int n){
//     return (n == 1 || n == 0)?1:n*factorial(n-1);
// }
// int main(){
//     int num = 5;
//     cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
//     return 0;
// }





/*
        Why this not work for more than 20!  if i use recursive method 

*/

// class Solution{
//     public:
//     long long digitsInFactorial(int N)
//     {
//         // code here
//         double num = factorial(N);
//         double digits = floor(log10(num)) + 1;
//         return digits;
//     }
//     long long factorial(int N){
//         if(N == 0){
//             return 1;
//         }
//         return N*factorial(N-1);
//     }
// };



// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int digitsInFactorial(int N){
//             if(N==0 || N==1){
//                 return 1;
//             }
//             // Use Kamenetsky formula to calculate
//             // the number of digits
//             double x = ((N*log10(N/M_E) + log10(2* M_PI * N)/2.0));
//             return ceil(x);
//         }
// };
// // Driver Code
// int main(){
//     int T;
//     // Taking testcases
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         Solution ob;
//         // Calling method digitsInFactorial
//         cout<<ob.digitsInFactorial(N)<<endl;
//         return 0;
//     }
// }




//                                       code for same problem 

// #include<bits/stdc++.h>
// using namespace std;


// class Solution{
//     public:
//     int digitsInFactorial(int N)
//     {
//         // code here
//         if(N==0 || N==1){
//             return 1;
//         }
        
//         double d=0;
//         for(int i=2;i<=N;i++){
//             d +=log10(i);
//         }
//         return ceil(d);
//     }
// };

// // Driver Code
// int main(){
//     int T;
//     // Taking testcases
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         Solution ob;
//         // Calling method digitsInFactorial
//         cout<<ob.digitsInFactorial(N)<<endl;
//         return 0;
//     }
// }




/////////////////////////////////////////////////////////////////////
/*


                                    Date - 31 Aug ,2021 
                                    Week-1 , Day- 5  
                                    
 
 suffer from fever not active
 
*/


/////////////////////////////////////////////////////////////////////
/*


                                    Date - 1 Sept ,2021 
                                    Week-1 , Day- 6  
                                    
Learn -Topic Mathematics
 Program
 1- Smallest Divisible number
 2- Addition Under Modulo
 3- Absolute Value 
*/


//                                  Code -> Smallest Divisible Number

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         long long getSmallestDivNum(long long n){
//             long long lcm = 1;
//             for(int i=1;i<=n;i++){
//                 lcm = (lcm*i)/(__gcd(lcm,i));
//             }
//             return lcm;
//         }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         Solution ob;
//         cout<<ob.getSmallestDivNum(n)<<endl;
//     }
//     return 0;
// }




//                                  Code -> Addition Under Modulo

// #include<bits/stdc++.h>
// using namespace std;
// #define M 1000000007

// class Solution{
//     public:
//         long long sumUnderModulo(long long a, long long b){
//             return ((a%M)+(b%M))%M;
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a;
//         long long b;
//         cin>>a>>b;
//         Solution ob;
//         cout<<ob.sumUnderModulo(a,b)<<endl;
        
//     }
//     return 0;
// }


//                                  code- Absolute Value 

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int absolute(int I){
//             return abs(I);
//         }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int I;
//         cin>>I;
//         Solution ob;
//         cout<<ob.absolute(I)<<endl;
        
//     }
//     return 0;
// }





/////////////////////////////////////////////////////////////////////
/*


                                    Date - 4 Sept ,2021 
                                    Week-1 , Day- 7  
                                    
Learn -Topic Mathematics
 Program
 1- Convert Celsius To Fahrenheit
 2- Primality Test
*/


//                          Code- Convert Celsius To Fahrenheit

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     double cToF(int C){
//     return (C*9/5) + 32;
//     }
// };

// int main(){
//     int T;
//     int C;
//     cin>>T;
//     while(T--){
//         cin>>C;
//         Solution ob;
//         cout<<ob.cToF(C)<<endl;   
//     }
//     return 0;
// }


//                                  code- Primality Test(Naive Approach)

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool isPrime(int N){
//             if(N<=1){
//                 return false;
//             }
//             for(int i=2;i<=sqrt(N);i++){
//                 if(N%i==0){
//                     return false;
//                 }
//             }
//             return true;
//         }
// };

// int main(){
//     int T,N;
//     cin>>T;
//     while(T--){
//         cin>>N;
//         Solution ob;
//         if(ob.isPrime(N)){
//             cout<<"Yes";
//         }
//         else{
//             cout<<"No";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



/////////////////////////////////////////////////////////////////////
/*


                                    Date - 5 Sept ,2021 
                                    Week-2 , Day- 1  
                                    
Learn -Topic Mathematics
 Program
 1-  Modular Multiplicative Inverse 
 2-  Quadratic Equation Roots

*/


//                                         code-  Modular Multiplicative Inverse 

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int modInverse(int a, int m){
//             for(int i=1;i<=m;i++){
//                 if((a*i)%m==1){
//                     return i;
//                 }
//             }
//             return -1;
//         }
// };

// int main(){
//     int T,a,m;
//     cin>>T;
//     while(T--){
//         cin>>a>>m;
//         Solution ob;
//         cout<<ob.modInverse(a,m)<<endl;
//     }
//     return 0;
// }



//                                        Code - Quadratic Equation Roots

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     vector<int> quadraticRoots(int a, int b, int c) {
//         // code here
//         int  solution1,solution2;
//         double d = b*b - 4*a*c;
        
//         if (d>0){
//             solution1 = floor((-b + sqrt(d)) / (2*a));
//             solution2 = floor((-b - sqrt(d)) / (2*a));
//             if(solution1>solution2){
//                 return {solution1, solution2};
//             }
//             else{
//                 return {solution2,solution1};
//             }
//         }
//         else if(d==0){
//             solution1 = (-b)/(2*a);
//             solution2 = (-b)/(2*a);
//             return {solution1, solution2};
//         }
//         else {
//             return {-1};
            
//         }
//     }
// };
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         Solution ob;
//         vector<double> roots = ob.quadraticRoots(a,b,c);
//         if(roots.size() == 1 && roots[0] == -1){
//             cout<<"Imaginary"<<endl;
//         }
//         else{
//             for(int i=0;i<roots.size();i++){
//                 cout<<roots[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }



/////////////////////////////////////////////////////////////////////
/*


                                    Date - 7 Sept ,2021 
                                    Week-2 , Day- 2  
                                    
Learn - Array
 Program
 1-  Remove duplicate elements from sorted Array
 

*/


//                          Code- Remove duplicate elements from sorted Array

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
//     int remove_duplicate(int arr[],int n){
       
//         if(n==0 || n==1){
//             return n;
//         }
//         int j=0;
//         for(int i=0;i<n-1;i++){
//             if(arr[i] != arr[i+1]){
//                 arr[j++] = arr[i];
//             }
//         }
//         arr[j++] = arr[n-1];
//         return j;
//     }
// };

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         int arr[N];
//         for(int i=0;i<N;i++){
//             cin>>arr[i];
//         }
//         Solution ob;
//         int n = ob.remove_duplicate(arr,N);
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//                                  TCS NINJA

/*

Question1: - Given two non negative integer n1 and n2 ,where n1<n2;
The task is to find the total number in the range[n1,n2] which has no repeated digits

          n1 n2
  input:  11 15
  output:- 4

*/


// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int count =0;
//     for(int i=n1;i<=n2;i++){
//         set <char> s;
//         string s1 = to_string(i);
//         int size = s1.length();
//         for(char x:s1){
//             s.insert(x);
//         }
//         if(s.size()==size){
//             count++;
//         }
//     }
//     cout<<count;
// }
// int main(){
//     solve();
//     return 0;
// }



/*
                                            Question 2:-
Problem Statement
Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) belongs to this ilk.They are named in the following shloka:


Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.

He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.

Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

Scheme
He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.

Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
Case 4
Input : 7
Expected Output : 90 50
*/
// 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char c = 'R';
//     int x=0,y=0;
//     int distance = 10;
//     while(n){
//         switch(c){
//             case 'R':
//             x = x + distance;
//             distance += 10;
//             c = 'U';
//             break;
            
//             case 'U':
//             y = y + distance;
//             distance += 10;
//             c = 'L';
//             break;
            
//             case 'L':
//             x = x - distance;
//             distance += 10;
//             c = 'D';
//             break;
            
//             case 'D':
//             y = y - distance;
//             distance += 10;
//             c =  'A';
//             break;
            
//             case 'A':
//             x = x + distance;
//             distance += 10;
//             c = 'R';
//             break;
//         }
//         n--;
//     }
//     cout<<x<<" "<<y;
//     return 0;
// }


/*
                                            Question 3:

Sweet Seventeen Problem Statement
Given a maximum of four digit to the base 17 (10 – A, 11 – B, 12 – C, 13 – D … 16 – G} as input, output its decimal value.

Test Cases
Case 1
Input – 1A
Expected Output – 27
Case 2
Input – 23GF
Expected Output – 10980
*/

//                                  code

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char hex[17];
//     long long decimal, place;
//      int i = 0, val, len;
//   decimal = 0;
//   place = 1;

//   cin>> hex;

//   len = strlen(hex);
//   len--;

//   for(i = 0;hex[i]!='\0';i++)
//   {
//     if(hex[i]>='0'&& hex[i]<='9'){

//       //48 to 57 are ascii values of 0 - 9
//       //say value is 8 its ascii will be 56
//       //val = hex[i] - 48 => 56 - 48 => val = 8

//       val = hex[i] - 48;
//     }
//     else if(hex[i]>='a'&& hex[i]<='g'){

//       //97 to 103 are ascii values of a - g
//       //say value is g its ascii will be 103
//       //val = hex[i] - 97 + 10 => 103 - 97 + 10=> val = 16
//       //10 is added as g value is 16 not 6 or a value is 10 not 0

//       val = hex[i] - 97 + 10;
//     }
//     else if(hex[i]>='A'&& hex[i]<='G'){

//       //similarly, 65 to 71 are values of A - G
//       val = hex[i] - 65 + 10;
//     }

//     decimal = decimal + val * pow(17,len);
//     len--;
//   }

//   cout<< decimal;

//   return 0;

// }



// Calculate decimal to binary of N number
/*

#include<bits/stdc++.h>
using namespace std;
int decToBin(int N){
        int BinaryNum[32];
        int j=0;
        while(N>0){
            BinaryNum[j] = N%2;
            N = N/2;
            j++;
        }
        for(int k=j-1;k>=0;k--){
            cout<<BinaryNum[k];
        }
        cout<<endl;
    }
    
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        decToBin(i);
    }
    return 0;
}

*/