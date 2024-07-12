#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *next;
};

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        Node *newNode = new Node;
        newNode->val = num;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }


    Node *cur= head;
    while (cur != NULL) {
        cout << cur->val << " ";
        cur = cur->next;
    }

  
    return 0;
}