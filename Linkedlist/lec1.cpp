// it is a linear data structure which is used to store the data in a linear way
// it is a collection of nodes where each node contains data and a pointer to the next node
// it is a dynamic data structure which means that it can grow and shrink in size at runtime
// it is a non-contiguous data structure which means that the elements are not stored in contiguous memory locations
// it is a self-referential data structure which means that it contains a pointer to itself

// why ?? it is used to store the data in a linear way
// it is used to implement other data structures like stacks, queues, etc.
// it is used to implement dynamic memory allocation

// Types of linked list
// 1. Singly linked list   
   
// 2. Doubly linked list
// 3. Circular linked list





// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List() {
//         head = tail = NULL;
//     }

//     //  Insert at front
//     void push_front(int val) {
//         Node* newNode = new Node(val);

//         if (head == NULL) {
//             head = tail = newNode;
//             return;
//         }

//         newNode->next = head;
//         head = newNode;
//     }

//     // Insert at back
//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     //  Delete from front
//     void pop_front() {
//         if (head == NULL) {
//             cout << "LL is Empty\n";
//             return;
//         }

//         Node* temp = head;
//         head = head->next;

//         if (head == NULL) tail = NULL;  //  important

//         delete temp;
//     }

//     // Delete from back
//     void pop_back() {
//         if (head == NULL) {
//             cout << "LL is Empty\n";
//             return;
//         }

//         //  single node case
//         if (head == tail) {
//             delete head;
//             head = tail = NULL;
//             return;
//         }

//         Node* temp = head;
//         while (temp->next != tail) {
//             temp = temp->next;
//         }

//         delete tail;
//         tail = temp;
//         tail->next = NULL;
//     }

//     //  Insert at position
//     void insert(int val, int pos) {
//         if (pos < 0) {
//             cout << "Invalid Position\n";
//             return;
//         }

//         if (pos == 0) {
//             push_front(val);
//             return;
//         }

//         Node* temp = head;

//         for (int i = 0; i < pos - 1; i++) {
//             if (temp == NULL) {
//                 cout << "Position out of bounds\n";
//                 return;
//             }
//             temp = temp->next;
//         }

//         Node* newNode = new Node(val);

//         newNode->next = temp->next;
//         temp->next = newNode;

//         // if inserted at last, update tail
//         if (newNode->next == NULL) {
//             tail = newNode;
//         }
//     }
    
//     // search 
//     int search(int key){
//         Node* temp = head;
//         int idx = 0;
        
//         while(temp != NULL){
//             if(temp->data == key){
//                 return idx;
//             }
//             temp = temp->next;
//             idx++;
//         }
//         return -1;
//     }

//     // 🔹 Print list
//     void printll() {
//         Node* temp = head;

//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.push_back(5);
//     ll.push_back(4);

//     ll.pop_front();
//     ll.pop_back();
//     ll.insert(4, 0);
    
//     ll.printll();
//     cout<<ll.search(4)<<"th index"<<endl;
//     return 0;
// }