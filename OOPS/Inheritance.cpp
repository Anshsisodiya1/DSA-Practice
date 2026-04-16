// Inheritance is a process of creating a new class from an existing class. 
// The new class inherits the properties and methods of the existing class.
// Inheritance is used to reuse the code and to avoid code duplication.

// #include <iostream>
// using namespace std;

// class Human{
//     public:
//     int height;
//     int weight;
//     int age;
    
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setWeight(int w){
//         this->weight = w;
//     }
// };

// class Male: public Human {
//      public:
//      string color;
//      void sleep(){
//          cout<<"Male is sleeping";
//      }
// };

// int main() {

//     Male object1;
//     cout<<object1.age<<endl;
//     cout<<object1.weight<<endl;
//     cout<<object1.height<<endl;
//     cout<<object1.color<<endl;
//     object1.sleep();

//     return 0;
// }


// Multiple Inheritance
// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     int weight;
//     void bark(){
//          cout<<"Speaking"<<endl;
//     }
// };
// class Human{
//     public:
//     int weight;
//     void Speak(){
//         cout<<"Barking"<<endl;
//     }
// };

// // Multiple Inheritence
//  class hybrid: public Animal, public Human{
     
//  };

// int main() {

// hybrid obj1;
// obj1.Speak();
// obj1.bark();
//     return 0;
// }



// hierarchical Inheritance
// one parent class and multiple child class

// #include <iostream>
// using namespace std;

// class A{
//     public:
//    void func1(){
//        cout<<"Inside Function 1";
//    }  
// };

// class B: public A{
//       public:
//    void func2(){
//        cout<<"Inside Function 2";
//    } 
// };

// class C: public A{
//       public:
//    void func3(){
//        cout<<"Inside Function 3";
//    } 
// };

// int main() {

// A obj1;
// obj1.func1();
// B obj2;
// obj2.func2();
// C obj3;
// obj3.func3();
//     return 0;
// }



// Hybrid Inheritance
 // combination of multiple and hierarchical inheritance