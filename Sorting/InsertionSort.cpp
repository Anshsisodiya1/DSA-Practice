// it is stable and adaptable algorithm 
// time complexity is O(n^2) in worst case and O(n) in best case when array is already sorted
// space complexity is O(1) as it is an in-place sorting algorithm



//  #include <iostream>
// using namespace std;
// void insertionSort(int arr[], int n){
//     for(int i = 1; i<n; i++){
//         int key = arr[i];
//         int j = i - 1;
//         // shift 
//         while(j >= 0 && arr[j] > key){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         // insert at correct position
//         arr[j+1] = key;
//     }
// }

// int main() {
//     int arr[] = {8, 22, 7, 9, 31, 5, 13};
//     int n = 7;
//         insertionSort(arr, n);
//            for(int i = 0; i<n; i++){
//                cout<<arr[i]<<" ";
//            }

//     return 0;
// }