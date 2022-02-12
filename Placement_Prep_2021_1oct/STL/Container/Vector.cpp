//                                      Date: 8 feb,2022


/*
>Some important point about array


// Globally outside main or any function

- max size of array of 10^6 --->int,double,char etc;
- max size of array of 10^7 --->bool data type

// Inside main

- max size of 10^6  ---> int, double, char etc
- max size of 10^7  ---> bool data type


*/

/**************************************** Vector ***************************************/


//                            To define 1-D array

/*


vector<int>arr;         //{}
cout<<arr.size<<endl;           //print 0

arr.push_back(0);       //{0}    
arr.push_back(2);       //{0,2}    
cout<<arr.size()<<endl; //---> print 2    

arr.pop_back();         // {0}
cout<<arr.size()<<endl; // print 1


//  segmentation fault if we push_back 10^7 times


arr.push_back(0);       // {0,0}
arr.push_back(2);       //{0,0,2}
arr.push_back(3);       //{0,0,2,3}
arr.clear();            //---> erase all elements at once {}


vector<int> vec1(4,0);      // ----> {0,0,0,0}
vector<int> vec2(4,10);     //-----> {10,10,10,10}

//Copy entire vec2 into vec3
// Create vec3 & insert all element of vec2 into vec3

vector<int> vec3(vec2.begin(),vec2.end());
            //or
vector<int> vec3(vec2);


///////////////////////////////////////

vector<int>raj;
raj.push_back(1);
raj.push_back(3);
raj.push_back(2);
raj.push_back(9);
raj.push_back(7);       //---> {1,3,2,9,7}


// Copy only {1.3}  from raj into raj1

vector<int>raj1(raj.begin(),raj.begin()+2);     //-->{1,3}


//emplace_back vs push_back

- emplace_back takes lesser time than push_back

// Similarity
- both do the smae work


*/



//                           To define 2-D array


/*

// Declaration

vector<vector<int>>vec;


////////////////////////////////////////
vector<int> raj1;
raj1.push_back(1);
raj1.push_back(2);

vector<int> raj2;
raj2.push_back(10);
raj2.push_back(20);

vec.push_back(raj1);
vec.push_back(raj2);

vector<int>raj3;
raj3.push_back(19);
raj3.push_back(25);
raj3.push_back(27);

vec.push_back(raj3);


// It is vector by itself

for(auto it:vec){
    for(auto itr:it){
        cout<<itr<<" ";
    }
    cout<<endl;
}



// vec[2][2] = 27;

// traditional way
for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}




//  How to define 10*20 array

vector<vector<int>vec(10,vector<int> (20,0));
vec.push_back(vector<int>(20,0));

vec[2].push_back(1);

//////////////////////////////////////////////////////////////

vector<int> arr[4];  
arr[0].push_back(2);

*/



//                          3-D vector


// 10*20*30
/*
vector<vector<vector<int>>> vec(10,vector<vector<int>> vec(20,vector<int>(30,0)));


*/


