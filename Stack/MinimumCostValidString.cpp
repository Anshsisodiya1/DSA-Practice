// #include <bits/stdc++.h>
// using namespace std;

// int minCost(string s) {
//     if (s.length() % 2 == 1) return -1;

//     stack<char> st;

//     // Step 1: remove valid pairs
//     for (char ch : s) {
//         if (ch == '{') {
//             st.push(ch);
//         } else {
//             if (!st.empty() && st.top() == '{') {
//                 st.pop();
//             } else {
//                 st.push(ch);
//             }
//         }
//     }

//     // Step 2: count remaining
//     int open = 0, close = 0;

//     while (!st.empty()) {
//         if (st.top() == '{') open++;
//         else close++;
//         st.pop();
//     }

//     // Step 3: apply formula
//     return (open + 1) / 2 + (close + 1) / 2;
// }

// int main() {
//     string s = "}{{}}{{{";

//     cout << minCost(s);
// }

// Time Complexity: O(n) where n is the length of the string
// Space Complexity: O(n) in the worst case when all characters are the same