// adv-programme.17
#include <iostream>
using namespace std;;

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

Node* insert(Node* head, int x) {
    Node* newNode = createNode(x);
    
    if (!head) 
        return newNode;

    if (!head->next) {
        if (head->value >= x) {
            newNode->next = head;
            head = newNode;
        } else
            head->next = newNode;

        return head;
    }

    Node* prv = head;
    Node* nxt = head->next;

    while (nxt) {
        if (prv->value <= x and x <= nxt->value or
            prv->value >= x and x >= nxt->value) {
            break;
        }

        prv = prv->next;
        nxt = nxt->next;
    }

    prv->next = newNode;
    newNode->next = nxt;

    return head;
}

int main() {
    int m, x; cin >> m >> x;
    Node* head = createLList(m);

    Node* ans = insert(head, x);

    printLList(ans);

    return 0;
}