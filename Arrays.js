// Array is a type of data structure that can hold a fixed number of values of the same type
// In JavaScript, arrays are dynamic and can hold values of different types


// Print the sum of the given array

// int getSum(int arr[],int n){
//         int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

    
//    int size;
//    cout<<"Enter the size of array";
//    cin>>size;
//    int arr[100];
//    cout<<"Enter"<<size<<"elements:/n";
//    for(int i=0; i<size; i++){
//        cin>>arr[i];
//    }
//    int result = getSum(arr, size);
//    cout<<"sum is"<<result;

//     return 0;
// }


///---------------------------------------------------- reverse array

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;
      
//      while(start<=end){
//          swap(arr[start],arr[end]);
//          start ++;
//          end --;
//      }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }

// int main() {
 
//     int arr[6] = {1,2,3,4,5,6};
//     int brr[5] = {1,2,3,4,5};
    
    
//     reverse(arr,6);
//     reverse(brr,5);
    
//     printArray(arr,6);
//     printArray(brr,5);
    
//     return 0;
// }




////////////////////////////////////////////////// Linear Search


// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main() {
//     int arr[5] = {2,4,6,8,10};
//    int key;
//    cout<<"Enter the value to be searched";
//    cin>>key;
//    bool found = search(arr,10,key);
//    if(found){
//        cout<<"Element is Present";
//    }
//    else{
//        cout<<"Not Present";
//    }

//     return 0;
// }



// Swap Alternate Elements

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i] <<"";
//     }
//     cout<<endl;
// }

// void swapAlternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1 < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main() {
   
//    int even[6] = {1,2,3,4,5,6};
//    int odd[5] = {1,2,3,4,5};
//    swapAlternate(even,6);
//    printArray(even,6);
//       swapAlternate(odd,5);
//    printArray(odd,5);
   

//     return 0;
// }

//// find unique number in an array

//    int arr[5] = {1,1,2,3,2};
//    int size = 5;
//  int ans = 0;
//  for(int i = 0; i<size; i++){
//      ans = ans^arr[i];
//  }
//  cout<<ans;