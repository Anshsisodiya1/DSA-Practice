 // char pointers are used to store the address of a character variable
 // char pointers are used to access the memory address of a character variable
 // char pointers are used to pass the address of a character variable to a function
 

 // cout function will work differently implemented for int and char array in pointers 

// #include <iostream>
// using namespace std;
// int main() {
   
//     int arr[5] = {1,2,3,4,5};
//     char ch[6] = {"abcde"};
//     cout<< arr << endl;
//     cout<< ch << endl;
//     // creating pointer
//     char *c = &ch[0];
//     // print entire string
//     cout<< c << endl;
//     return 0;
// }

// passing function in a pointer 

// #include <iostream>
// using namespace std;

// void print(int *p){
//      cout << *p << endl;
// }

// void update(int *p){
//     *p = *p + 1;
// }
// int main() {
    
//     int value = 5;
   
//     int *p = &value;
    
//     print(p);
//     cout<< "Before" << *p << endl;
//     update(p);
//     cout << "After" << *p << endl;
   
//     return 0;
// }

