// // implement using array 

// #include <iostream>
// using namespace std;

// class Stack {
// public:
//     int* arr;
//     int top;
//     int size;

//     // constructor
//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element) {
//         if (size - top > 1) {
//             top++;
//             arr[top] = element;
//         } else {
//             cout << "Stack Overflow" << endl;
//         }
//     }

//     void pop() {
//         if (top >= 0) {
//             top--;
//         } else {
//             cout << "Stack Underflow" << endl;
//         }
//     }

//     int peek() {
//         if (top >= 0) {
//             return arr[top];
//         } else {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty() {
//         return top == -1;
//     }
// };

// int main() {
//     Stack st(5);

//     st.push(1);
//     st.push(2);
//     st.push(3);
    

//     st.pop();
//     cout << st.peek() << endl;
//         st.pop();
//     cout << st.peek() << endl;
//             st.pop();
//     cout << st.peek() << endl;

//     return 0;
// }