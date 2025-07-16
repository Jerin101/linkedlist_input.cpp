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

int searchIndex(Node* head, int x) {
    int index = 0;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val == x) return index;
        temp = temp->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;
        while (cin >> val && val != -1) {
            Node* newNode = new Node(val);
            if (head == NULL) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        int x;
        cin >> x;
        cout << searchIndex(head, x) << endl;
    }
    return 0;
}
