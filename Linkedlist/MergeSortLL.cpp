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

// // 🔹 Find Middle
// Node* getMid(Node* head) {
//     Node* slow = head;
//     Node* fast = head->next; // important for split

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }

// // 🔹 Merge two sorted lists
// Node* merge(Node* left, Node* right) {
//     Node* dummy = new Node(-1);
//     Node* temp = dummy;

//     while (left != NULL && right != NULL) {
//         if (left->data <= right->data) {
//             temp->next = left;
//             left = left->next;
//         } else {
//             temp->next = right;
//             right = right->next;
//         }
//         temp = temp->next;
//     }

//     if (left != NULL) temp->next = left;
//     else temp->next = right;

//     return dummy->next;
// }

// // 🔥 Merge Sort
// Node* mergeSort(Node* head) {
//     // Base case
//     if (head == NULL || head->next == NULL) {
//         return head;
//     }

//     // Step 1: find mid
//     Node* mid = getMid(head);
//     Node* rightHead = mid->next;
//     mid->next = NULL;  // split

//     // Step 2: recursive sort
//     Node* left = mergeSort(head);
//     Node* right = mergeSort(rightHead);

//     // Step 3: merge
//     return merge(left, right);
// }

// // Helper: print list
// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Unsorted list: 4 → 2 → 1 → 3
//     Node* head = new Node(4);
//     head->next = new Node(2);
//     head->next->next = new Node(1);
//     head->next->next->next = new Node(3);

//     cout << "Before: ";
//     printList(head);

//     head = mergeSort(head);

//     cout << "After: ";
//     printList(head);

//     return 0;
// }