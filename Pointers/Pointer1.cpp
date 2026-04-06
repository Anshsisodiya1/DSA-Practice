// pointers in c++ are a variable that stores the address of another variable
// pointers are used to access the memory address of a variable
// pointers are used to pass the address of a variable to a function

// #include <iostream>
// using namespace std;
// int main() {
   
//    int num = 5;
//    int a = num;
//    cout<<"before"<<num<<endl;
//    a++;
//    cout<<"after"<<num<<endl;
//    int *p = &num;
//    // printing value
//    cout<<num<<endl;
//    // printing adderss 
//    cout<<&num<<endl;
//    (*p)++;
//    cout<<"After increment"<<" "<<num<<endl;
   
//    // copying a pointer
   
//    int *q = p;
//    cout<< q <<"--" <<endl;
//    cout<< *p << "--" <<endl;

//     return 0;
// }




// demonstrating pointer arithmetic in C++ — specifically how pointers move in memory.

// #include <iostream>
// using namespace std;
// int main() {
   
//    int arr[10];
//    cout<< arr << endl;
//    // Error -- w
// //   arr = arr + 1;
//   int *ptr = &arr[0];
//   cout<<"befor" <<" "<<  ptr << endl;
//   ptr = ptr + 1;
//   cout<<"after"<<" " << ptr << endl;

//     return 0;
// }