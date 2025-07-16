#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) {
        val = v;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAtIndex(Node*& head, int index) {
    if (head == NULL) return;
    
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 0;

    while (temp != NULL && count < index - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main() {
    int Q;
    cin >> Q;
    Node* head = NULL;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insertHead(head, V);
        } else if (X == 1) {
            insertTail(head,
