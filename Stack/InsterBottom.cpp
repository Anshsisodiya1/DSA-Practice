// #include <bits/stdc++.h>
// using namespace std;

// void insertAtBottom(stack<int> &st, int x) {
//     // Base case: if stack is empty, insert element
//     if (st.empty()) {
//         st.push(x);
//         return;
//     }

//     // Step 1: store top
//     int top = st.top();
//     st.pop();

//     // Step 2: recursive call
//     insertAtBottom(st, x);

//     // Step 3: push back stored elements
//     st.push(top);
// }

// // Utility function
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

//     insertAtBottom(st, 99);

//     printStack(st);
// }