// adv-programme.30
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* createNode(const int &x) {
    Node* newNode = new Node;
    newNode->value = x;
    newNode->next = nullptr;

    return newNode;
}

Node* createNode(const int &x, Node* ptr) {
    Node* newNode = new Node;
    newNode->value = x;
    newNode->next = ptr;

    return newNode;
}

Node* createLList(const int &m) {
    if (m == 0) return nullptr;

    int x; cin >> x;
    Node* head = createNode(x);
    Node* tail = head;

    for (int i = 1; i < m; ++i) {
        cin >> x;
        tail->next = createNode(x);
        tail = tail->next;
    }

    return head;
}

void printLList(Node* head) {
    while (head) {
        cout << head->value << ' ';
        head = head->next;
    }

    cout << '\n';
}

Node* deleteNode(Node* head, int pos) {
    if (pos == 0) {
        Node* newHead = head->next;
        delete head;
        
        return newHead;
    }

    Node* prv = nullptr, *cur = head;

    for (int i = 0; i < pos; ++i) {
        prv = cur;
        cur = cur->next;
    }

    prv->next = cur->next;
    delete cur;

    return head;
}

int main() {
    int m, pos; cin >> m >> pos;
    Node* head = createLList(m);

    head = deleteNode(head, pos);

    printLList(head);

    return 0;
}