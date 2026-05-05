// #include <bits/stdc++.h>
// using namespace std;

// bool isValid(string s) {
//     stack<char> st;

//     for (char c : s) {

//         // opening brackets
//         if (c == '(' || c == '{' || c == '[') {
//             st.push(c);
//         }

//         // closing brackets
//         else {
//             if (st.empty()) return false;

//             char top = st.top();
//             st.pop();

//             if ((c == ')' && top != '(') ||
//                 (c == '}' && top != '{') ||
//                 (c == ']' && top != '[')) {
//                 return false;
//             }
//         }
//     }

//     return st.empty();
// }

// int main() {
//     string s = "{[()]}";

//     if (isValid(s))
//         cout << "Valid\n";
//     else
//         cout << "Invalid\n";
// }