// // sort stack without loop

// #include <bits/stdc++.h>
// using namespace std;

// // Insert element in sorted order (smallest on top)
// void insertSorted(stack<int> &st, int x) {
//     // Base case
//     if (st.empty() || st.top() >= x) {
//         st.push(x);
//         return;
//     }

//     int top = st.top();
//     st.pop();

//     // Recursive call
//     insertSorted(st, x);

//     st.push(top);
// }

// // Sort stack using recursion
// void sortStack(stack<int> &st) {
//     if (st.empty()) return;

//     int top = st.top();
//     st.pop();

//     // Sort remaining stack
//     sortStack(st);

//     // Insert in sorted order
//     insertSorted(st, top);
// }

// // Utility
// void printStack(stack<int> st) {
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> st;

//     st.push(3);
//     st.push(1);
//     st.push(4);
//     st.push(2);

//     sortStack(st);

//     printStack(st);
// }


// space and time complexity O(n^2) in worst case when stack is sorted in reverse order.