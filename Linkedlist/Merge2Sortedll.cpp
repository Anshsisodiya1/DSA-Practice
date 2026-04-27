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

// // Recursive Merge Function
// Node* mergeRec(Node* h1, Node* h2) {
//     // Base cases
//     if (h1 == NULL) return h2;
//     if (h2 == NULL) return h1;

//     // Choose smaller node
//     if (h1->data <= h2->data) {
//         h1->next = mergeRec(h1->next, h2);
//         return h1;
//     } else {
//         h2->next = mergeRec(h1, h2->next);
//         return h2;
//     }
// }

// // Helper: Print list
// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     // List 1: 1 → 3 → 5
//     Node* head1 = new Node(1);
//     head1->next = new Node(3);
//     head1->next->next = new Node(5);

//     // List 2: 2 → 4 → 6
//     Node* head2 = new Node(2);
//     head2->next = new Node(4);
//     head2->next->next = new Node(6);

//     Node* mergedHead = mergeRec(head1, head2);

//     printList(mergedHead);

//     return 0;
// }



// time complexity: O(n + m) where n and m are the lengths of the two lists
// space complexity: O(n + m) in the worst case due to recursive stack space,