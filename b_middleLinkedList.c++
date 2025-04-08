#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void findMiddle(Node* head) {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element is: " << slow->data << endl;
}

void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new Node(val);
}

int main() {
    Node* head = nullptr;

    // Sample test
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);
    append(head, 50);

    findMiddle(head); 

    append(head, 60);
    findMiddle(head);  

    return 0;
}
