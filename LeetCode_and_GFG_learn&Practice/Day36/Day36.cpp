//                                      Date:- 4 March, 2022

//                                        Hash Table

// Source :- Youtube By Luv


//      Precomputation Techniques Basics and Hashing


/*
// Problem:-

Given T test cases and in each test case a number N. Print its factorial for each test case %M.
Where M = 10^9 + 7
Constraints:-
1<=T<=10^5
1<=N<=10^5

*/


//  Problem:-

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        long long fact = 1;
        for(int i=2;i<=n;i++){
            fact = (fact*i)%M;
        }
        cout<<fact<<endl;
    }
    return 0;
}
*/

// Time Complexity:- O(t*n) ---> It is greater than given constraints so it give TLE and not run in 1sec;


// Using precomputation Technique

/*
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main(){
    fact[0] = fact[1] = 1;
    for(int i=2;i<=n;i++){
        fact[i] = fact[i-1]*i;
    }
    int t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n<<endl;
    }
    return 0;
}

// Time Complexity:- O(N)

*/



/*
// Problem:-

Given array a of N integers, Given Q queries and in each query a no x, print count of that no in array.
Constraints:- 
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/



//  basic method
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct = 0;
        for(int i =0;i<n;++i){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}


// TC :- O(N*N)

*/




// Use Hashing 

/*


#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
        
    }
    return 0;
}

// TC:- O(N)
*/



//                       Leetcode Explore


// - You can go to link as l=mentioned below or read all explanation below 

// Link:- https://leetcode.com/explore/learn/card/hash-table/182/practical-applications/1110/
/*

// The Principle of Hash Table

- Hash Table is a data structure which organizes data using hash functions in order to support quick 
  insertion and search.

The key idea of Hash Table is to use a hash function to map keys to buckets. To be more specific,

- When we insert a new key, the hash function will decide which bucket the key should be assigned and 
the key will be stored in the corresponding bucket;
- When we want to search for a key, the hash table will use the same hash function to find the 
corresponding bucket and search only in the specific bucket.


-------

key    hash function  buckets

0        ---->          0
                        1
1987 & 2  ---->         2
                        3
24       --->           4

In the example, we use y = x % 5 as our hash function. Let's go through the insertion and search 
strategies using this example:

- Insertion: we parse the keys through the hash function to map them into the corresponding bucket.
e.g. 1987 is assigned to bucket 2 while 24 is assigned to bucket 4.
- Search: we parse the keys through the same hash function and search only in the specific bucket.
e.g. if we search for 1987, we will use the same hash function to map 1987 to 2. So we search in bucket
 2 and we successfully find out 1987 in that bucket.
e.g. if we search for 23, will map 23 to 3 and search in bucket 3. And We find out that 23 is not in
 bucket 3 which means 23 is not in the hash table.

*/

/*

// 1. Hash Function

- The hash function is the most important component of a hash table which is used to map the key to 
a specific bucket.
- The hash function will depend on the range of key values and the number of buckets.

- It is an open problem to design a hash function. The idea is to try to assign the key to the bucket 
as uniformly as you can. Ideally, a "perfect hash function" will be a "one-one mapping" between the key 
and the bucket.


----------------------------
// 2. Collision Resolution

- Ideally, if our hash function is a perfect one-one mapping, we will not need to handle collisions. 
Unfortunately, in most cases, collisions are almost inevitable. For instance, in our previous hash 
function (y = x % 5), both 1987 and 2 are assigned to bucket 2. That is a collision.

---------
A collision resolution algorithm should solve the following questions:

- How to organize the values in the same bucket?
- What if too many values are assigned to the same bucket?
- How to search for a target value in a specific bucket?


--------------------------

- These questions are related to the capacity of the bucket and the number of keys which might be mapped 
into the same bucket according to our hash function.

- Let's assume that the bucket, which holds the maximum number of keys, has N keys.

- Typically, if N is constant and small, we can simply use an array to store keys in the same bucket. If 
N is variable or large, we might need to use height-balanced binary search tree instead.



*/



//                                  Design Hashset



/*

Design a HashSet without using any built-in hash table libraries.

Implement MyHashSet class:

- void add(key):- Inserts the value key into the HashSet.
- bool contains(key):- Returns whether the value key exists in the HashSet or not.
- void remove(key):- Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.



------------------------
// Example 1:
```
Input
["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
[[], [1], [2], [1], [3], [2], [2], [2], [2]]
Output
[null, null, null, true, false, null, true, null, false]

Explanation
MyHashSet myHashSet = new MyHashSet();
myHashSet.add(1);      // set = [1]
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(1); // return True
myHashSet.contains(3); // return False, (not found)
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(2); // return True
myHashSet.remove(2);   // set = [1]
myHashSet.contains(2); // return False, (already removed)

```


Constraints:

0 <= key <= 106
At most 104 calls will be made to add, remove, and contains
*/


/*

class MyHashSet {
private:
    vector<bool>st;
public:
    
    MyHashSet():st(1e6+1,false) {
    }
    
    void add(int key) {
        st[key] = true;
    }
    
    void remove(int key) {
        st[key] = false;
    }
    
    bool contains(int key) {
        return st[key];
    }
};



// 
//  * Your MyHashSet object will be instantiated and called as such:
//  * MyHashSet* obj = new MyHashSet();
//  * obj->add(key);
//  * obj->remove(key);
//  * bool param_3 = obj->contains(key);
//  


 */



 /*

//  Approach 1: Basic Implementation


class MyHashSet {
private:
	int prime;
	vector<list<int>> table;

	int hash(int key) {
		return key % prime;
	}

	list<int>::iterator search(int key) {
		int h = hash(key);
		return find(table[h].begin(), table[h].end(), key);
	}

public:
	MyHashSet() : prime(10007), table(prime) {}
	
	void add(int key) {
		int h = hash(key);
		if (!contains(key))
			table[h].push_back(key);
	}
	
	void remove(int key) {
		int h = hash(key);
		auto it = search(key);
		if (it != table[h].end())
			table[h].erase(it);
	}
	
	bool contains(int key) {
		int h = hash(key);
		return search(key) != table[h].end();
	}
};
*/



//                                      Design Hashmap

/*

Design HashMap

Solution
Design a HashMap without using any built-in hash table libraries.

Implement the MyHashMap class:

MyHashMap() initializes the object with an empty map.
void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists 
in the map, update the corresponding value.
int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains 
no mapping for the key.
void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.
 

Example 1:

Input
["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
[[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
Output
[null, null, null, 1, -1, null, 1, null, -1]

Explanation
MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1); // The map is now [[1,1]]
myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
myHashMap.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]
 

Constraints:

0 <= key, value <= 106
At most 104 calls will be made to put, get, and remove.


*/

/*

class MyHashMap {
private:
    int data[1000001];
        
public:
    MyHashMap() {
        fill(data,data+1000001,-1);
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key]= -1;
    }
};
*/
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

 
/*

class MyHashMap {
    vector<list<pair<int,int>>> m_data;
    size_t m_size = 10000;
public:
    // /** Initialize your data structure here. /
    MyHashMap() {
        m_data.resize(m_size);
    }
    
    // value will always be non-negative. 
    void put(int key, int value) {
        auto &list = m_data[key % m_size];
        for (auto & val : list) {
            if (val.first == key) {
                val.second = value;
                return;
            }
        }
        list.emplace_back(key, value);
    }
    
    //  Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key 
    int get(int key) {
        const auto &list = m_data[key % m_size];
        if (list.empty()) {
            return -1;
        }
        for (const auto & val : list) {
            if (val.first == key) {
                return val.second;
            }
        }
        return -1;
    }
    
    // /* Removes the mapping of the specified value key if this map contains a mapping for the key 
    void remove(int key) {
        auto &list = m_data[key % m_size];
        list.remove_if([key](auto n) { return n.first == key; });
    }
};



*/

/*
// Remove_if() will go through the whole list since it doesn't know that the key is unique. We should stop 
// iterating immediately when found the matching pair.

    void remove(int key) {
        auto& pairs = m[key%s];
        for(auto i=pairs.begin(); i!= pairs.end(); i++)
        {
            if(i->first==key) { pairs.erase(i); return; }
        }
    }

*/



// Another Solution of hashmap

/*

class MyHashMap {
    private:
    const int my_size=10000;
    vector<list<pair<int,int>>>hash;
public:
    //  Initialize your data structure here. 
    MyHashMap() {
        hash.resize(my_size);
    }
    
    //  value will always be non-negative. 
    void put(int key, int value) {
        auto&Mylist=hash[key%my_size];
        for(auto&Mypair:Mylist){
            if(Mypair.first==key){
                Mypair.second=value;
                return;
            }
        }
        Mylist.push_back({key,value});
    }
    
    //  Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key 
    int get(int key) {
        auto&Mylist=hash[key%my_size];
        for(auto&Mypair:Mylist){
            if(Mypair.first==key){
                return Mypair.second;
            }
        }
        return -1;
    }
    
    //  Removes the mapping of the specified value key if this map contains a mapping for the key 
    void remove(int key) {
        auto&Mylist=hash[key%my_size];
        for(auto&Mypair:Mylist){
            if(Mypair.first==key){
                Mylist.remove(Mypair);
                return;
            }
        }
    }
};

*/
 /*


   Complexity Analysis - Hash Table
Report Issue
In this article, we are going to discuss the performance of hash table.

 

// Complexity Analysis

If there are M keys in total, we can achieve the space complexity of O(M) easily when using a hash table.

However, you might have noticed that the time complexity of hash table has a strong relationship with 
the design.

Most of us might have used an array in each bucket to store values in the same bucket. Ideally, the 
bucket size is small enough to be regarded as a constant. The time complexity of both insertion and 
search will be O(1).

But in the worst case, the maximum bucket size will be N. And the time complexity will be O(1) for 
insertion but O(N) for search.

 

The Principle of Built-in Hash Table
The typical design of built-in hash table is:

 The key value can be any hashable type. And a value which belongs to a hashable type will have a hashcode. This code will be used in the mapping function to get the bucket index.
 Each bucket contains an array to store all the values in the same bucket initially.
 If there are too many values in the same bucket, these values will be maintained in a height-balanced binary search tree instead.
The average time complexity of both insertion and search is still O(1). And the time complexity in the worst case is O(logN) for both insertion and search by using height-balanced BST. It is a trade-off between insertion and search.
*/