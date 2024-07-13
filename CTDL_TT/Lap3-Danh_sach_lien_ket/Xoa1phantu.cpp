#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int gia_tri1) : data(gia_tri1), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {} 

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

    void xoaPhanTu(int k) {
        if (k == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            for (int i = 1; i < k - 1 && current != nullptr; ++i) {
                current = current->next;
            }
            if (current != nullptr && current->next != nullptr) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
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
    int n, k;
    cin >> n >> k;

    LinkedList list;

    for (int i = 0; i < n; ++i) {
        int gia_tri;
        cin >> gia_tri;
        list.noi_them(gia_tri);
    }
    list.xoaPhanTu(k);
    list.printList();

    return 0;
}
