#include <iostream>
using namespace std;

// Define the structure of a Node
class Node {
public:
    int val;       // Stores the value of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a node
    Node(int val) {
        this->val = val;
        this->next = NULL;  // Initially next is NULL
    }
};

// Function to insert a new node at the end of the list
void insert_at_tail(Node* &head, int value) {
   
    Node* newnode = new Node(value); // Create a new node with the given value
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;

    // Traverse the list until the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // temp is now pointing to the last node
    temp->next = newnode; // Link the new node at the end
}

// Function to print all nodes in the linked list
void print_linked_list(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << endl;  // Print the value of the current node
        temp = temp->next;          // Move to the next node
    }
}

int main() {
    Node* head = NULL;
    // Creating 3 nodes manually: 10 -> 20 -> 30
    //Node* head = new Node(10);
    //Node* a = new Node(20);
    //Node* b = new Node(30);

    //head->next = a; // Connect head to a
    //a->next = b;    // Connect a to b

    // Insert 40 at the end of the list
    insert_at_tail(head, 40);

    // Final list: 10 -> 20 -> 30 -> 40
    print_linked_list(head);

    return 0;
}

