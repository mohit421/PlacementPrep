//                                  8 Feb,2022


/*

// Given n elements, tell me the no. of unique elements

arr[] = {2,5,2,1,5}             // 3 unique element----> {1,2,5}

set<int> st;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x);
}

// st-----> {1,2,5}


// Erase functionality ---> log(N)

// 1. set_name.erase(iterator)

st.erase(st.begin());   // st --> {2,5}

// 2. st.erase(startIterator,endIterator)

st.erase(st.begin(),st.begin()+2);          // --> st--->{5}

// 3. st.erase(key)---> if key matches with the element in a set then it remove it from set

st.erase(5)         // delete 5 from set  --->st -> {}

////////////////////////////////

// copy st to set1

set<int>st ={1,5,7,8};
set<int> set1(st.begin(),st.end());

//  Everything we learnt so far in vector can also be applied to set also

auto it = st.find(7); // --> It will be iterator to 7
auto it = st.find(9); // --> it = st.end()

st.emplace(6);          // st.insert(6);
cout<<st.size()<<endl;

///////////////////////////////////////////////////////

set<int> st;
st.insert(5);
st.insert(5);

for(auto it=st.begin();it != st.end();it++){
    cout<<*it<<" ";
}

for(auto it:st){
    cout<<it<<endl;
}

// To delete the entire set

st.erase(s.begin(),st.end());           //It make sure to delete the entire set

*/