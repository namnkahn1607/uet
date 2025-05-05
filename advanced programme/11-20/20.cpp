// adv-programme-20
#include <iostream>
using namespace std;

class Node {
public:
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

void printLast(Node* head, int k) {
    if (!head) return nullptr;

    Node* fst = head;

    for (int i = 0; i < k; ++i)
        fst = fst->next;

    Node* sec = head;

    while (fst) {
        fst = fst->next;
        sec = sec->next;
    }

    while (sec) {
        cout << sec->value << ' ';
        sec = sec->next;
    }

    cout << '\n';
}

int main() {
    int m, k; cin >> m >> k;
    Node* head = createLList(m);

    printLast(head, k);

    return 0;
}