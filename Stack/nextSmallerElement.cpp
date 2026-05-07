// #include <bits/stdc++.h>
// using namespace std;

// vector<int> nextSmallerElement(vector<int> &arr) {
//     int n = arr.size();
//     vector<int> ans(n);
//     stack<int> st;

//     for (int i = n - 1; i >= 0; i--) {

//         // Remove elements >= current
//         while (!st.empty() && st.top() >= arr[i]) {
//             st.pop();
//         }

//         // If stack empty → no smaller element
//         if (st.empty()) ans[i] = -1;
//         else ans[i] = st.top();

//         // Push current element
//         st.push(arr[i]);
//     }

//     return ans;
// }

// int main() {
//     vector<int> arr = {2, 1, 4, 3};

//     vector<int> res = nextSmallerElement(arr);

//     for (int x : res) cout << x << " ";
// }


// Time Complexity: O(n)
// Space Complexity: O(n) (for the stack and the answer vector)