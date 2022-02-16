//                                               Date:- 13 feb, 2022



//                                      multimap()

//                                  use cases
/*

declaration:- multimap<string,int>map;

- it can store multiple key in a sorted fashion.

eg)

multimap<string,int>mpp;
mpp["raj"] = 2;         
mpp["raj"] = 6;
mpp["raj"] = 7;


*/

/*
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    multimap<string,int>mpp;
    mpp.emplace("raj",34);
    mpp.emplace("raj",45);
    mpp.emplace("raj",56);
    mpp.emplace("king",34);
    mpp.emplace("king",45);
    mpp.emplace("king",56);

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;

}

*/