//                                  Date : - 13 feb,2022


/*

- Stores in any order.
- Ordered doesn't matter in it.

- O(1) -> in almost all cases
- O(n) -> in the worst case, where n is the container size

*/

/*
//                              pair  class

declaration:-
pair<int,int> pr = {1,2};
pr2 = {{1,2},3};

//  for access pr2
cout<<pr2.first.second<<endl;               //2

pair<pair<int,int>,pair<int,int>>pr3;
pr3={{1,2},{3,4}};
cout<<pr3.first.first;
cout<<pr3.second.second;

- pair in a single element it's not a container
- we can store vector of pair also

// we can also define vector,set and map of pair too


vector<pair<int,int>>vec;
set<pair<<int,int>>st;
map<pair<<int,int>>mpp;


// unordered_map  -> pair is not possible
// unordered_map<int,int> mpp;      //not possible

*/


/*

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    pair<int,int> pr = {1,2};
    // for printing pr
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<pair<int,int>,int>pr2 = {{1,2},3};

    //  Printing pr2
    cout<<pr2.first.second<<" "<<pr2.first.first<<" "<<pr2.second <<endl;              

    // declarating pr3
    pair<pair<int,int>,pair<int,int>>pr;                        // Conflicting declaration
    pair<pair<int,int>,pair<int,int>>pr3;
    pr3 = {{1,2},{3,4}};

    //  printing pr3
    cout<<pr3.second.first<<" "<<pr3.first.second<<endl;
    return 0;
}

*/
