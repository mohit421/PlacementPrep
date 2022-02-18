//                              Date:- 16 feb,2022

//                                      Stack

/*
Declaration:-  stack<int>st;        // LIFO(last in first out) --> data Structure

Operation:- 
- pop
- top
- size
- empty
- push & emplace

// Some Implementation
/*

stack<int> st;
st.push(2);
st.push(4);
st.push(3);
st.push(1);

cout<<st.top();                 //print 1

st.pop();                   // Delete the last entered element -> delete 1

cout<<st.top();             // print 3
st.pop();                   // Delete 3

cout<<st.top();                // print 4


- Generally we can implement stack using array & Linked list

- clear() function not exist in stack

bool flag = st.empty();     // return true if stack is empty or false

// delete the entire stack

while(!st.empty()){
    st.pop();
}

cout<<st.pop()<<endl;
stack<int> st1;

cout<<st1.top()<<endl;              // thrown error

- Always check before implementing stack for a top



stack<int> st;

- Correct way of implementing stack


if(!st.empty()){
    cout<<st.top()<<endl;
}

