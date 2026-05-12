// #include <bits/stdc++.h>
// using namespace std;

// class MinStack {

//     stack<int> st;
//     stack<int> minSt;

// public:

//     void push(int val) {

//         st.push(val);

//         // Push into min stack
//         if (minSt.empty() || val <= minSt.top()) {
//             minSt.push(val);
//         }
//     }

//     void pop() {

//         if (st.empty()) return;

//         // Remove from min stack also
//         if (st.top() == minSt.top()) {
//             minSt.pop();
//         }

//         st.pop();
//     }

//     int top() {

//         if (st.empty()) return -1;

//         return st.top();
//     }

//     int getMin() {

//         if (minSt.empty()) return -1;

//         return minSt.top();
//     }
// };

// int main() {

//     MinStack s;

//     s.push(5);
//     s.push(3);
//     s.push(7);
//     s.push(2);

//     cout << s.getMin() << endl;
//     s.pop();

//     cout <<"After pop min element"<<" "<< s.getMin() << endl;
// }