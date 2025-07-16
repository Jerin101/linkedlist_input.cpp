#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};

bool areSame(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL) return true;
    return false;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        if (head1 == NULL) head1 = tail1 = newNode;
        else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        if (head2 == NULL) head2 = tail2 = newNode;
        else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    if (areSame(head1, head2)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
