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

//     // dCreate cycle (for testing)
//     void createCycle(int pos) {
//         Node* temp = head;
//         Node* cycleNode = NULL;
//         int count = 0;

//         while (temp->next != NULL) {
//             if (count == pos) {
//                 cycleNode = temp;
//             }
//             temp = temp->next;
//             count++;
//         }

//         temp->next = cycleNode;  // create loop
//     }

//     //  Detect cycle
//     bool detectCycle() {
//         Node* slow = head;
//         Node* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 return true;
//             }
//         }
//         return false;
//     }

//     // Remove cycle
//     void removeCycle() {
//         Node* slow = head;
//         Node* fast = head;

//         // Step 1: Detect cycle
//         bool hasCycle = false;
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 hasCycle = true;
//                 break;
//             }
//         }

//         if (!hasCycle) {
//             cout << "No cycle found\n";
//             return;
//         }

//         // Step 2: Find start of cycle
//         slow = head;

//         Node* prev = NULL;  // to break the cycle

//         while (slow != fast) {
//             prev = fast;
//             slow = slow->next;
//             fast = fast->next;
//         }

//         // Step 3: Break the cycle
//         prev->next = NULL;
//         tail = prev;

//         cout << "Cycle removed\n";
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

//     ll.push_back(1);
//     ll.push_back(2);
//     ll.push_back(3);
//     ll.push_back(4);
//     ll.push_back(5);

//     // Create cycle at position 2 (node with value 3)
//     ll.createCycle(2);

//     if (ll.detectCycle()) {
//         cout << "Cycle detected\n";
//     } else {
//         cout << "No cycle\n";
//     }

//     ll.removeCycle();

//     // Now safe to print
//     ll.printll();

//     return 0;
// }