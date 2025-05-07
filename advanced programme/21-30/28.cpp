// adv-programme.28
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

Node* deleteSingle(Node* head) {
    Node* prv = head;
    Node* cur = head->next;
    Node* nxt = cur->next;

    if (prv->value != cur->value) {
        Node* newHead = head->next;
        delete head;

        return newHead;
    }

    while (cur->next) {
        if (cur->value != prv->value and cur->value != nxt->value) {
            prv->next = nxt;
            delete cur;

            return head;
        }

        prv = cur;
        cur = nxt;
        nxt = nxt->next;
    }

    if (prv->value != cur->value) {
        prv->next = nullptr;
        delete cur;
    }

    return head;
}

int main() {
    int m; cin >> m;
    Node* head = createLList(m);

    head = deleteSingle(head);

    printLList(head);

    return 0;
}