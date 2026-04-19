// we are solve this using slow fast pointer approach
//  space complexity is O(1) and time complexity is O(n)


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

//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     // Find Middle (handles both even & odd)
//     void findMiddle() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }

//         Node* slow = head;
//         Node* fast = head;
//         Node* prev = NULL;  // track previous of slow

//         while (fast != NULL && fast->next != NULL) {
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         //  Case 1: Odd length
//         if (fast != NULL) {
//             cout << "Middle Element (Odd): " << slow->data << endl;
//         }
//         // Case 2: Even length
//         else {
//             cout << "First Middle: " << prev->data << endl;
//             cout << "Second Middle: " << slow->data << endl;
//         }
//     }

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

//     //  Try Odd Case
//     ll.push_back(1);
//     ll.push_back(2);
//     ll.push_back(3);
//     ll.push_back(4);
//     ll.push_back(5);
//     // ll.push_back(6);

//     ll.printll();
//     ll.findMiddle();

//     return 0;
// }