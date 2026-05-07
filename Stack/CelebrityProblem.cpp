// #include <bits/stdc++.h>
// using namespace std;

// int celebrity(vector<vector<int>> &M, int n) {
//     int a = 0;
//     int b = n - 1;

//     // Step 1: find potential candidate
//     while (a < b) {
//         if (M[a][b] == 1) {
//             // a knows b → a cannot be celebrity
//             a++;
//         } else {
//             // a does NOT know b → b cannot be celebrity
//             b--;
//         }
//     }

//     int candidate = a;

//     // Step 2: verify candidate
//     for (int i = 0; i < n; i++) {
//         if (i != candidate) {
//             if (M[candidate][i] == 1 || M[i][candidate] == 0) {
//                 return -1;
//             }
//         }
//     }

//     return candidate;
// }

// int main() {
//     vector<vector<int>> M = {
//         {0, 1, 1},
//         {0, 0, 1},
//         {0, 0, 0}
//     };

//     cout << celebrity(M, 3);
// }