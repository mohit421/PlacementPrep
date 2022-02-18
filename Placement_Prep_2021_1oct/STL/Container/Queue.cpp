//                              Date:- 15 Feb,2022


//                                      Queue


/*
Operation

- push
- front
- pop
- size
- empty

*/

//  Queue:- FIFO( first in first out)
/*

Declaration:-  queue<int> q;

q.push(1);
q.push(5);
q.push(3);
q.push(6);

cout<<q.front();            // print 1

q.pop();
cout<<q.front();            // print 5

q.pop();
cout<<q.front();            // print 3


//  Using loop

while(!q.empty()){
    q.pop();
}


- All Operation except Deletion in Stack & queue takes O(1)  time complexity

- Whereas Deletion takes O(Linear time complexity)

- There is no iterator in stack & queue


// insert an element in queue

for(int i=0;i<10;i++){
    q.push(i);
}