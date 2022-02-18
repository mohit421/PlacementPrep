//                                  Date: 16 Feb,2022

/*

Problem:- Given N element , print the element that occurs maximum numner of times

i/p:-

5
1 3 3 3 2
o/p:- 
3

*/
/*
#include<iostream> 
#include<map>
using namespace std;

int main(){
    int n;cin>>n;
    map<int,int> mpp;
    int maxi = 0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x]>mpp[maxi]){
            maxi = x;
        }
    }
    cout<<maxi<<endl;
    return 0;
}

*/


// Problem:- Given N element, Print all element in sorted order

/*
i/p:- 
6
6 6 3 2 3 5

o/p:-
2 3 3 5 6 6
*/
/*
#include<iostream> 
#include<set>
using namespace std;

int main(){
    int n;cin>>n;
    multiset<int>ms;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ms.insert(x);
    }
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}

*/
