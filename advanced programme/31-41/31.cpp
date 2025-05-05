// adv-programme.31
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

void rotate(Node* &head, int k) {
    if (!head or k == 0) return;

    Node* prv = nullptr, *cur = head;

    for (int i = 0; i < k; ++i) {
        prv = cur;
        cur = cur->next;
    }

    Node* tail = head;
    
    while (tail->next)
        tail = tail->next;

    prv->next = nullptr;
    tail->next = head;
    head = cur;
}

int main() {
    int m, k; cin >> m >> k;
    Node* head = createLList(m);

    rotate(head, k);

    printLList(head);

    return 0;
}