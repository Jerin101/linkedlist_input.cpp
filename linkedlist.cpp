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

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int x;
    while (cin >> x && x != -1) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    if (head == NULL) {
        cout << "0" << endl;
        return 0;
    }

    int maxVal = head->val;
    int minVal = head->val;
    Node* temp = head;

    while (temp != NULL) {
        if (temp->val > maxVal) maxVal = temp->val;
        if (temp->val < minVal) minVal = temp->val;
        temp = temp->next;
    }

    cout << (maxVal - minVal) << endl;

    return 0;
}
