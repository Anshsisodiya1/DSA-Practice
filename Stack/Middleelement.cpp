// // find middle element of stack and delete it

// #include <iostream>
// #include <stack>
// using namespace std;

// // Helper function to delete middle element
// void deleteMiddle(stack<int> &st, int current, int mid) {
//     // Base case
//     if (st.empty())
//         return;

//     int top = st.top();
//     st.pop();

//     // If current index is middle, do NOT push it back
//     if (current == mid) {
//         return;
//     }

//     // Recursive call
//     deleteMiddle(st, current + 1, mid);

//     // Push back elements while backtracking
//     st.push(top);
// }

// // Function to find middle and delete it
// void deleteMiddleElement(stack<int> &st) {
//     int n = st.size();
//     int mid = n / 2;  // middle index

//     deleteMiddle(st, 0, mid);
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

//     // Example stack
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);

//     cout << "Original Stack: ";
//     printStack(st);

//     // Rebuild stack (because print destroyed it)
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);

//     deleteMiddleElement(st);

//     cout << "After deleting middle: ";
//     printStack(st);

//     return 0;
// }