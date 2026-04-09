// you are given an string in input you have to give reverse of string  using recursion

// #include <iostream>
// using namespace std;

// void reverse(string& str, int i, int j){
//     // base case
//     if(i>j){
//         return ;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;
    
//     // Recursive call
//     reverse(str,i,j);
    
// }

// int main() {

//     string name = "sisodiya";
//     reverse(name, 0, name.length()-1);
//     cout<<name<<endl;
//     return 0;
// }


// check palindrome or not using recursion

// #include <iostream>
// using namespace std;

// bool checkPalindrome(string str, int i, int j){
//     //base case
//     if(i>=j)
//     return true;
    
//     if(str[i] != str[j]){
//         return false;
//     }else{
//         return checkPalindrome(str, i+1, j-1);
//     }
// }

// int main() {

//     string name = "abbad";
//     cout<<endl;
//     bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
//     if(isPalindrome){
//         cout<<"String is Palindrome";
//     }else{
//         cout<<"String is not Plaindrome";
//     }
    
// }

// find the power of a number using recursion

// #include <iostream>
// using namespace std;

// int power(int a, int b){
//     //base case
//     if(b == 0){
//         return 1;
//     }
//     if(b == 1){
//         return a;
//     }
    
//     // recursive call
//     int ans = power(a,b/2);
//     // if b is even
//     if(b%2 == 0){
//         return ans*ans;
//     }else{
//         // b is odd
//         return a * ans * ans;
//     }
// }

// int main() {

// int a,b;
// cout<<"enter a and b";
// cin>>a>>b;
// cout<<endl;
// cout<<"Answer is"<<power(a,b);
    
// }


