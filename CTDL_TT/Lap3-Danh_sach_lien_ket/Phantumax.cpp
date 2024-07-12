#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        Node* newNode = new Node;
        newNode->data = num;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    if (head == nullptr) {
        return 0;
    }

    int max = head->data;
    Node* current = head;
    while (current != nullptr) {
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }
    cout << max << endl;

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}