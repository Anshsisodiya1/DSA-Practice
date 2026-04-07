// when a function calls itself, it is called recursion.
// it is a powerful tool for solving problems that can be broken down into smaller, similar subproblems.
// a recursive function typically has two main components: a base case that stops the recursion, and a recursive case that breaks the problem into smaller subproblems and calls itself.

// example 1 --------------------
// #include <iostream>
// using namespace std;

// int factorial(int n){
    
//     // base case
//     if(n == 0)
//       return 1;
      
//    return n * factorial(n-1);
// }

// int main() {
    
//    int n;
//    cout<<"Enter the value";
//    cin>>n;
//    int ans = factorial(n);
//    cout<<ans;
   
//     return 0;
// }


// example 2 ----------------

// #include <iostream>
// using namespace std;

// void print(int n){
//     // base case
//     if(n == 0){
//         return;
//     }
    
//     cout << n << endl;
    
//     // recursive call
//     print(n - 1);
// }

// int main() {
//     int n;
    
//     cout << "Enter the value: ";
//     cin >> n;
    
//     cout << endl;
    
//     print(n);
    
//     return 0;
// }




