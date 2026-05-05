// #include <bits/stdc++.h>
// using namespace std;

// // Insert element at bottom
// void insertAtBottom(stack<int> &st, int x) {
//     if (st.empty()) {
//         st.push(x);
//         return;
//     }

//     int top = st.top();
//     st.pop();

//     insertAtBottom(st, x);

//     st.push(top);
// }

// // Reverse stack using recursion
// void reverseStack(stack<int> &st) {
//     if (st.empty()) return;

//     int top = st.top();
//     st.pop();

//     // reverse remaining stack
//     reverseStack(st);

//     // insert current element at bottom
//     insertAtBottom(st, top);
// }

// // Print stack
// void printStack(stack<int> st) {
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> st;

//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     reverseStack(st);

//     printStack(st);
// }