// advanced-programme.29
#include <iostream>
#include <set>
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

Node* deleteDuplicates(Node* head) {
    if (!head or !head->next) return head;

    set<int> s;
    Node* prv = nullptr, *cur = head;

    while (cur) {
        if (s.find(cur->value) != s.end()) {
            prv->next = cur->next;
            delete cur;

            cur = prv->next;
        } else {
            s.insert(cur->value);

            prv = cur;
            cur = cur->next;
        }
    }

    return head;
}

int main() {
    int m; cin >> m;
    Node* head = createLList(m);

    head = deleteDuplicates(head);

    printLList(head);

    return 0;
}