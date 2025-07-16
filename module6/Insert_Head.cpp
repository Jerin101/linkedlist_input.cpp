#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;

    }
    
};
void insert_at_head(Node* &head,int value)
{
Node* newnode = new Node(value);
newnode->next = head;
head = newnode;
}
void print_linked_list(Node* head){
    Node* temp = head;
    while(head != NULL){
      cout << temp->val << endl;
      temp = temp -> next;
    }
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next= b;
    insert_at_head(head,100);
    insert_at_head(head,200);
    print_linked_list(head); 
    
    return 0;
}