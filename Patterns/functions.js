// If our function is not returning anything then we use void 

// // program to find a number is prime or not 
// #include <iostream>
// using namespace std;

// bool isPrime(int n){
    
//     if(n <= 1) return false;  // 0 and 1 are not prime
    
//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
    
//     return true;
// }

// int main() {
    
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
    
//     if (isPrime(n)){
//         cout << "Is a Prime Number";
//     }
//     else{
//         cout << "Not a Prime Number";
//     }

//     return 0;
// }



// Program to find the nth term of the Arithmetic Progession 
// #include <iostream>
// using namespace std;

// int AP(int n){
//     int ans = 3*n+7;
//     return ans;
// }
  
// int main() {
   
//      int n;
//      cout<< "Enter the number ";
//      cin>>n;
//      AP(n);
//      cout<<"AP of given number is"<<AP(n);
   

//     return 0;
    
// }


// Program to find the count of Setbits

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int countSetBits(int n){
//     int count =0;
//     while(n>0){
//     if(n&1){
//         count ++ ;
//     }
//     n = n >> 1;
//     }
//     return count;
// }
  
// int main() {
   
//     int a,b;
//     cout<< "Enter the number a";
//     cin>>a;
//     cout<< "Enter the number b";
//     cin>>b;
    
//     int total = countSetBits(a) + countSetBits(b);
//     cout<<"Total number of setbits is "<<total;
    
    
    

//     return 0;
    
// }



// fibonacci series number 

// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if(n <= 1)
//         return n;

//     int a = 0, b = 1, next;

//     for(int i = 2; i <= n; i++) {
//         next = a + b;
//         a = b;
//         b = next;
//     }

//     return b;
// }

// int main() {
//     int n;
//     cout << "Enter position: ";
//     cin >> n;

//     cout << "Fibonacci number is: " << fibonacci(n);

//     return 0;
// }