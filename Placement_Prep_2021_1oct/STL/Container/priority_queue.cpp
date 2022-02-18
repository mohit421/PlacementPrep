//                          Date :- 16 Feb ,2022


/*

Why we use Priority Queue?

Problem in :-
1- set<int>st;     --> Store only Unique element 
                  --> O(LogN)
2- unordered_set   --> O(N) --> in worst case
                  --> O(1) --> in best case

Due to problem in above two we use priority Queue


- Priority_queue :- Stores all in sorted order and does the operation in Lon(N).


*/

/*
Declaration:- priority_queue<int> pq;

pq.push(1);
pq.push(5);
pq.push(2);
pq.push(6);

cout<<pq.top();             //print 6


*/

/*
priority_queue<pair<int,int>>pq;
pq.push(1,5);
pq.push(1,6);
pq.push(1,7);

- priority_queue works according to the first element & if they are equal it starts according to the 2nd
element.

- What if we want to store everything in decreasing order?

// 1 way like below
priority_queue<int>pq;

pq.push(-1);
pq.push(-5);
pq.push(-2);
pq.push(-6);


cout<<-1*pq.top()<<endl;            //  print 1

*/

/*

//  Minimum priority queue


Defining:- priority_queue<int,vector<int>, greater<int>> pq;

pq.push(1);
pq.push(5);
pq.push(2);
pq.push(6);

cout<<pq.top()<<endl;           // prints 1



*/

/*

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
*/

