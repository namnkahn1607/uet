// adv-programme-18
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

Node* moveFirst2Last(Node* head) {
    if (!head) return nullptr;

    if (!head->next) return head;

    Node* tail = head;

    while (tail->next)
        tail = tail->next;

    tail->next = head;
    Node* newHead = head->next;
    head->next = nullptr;

    return newHead;
}

int main() {
    int m; cin >> m;
    Node* head = createLList(m);

    Node* ans = moveFirst2Last(head);

    printLList(ans);

    return 0;
}