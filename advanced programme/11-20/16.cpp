// adv-programme-16
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

Node* convert(Node* head) {
    if (!head) return nullptr;

    Node* s = head, *f = head;

    while (f and f->next) {
        s = s->next;
        f = f->next->next;
    }

    Node* dummy = createNode(0);
    Node* cur = dummy;

    while (s) {
        cur->next = head;
        cur = cur->next;
        head = head->next;

        cur->next = s;
        cur = cur->next;
        s = s->next;
    }

    Node* ans = dummy->next;
    delete dummy;

    return ans;
}

int main() {
    int m; cin >> m;
    Node* head = createLList(m);
    
    Node* ans = convert(head);
    printLList(ans);

    return 0;
}