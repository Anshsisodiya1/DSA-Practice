// Recursion and binary search 

// you are given an array  create a function that tell array is sorted or not using recursion

//  #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int size){
//     base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1] )
//         return false;
//     else{
//         bool remainingPart = isSorted(arr+1, size - 1);
//         return remainingPart;
//     }
// }

// int main() {
//   int arr[5] = {2,4,6,8,9};
//   int size = 5;
  
//   bool ans = isSorted(arr, size);
//    if(ans){
//        cout<<"Array is sorted"<<endl;
//    }
//    else{
//        cout<<"Array is not sorted"<<endl;
//    }
//     return 0;
// }

// you were given an array in input give sum of array using recursion

// #include <iostream>
// using namespace std;

// int getSum( int *arr, int size){
//     // base case
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }
    
//     int remainingPart = getSum(arr + 1, size - 1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main() {
//   int arr[5] = {2,4,6,8,9};
//   int size = 5;
  
//   int sum = getSum(arr, size);
//    cout<<"Sum is"<<sum<<endl;

//     return 0;
// }


// you are given an array and in that array find the element using recursion via linear search 

// #include <iostream>
// using namespace std;

// bool linearSearch(int arr[], int size, int key){
//     // base case
//     if(size == 0){
//         return false;
//     }
//     if(arr[0] == key){
//         return true;
//     }else{
//         bool remainingPart = linearSearch(arr+1, size-1, key);
//         return remainingPart;
//     }
// }
// int main() {
//   int arr[5] = {2,4,6,8,9};
//   int size = 5;
//   int key = 8;
  
//   bool ans =  linearSearch(arr, size, key);
//   if(ans){
//       cout<<"Element Found"<<endl;
//   }else{
//       cout<<"Element not found";
//   }

//     return 0;
// }



// find element using recursion via binary search

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int start, int end, int key){
//     //base case
//     if(start>end){
//         return false;
//     }
//     int mid = start + (end - start)/2;
    
//     if(arr[mid == key]){
//         return true;
//     }
    
//     if(arr[mid] < key){
//         return binarySearch(arr, mid+1, end, key);
//     }else{
//         return binarySearch(arr,start, mid-1, key);
//     }
// }
// int main() {
//   int arr[5] = {2,4,6,8,9};
//   int size = 5;
//   int key = 8;
  
//   cout<<"Present or not"<<binarySearch(arr,0,4,key)<<endl;

//     return 0;
// }