// adv-programme.23
#include <iostream>
using namespace std;

struct Node {
    const int value;
    Node* next;

    Node(int x) : value(x), next(nullptr) {}
};

class LinkedList {
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    LinkedList(int arr[], int n) {
        head = new Node(arr[0]);
        Node* tail = head;

        for (int i = 1; i < n; ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    void insertHead(int x) {
        Node* newHead = new Node(x);
        newHead->next = head;
        head = newHead;
    }

    void print() {
        Node* cur = head;

        while (cur) {
            cout << cur->value << ' ';
            cur = cur->next;
        }
    }
}

int main() {}