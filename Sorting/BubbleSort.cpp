// Bubble Sort
// in bubble sort we palced the largest element at the end of the array in each iteration
// space complexity: O(1)
// time complexity: O(n^2)
// best case time complexity: O(n) when the array is already sorted
// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n){
//  for(int i = 0; i < n-1; i++) {
//      for(int j = 0; j < n-i-1; j++){
//        if(arr[j] > arr[j+1]){
//            swap(arr[j],arr[j+1]);
//        }
//      }
//  }
// }
  
// int main() {
//     int arr[]= {64, 25, 12, 22, 11};
//     int n = 5;
//     bubbleSort(arr, n);
//     for(int i = 0; i < n; i++){
//      cout<<arr[i]<<" ";
//     }
    
//     cout<<"I want to learn AI and ML";
//     return 0;
// }