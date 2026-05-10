// // Max rectaqngle in binary matrix with all 1s

// #include <bits/stdc++.h>
// using namespace std;

// // Largest Rectangle in Histogram
// int largestHistogramArea(vector<int> &heights) {
//     int n = heights.size();

//     stack<int> st;
//     int maxArea = 0;

//     for (int i = 0; i <= n; i++) {

//         while (!st.empty() &&
//               (i == n || heights[st.top()] >= heights[i])) {

//             int height = heights[st.top()];
//             st.pop();

//             int right = i;

//             int left;
//             if (st.empty())
//                 left = -1;
//             else
//                 left = st.top();

//             int width = right - left - 1;

//             maxArea = max(maxArea, height * width);
//         }

//         st.push(i);
//     }

//     return maxArea;
// }

// // Max rectangle in binary matrix
// int maximalRectangle(vector<vector<int>> &matrix) {

//     if (matrix.empty()) return 0;

//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     vector<int> heights(cols, 0);

//     int maxArea = 0;

//     for (int i = 0; i < rows; i++) {

//         // Build histogram
//         for (int j = 0; j < cols; j++) {

//             if (matrix[i][j] == 1)
//                 heights[j] += 1;
//             else
//                 heights[j] = 0;
//         }

//         // Find largest histogram area
//         maxArea = max(maxArea,
//                      largestHistogramArea(heights));
//     }

//     return maxArea;
// }

// int main() {

//     vector<vector<int>> matrix = {
//         {1,0,1,0,0},
//         {1,0,1,1,1},
//         {1,1,1,1,1},
//         {1,0,0,1,0}
//     };

//     cout << maximalRectangle(matrix);
// }