// // largest araer in rectunglar  histogram

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> nextSmaller(vector<int> &arr, int n) {
//     vector<int> ans(n);
//     stack<int> st;

//     for (int i = n - 1; i >= 0; i--) {
//         while (!st.empty() && arr[st.top()] >= arr[i]) {
//             st.pop();
//         }
//         ans[i] = st.empty() ? n : st.top();
//         st.push(i);
//     }
//     return ans;
// }

// vector<int> prevSmaller(vector<int> &arr, int n) {
//     vector<int> ans(n);
//     stack<int> st;

//     for (int i = 0; i < n; i++) {
//         while (!st.empty() && arr[st.top()] >= arr[i]) {
//             st.pop();
//         }
//         ans[i] = st.empty() ? -1 : st.top();
//         st.push(i);
//     }
//     return ans;
// }

// int largestRectangleArea(vector<int> &heights) {
//     int n = heights.size();

//     vector<int> next = nextSmaller(heights, n);
//     vector<int> prev = prevSmaller(heights, n);

//     int maxArea = 0;

//     for (int i = 0; i < n; i++) {
//         int height = heights[i];
//         int width = next[i] - prev[i] - 1;

//         int area = height * width;
//         maxArea = max(maxArea, area);
//     }

//     return maxArea;
// }

// int main() {
//     vector<int> arr = {2, 1, 5, 6, 2, 3};
//     cout << largestRectangleArea(arr);
// }

