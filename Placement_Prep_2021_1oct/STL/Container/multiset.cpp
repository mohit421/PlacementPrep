//                              Date - 8 Feb,2022

/*

- It help us to store all the element in the sorted fashion  unlike set

multiset<int>ms;
ms.insert(1);       // alternative of insert--> ms.emplace(1)
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);           //ms--> {1,1,2,2,3}


//Time complexity--> log(N) 
ms.erase(2);        // all the instances will be erased
ms.clear();         // delete the entire set
ms.erase(ms.begin(),ms.end());  // it also delete the entire set

for(auto it=ms.begin();it!= ms.end();it++){
    cout<<*it<<" ";
}

// Or we can use like below
for(auto it:ms){
    cout<<it<endl;
}

// if we want to erase only one instances

ms.erase(ms.find(2));       //it will removed 1st instances of two

ms.erase(ms.find(2),ms.find(2)+2);       
*/


/******************************************************/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>ms;
    ms.insert(5);       // alternative of insert--> ms.emplace(5)
    ms.insert(4);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);           
    ms.insert(1);          
    ms.insert(3); 
    // ms.erase(2);           
    // ms.clear();   
    // ms.erase(ms.begin(),ms.end());  
    // ms.erase(ms.find(2)); 
    // ms.erase(ms.find(),ms.find(2)+2);    // whats wrong with it i have to find it
    for(auto it:ms)
        cout<<it<< " ";
    return 0;
}
*/

