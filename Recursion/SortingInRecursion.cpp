// bubble sort using recursion

// #include <iostream>
// using namespace std;

// void sortArray(int *arr, int n){
//     //base case
//     if(n == 0 || n == 1){
//         return;
//     }
//     for(int i = 0; i < n-1; i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     sortArray(arr, n-1);
// }

// int main() {

//     int arr[] = {5,4,3,2,1};
//     int n = 5;
    
//     sortArray(arr,5);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
// }




// --------------------------------------------------------------Merge sort using recursion

// #include <iostream>
// using namespace std;

// void merge(int *arr, int start, int end){
//     int mid = start + (end - start)/2;
    
//     int len1 = mid - start + 1;
//     int len2 = end - mid;
    
//     int *first = new int[len1];
//     int *second = new int[len2];
    
//     int mainArrayIndex = start;
//     for(int i = 0; i < len1; i++){
//         first[i] = arr[mainArrayIndex++];
//     }
    
//     int k = mid + 1;
//     for(int i = 0; i < len2; i++){
//         second[i] = arr[k++];
//     }
    
//     // merge
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = start;
    
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[mainArrayIndex++] = first[index1++];
//         } else {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }
    
//     while(index1 < len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }
    
//     while(index2 < len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }
    
//     delete []first;
//     delete []second;
// }

// void mergeSort(int *arr, int start, int end){
//     if(start >= end){
//         return;
//     }
    
//     int mid = start + (end - start)/2;
    
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid+1, end);
    
//     merge(arr, start, end);
// }

// int main() {
//     int arr[5] = {3, 8, 9, 2, 1};
//     int n = 5;
    
//     mergeSort(arr, 0, n-1);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// -------------------------------------- Quick sort using recursion
// quick sort is  a divide and conquer algorithm which is used to sort the array in place. It is a very efficient sorting algorithm and is widely used in practice. The basic idea of quick sort is to select a pivot element from the array and partition the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.


// #include <iostream>
// using namespace std;

// int partition( int *arr, int s, int e){
//     int pivot = arr[s];
    
//     int count = 0;
//     for(int i = s+1; i<=e; i++){
//         if(arr[i] <= pivot){
//             count++;
//         }
//     }
//     // place pivot to right place
//     int pivotIndex = s + count;
//     swap(arr[pivotIndex], arr[s]);
    
//     int i = s, j = e;
//     while(i < pivotIndex && j > pivotIndex){
//         while(arr[i] < pivot){
//             i++;
//         }
        
//         if(i < pivotIndex && j > pivotIndex){
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotIndex;
// }

// void quickSort( int *arr, int s, int e){
//     //base case
//     if(s>=e){
//         return;
//     }
//     // partion
//     int p = partition(arr, s, e);
//     // left part sort
//     quickSort(arr, s, p-1);
//     //right part sort
//     quickSort(arr, p+1, e);
// }

// int main() {

//    int arr[5] = {3,8,9,2,1};
//    int n = 5;
   
//    quickSort(arr, 0, n-1);
//    for(int i = 0; i < n; i++){
//        cout<<arr[i]<<" ";
//    }

//     return 0;
// }




// ------------------------------------- Phone keypad problem using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(string digits, string output, int index, vector<string> &ans, string mapping[]) {
//     // base case
//     if(index >= digits.length()) {
//         ans.push_back(output);
//         return;
//     }

//     int number = digits[index] - '0';
//     string value = mapping[number];

//     for(int i = 0; i < value.length(); i++) {
//         output.push_back(value[i]);
//         solve(digits, output, index + 1, ans, mapping);
//         output.pop_back(); // backtrack
//     }
// }

// int main() {
//     string digits = "233";

//     vector<string> ans;

//     if(digits.length() == 0) {
//         return 0;
//     }

//     string mapping[10] = {
//         "", "", "abc", "def", "ghi",
//         "jkl", "mno", "pqrs", "tuv", "wxyz"
//     };

//     string output = "";
//     int index = 0;

//     solve(digits, output, index, ans, mapping);

//     // print answer
//     for(auto i : ans) {
//         cout << i << " ";
//     }

//     return 0;
// }


// -------------------------------------- Permutations of a string using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(string str, int Index){
//     //base case
//     if(Index >= str.length()){
//         cout<<str<<endl;
//         return;
//     }
//     for(int i = 0; i < str.length(); i++){
//         swap(str[Index],str[i]); //swap
//         solve(str, Index + 1); // recursive call
//         swap(str[Index],str[i]);// backtrack
        
//     }
// }

// int main() {
//      string str = "abc";
//      solve(str, 0);

//     return 0;
// }






//   ------------------- Rate in a Maze Problem using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSafe(int x, int y, vector<vector<int>> &m, int n, vector<vector<bool>> &visited){
//     if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y] == 1 && visited[x][y] == false){
//         return true;
//     }
//     return false;
// }

// void solve(vector<vector<int>> &m, int x, int y, int n,
//            vector<vector<bool>> &visited, string path, vector<string> &ans ){
    
//     // base case 
//     if(x == n-1 && y == n-1){
//         ans.push_back(path);
//         return;
//     }
    
//     visited[x][y] = true;

//     // Down
//     if(isSafe(x+1, y, m, n, visited)){
//         solve(m, x+1, y, n, visited, path + 'D', ans);
//     }
    
//     // Left
//     if(isSafe(x, y-1, m, n, visited)){
//         solve(m, x, y-1, n, visited, path + 'L', ans);
//     }

//     // Right
//     if(isSafe(x, y+1, m, n, visited)){
//         solve(m, x, y+1, n, visited, path + 'R', ans);
//     }

//     // Up
//     if(isSafe(x-1, y, m, n, visited)){
//         solve(m, x-1, y, n, visited, path + 'U', ans);
//     }

//     // backtrack
//     visited[x][y] = false;
// }

// int main() {
    
//     vector<vector<int>> maze = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     int n = maze.size();
//     vector<string> ans;

//     vector<vector<bool>> visited(n, vector<bool>(n, false));
    
//     if (maze[0][0] == 1){
//         solve(maze, 0, 0, n, visited, "", ans);
//     }
    
//     for(string path : ans){
//         cout << path << endl;
//     }

//     return 0;
// }


