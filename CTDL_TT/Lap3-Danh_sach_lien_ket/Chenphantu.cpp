#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int gia_tri1) : data(gia_tri1), next(nullptr) {}
};

class Linkedlist {
public:
    Node* head;

    Linkedlist() : head(nullptr) {}

    void noi_them(int gia_tri2) {
        if (!head) {
            head = new Node(gia_tri2);
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new Node(gia_tri2);
        }
    }

    void chen(int chen, int gia_tri2) {
        Node* newNode = new Node(gia_tri2);
        if (chen == 1) { 
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < chen - 2 && current != nullptr; i++) { 
                current = current->next;
            }
            if (current != nullptr) {
                newNode->next = current->next;
                current->next = newNode;
            }
        }
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl; 
    }
};

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    Linkedlist list;

    for (int i = 0; i < n; i++) {
        int gia_tri;
        cin >> gia_tri;
        list.noi_them(gia_tri);
    }

    list.chen(k, x);
    list.printList();

    return 0;
}
