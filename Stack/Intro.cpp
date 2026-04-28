// stack is  a linear data structure which follows a particular order in which the operations are performed. 
// The order may be LIFO(Last In First Out) or FILO(First In Last Out).

//  operations on stack are mainly of two types:
// 1. push: adds an item to the stack. If the stack is full,   
//    then it is said to be an Overflow condition.
// 2. pop: removes an item from the stack. The items are popped in the
//    reverse order in which they are pushed. If the stack is empty,
//    then it is said to be an Underflow condition.
//  3. peek or top: returns the top item from the stack.
//  4. isEmpty: returns true if the stack is empty, else false.
//  5. isFull: returns true if the stack is full, else false.

// creation of stack can be done in two ways:
// 1. using array       
// 2. using linked list


// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
// // creation of stack 
//  stack<int>s;
 
//  // push operation 
//  s.push(1);
//  s.push(2);
 
//  // pop 
//  s.pop();
 
//  cout<<"Printing top element"<<s.top()<<endl;
//  if(s.empty()){
//      cout<<"your stack is empty";
//  }else{
//      cout<<"your stack is not empty";
//  }
//  cout<<"size of stack is "<<s.size()<<endl;

//     return 0;
// }