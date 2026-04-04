// binary Search
// it will only work for monotonic function menas digits are arranges in ascending or descending order 1
// in this first we find mid value and then compare it with key then search accordingly 
// complexity of binary search is O(log n) and space complexity is O(1) for iterative approach and O(log n) for recursive approach

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }

//         if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return -1;
// }

// int main() {
//    int even[6] = {2,4,6,8,10,12};
//    int odd[5] = {3,8,11,14,16};

//    int index = binarySearch(odd, 5, 14);
//    cout<<"Index of 14 is "<<index<<endl;

//    return 0;
// }




/// finding first and last occurence of a number in sorted array using binary search
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
 
//  int firstOccur(int arr[], int n, int key){
//      int start = 0;
//      int end = n - 1;
//      int ans = -1;
//      int mid = start + (end - start)/2;
     
//      while(start<=end){
//          if(arr[mid] == key){
//              ans = mid;
//              end = mid - 1;
//          }
//          else if(key>arr[mid]){// for right side
//              start = mid + 1;
//          }
//          else if(key<arr[mid]){// for left side
//              end = mid - 1 ;
//          }
//          mid = start + (end - start)/2;
//      }
//      return ans;
//  }
 
//   int lastOccur(int arr[], int n, int key){
//      int start = 0;
//      int end = n - 1;
//      int ans = -1;
//      int mid = start + (end - start)/2;
     
//      while(start<=end){
//          if(arr[mid] == key){
//              ans = mid;
//              start = mid + 1;
//          }
//          else if(key>arr[mid]){// for right side
//              start = mid + 1;
//          }
//          else if(key<arr[mid]){// for left side
//              end = mid - 1 ;
//          }
//          mid = start + (end - start)/2;
//      }
//      return ans;
//  }
 
// int main() {
 
//  int even[5] = {1,2,3,3,4};
//  cout<<"First Occurence of 3 is"<<firstOccur(even,5,3) <<endl;
//  cout<<"last Occurence of 3 is"<<lastOccur(even,5,3) <<endl;
 

//     return 0;
// }



// frinding peak element from mountain array using binary search

// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
 
//  int peakElement(int arr[], int n){
//      int start = 0;
//      int end = n - 1;
     
//      while(start<end){
//             int mid = start + (end - start)/2;
            
//            if(arr[mid]<arr[mid + 1]){
//              start = mid + 1;  // to right 
//          }
//          else{
//              end = mid;  // to left 
//          }
//      }
//      return start;
//  }

// int main() {
    
//     int arr[7] = {1,2,3,5,6,8,5};
//    int Peak = peakElement(arr, 7);
//    cout<<"Index of Peak Element"<<Peak<<endl;
//    cout<<"Peak Element is "<<arr[Peak]<<endl;

//     return 0;
// }

// // find pivot element in rotated sorted array using binary search
// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n) {
//     int s = 0, e = n - 1;

//     while (s < e) {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] >= arr[0]) {
//             s = mid + 1;   // right side
//         } else {
//             e = mid;       // left side
//         }
//     }
//     return s;
// }

// int main() {
//     int arr[7] = {4,5,6,7,0,1,2};  
    
//     int pivot = getPivot(arr, 7);
    
//     cout << "Pivot index = " << pivot << endl;
//     cout << "Pivot value = " << arr[pivot] << endl;

//     return 0;
// }


// find the square root of a number using binary search
// #include <iostream>
// using namespace std;

// int binarySearch(int n){
//     int s = 0;
//     int e = n;
//     int ans = -1;
    
//     while(s <= e){
//         int mid = s + (e - s)/2;
        
//         long long square = mid * mid;  // fix overflow
        
//         if(square == n){
//             return mid;
//         }
//         else if(square < n){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int ans = binarySearch(n);
//     cout << "Square root = " << ans;

//     return 0;
// }



// Book Allocation Problem using binary search

// #include <iostream>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i = 0; i < n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         } 
//         else {
//             studentCount++;

//             if(studentCount > m || arr[i] > mid) {
//                 return false;
//             }

//             pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int allocateBooks(int arr[], int n, int m) {
//     int s = 0;
//     int sum = 0;

//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     int e = sum;
//     int ans = -1;

//     while(s <= e) {
//         int mid = s + (e - s) / 2;

//         if(isPossible(arr, n, m, mid)) {
//             ans = mid;
//             e = mid - 1; // try smaller answer
//         } 
//         else {
//             s = mid + 1; // increase pages
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40};
//     int n = 4;
//     int m = 2;

//     cout << "Minimum pages: " << allocateBooks(arr, n, m);

//     return 0;
// }


// Painters Partition Problem using binary search

// #include <iostream>
// using namespace std;

// bool possibleTime(int arr[], int n, int m, int mid){
//     int painterCount = 1;
//     int paintSum = 0;

//     for(int i = 0; i < n; i++){
//         if(paintSum + arr[i] <= mid){
//             paintSum += arr[i];
//         }
//         else{
//             painterCount++;

//             if(painterCount > m || arr[i] > mid){
//                 return false;
//             }

//             paintSum = arr[i];
//         }
//     }
//     return true;
// }

// int allocateTime(int arr[], int n, int m){
//     int sum = 0;
//     int start = 0;

//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }

//     int end = sum;
//     int ans = -1;

//     while(start <= end){
//         int mid = start + (end - start)/2;

//         if(possibleTime(arr, n, m, mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {5, 5, 5, 5};
//     int n = 4;
//     int m = 2;

//     cout << "Minimum Time: " << allocateTime(arr,n,m);

//     return 0;
// }



// Agressive cows problem using binary search

