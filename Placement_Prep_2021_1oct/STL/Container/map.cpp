//                                  Date :- 13 Feb,2022

// map()
/*
key      value

raj     ->  27
hima    ->  31
sandeep ->  67
tank    ->  89

- It is always started according to the key
- Map stores only unique keys

*/




// 
/*
map<string,int> mpp;
mpp["raj"] = 27;
mpp["hima"] = 31;
mpp["sandeep"] = 67;
mpp["tank"] = 89;

mpp["raj"] = 29;   // 29 overrides 27

mpp.emplace("raj",45);                      // 45 overries 29
mpp.erase("raj");                           // mpp.erase(key)
mpp.erase(mpp.begin());                     // mpp.erase(iterator)
mpp.clear();                                // enter map is cleaned up
mpp.erase(mpp.begin(),mpp.begin()+2);       // cleans up a given range

auto it = mpp.find("raj");                 // points to where raj lies
if(mpp.empty()){
    cout<<"Yes,It is empty";
}

auto it = mpp.find("simran");              // Points to end since she doesn't exist

mpp.count("raj");                          // always return 1 as it stores only one instance of raj

// Log(N)  is time complexity of raj

// We can assign multiple value to different key

//  Printing map


// map stores in a pair


pair<int,int> pr;
pr.first = 1;
pr.second = 10;             //pr-> {1,10}



// Printing Map

for(auto it:map)
    cout<<it.first<<" "<<it.second<<endl;


//                  or

for(auto it:map){
    cout<<it->first<<" "<<it->second<<endl;
}

*/


#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> mpp;
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["sandeep"] = 67;
    mpp["tank"] = 89;

    mpp["raj"] = 29;   // 29 overrides 27
    mpp.emplace("raj",900);     // 
    mpp["raj"] = 95;   // 95 overrides 27
    mpp.emplace("raj",90);          //90 doesn't override  95

    // printing map
    // for(auto it:mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    // Or printing this way
    // mpp.erase("raj");
    // mpp.erase(mpp.begin());
    // mpp.erase(mpp.begin(),mpp.end());
    // mpp.clear();
    auto it = mpp.find("raj");
    if(mpp.empty()){
        cout<<"Yes, it is empty";
    }
    // for(auto it=mpp.begin();it!=mpp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mpp.count("raj")<<endl;
    return 0;
}


/*

Conclusion:-

- emplace doesn't override anything the key occur above it it perfer 1st declaration (top element got more priority) 
where as mpp[key] -> give priority to top to down.

*/

