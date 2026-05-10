// #include <bits/stdc++.h>
// using namespace std;

// class NStack {
//     int n, s;

//     int *arr;
//     int *top;
//     int *next;

//     int freeSpot;

// public:

//     NStack(int N, int S) {
//         n = N;
//         s = S;

//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];

//         // Initialize top
//         for (int i = 0; i < n; i++) {
//             top[i] = -1;
//         }

//         // Initialize next
//         for (int i = 0; i < s - 1; i++) {
//             next[i] = i + 1;
//         }

//         next[s - 1] = -1;

//         freeSpot = 0;
//     }

//     // Push x into mth stack
//     bool push(int x, int m) {

//         // Overflow
//         if (freeSpot == -1) {
//             return false;
//         }

//         // Find free index
//         int index = freeSpot;

//         // Update freeSpot
//         freeSpot = next[index];

//         // Insert element
//         arr[index] = x;

//         // Link new element to previous top
//         next[index] = top[m - 1];

//         // Update top
//         top[m - 1] = index;

//         return true;
//     }

//     // Pop from mth stack
//     int pop(int m) {

//         // Underflow
//         if (top[m - 1] == -1) {
//             return -1;
//         }

//         int index = top[m - 1];

//         // Update top
//         top[m - 1] = next[index];

//         // Add index back to free list
//         next[index] = freeSpot;

//         freeSpot = index;

//         return arr[index];
//     }
// };

// int main() {

//     NStack st(3, 10);

//     st.push(10, 1);
//     st.push(20, 1);

//     st.push(30, 2);

//     cout << st.pop(1) << endl;
//     cout << st.pop(2) << endl;
// }