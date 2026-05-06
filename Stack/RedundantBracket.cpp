// #include <bits/stdc++.h>
// using namespace std;

// bool hasRedundantBrackets(string s) {
//     stack<char> st;

//     for (char ch : s) {

//         // If closing bracket
//         if (ch == ')') {
//             bool hasOperator = false;

//             while (!st.empty() && st.top() != '(') {
//                 char top = st.top();

//                 if (top == '+' || top == '-' || top == '*' || top == '/') {
//                     hasOperator = true;
//                 }

//                 st.pop();
//             }

//             // Pop the opening bracket '('
//             if (!st.empty()) st.pop();

//             // If no operator found → redundant
//             if (!hasOperator) return true;
//         }
//         else {
//             st.push(ch);
//         }
//     }

//     return false;
// }

// int main() {
//     string s = "((a+b))";

//     if (hasRedundantBrackets(s))
//         cout << "Redundant Brackets Found\n";
//     else
//         cout << "No Redundant Brackets\n";
// }