// adv-programme-18
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(const int &_x) : val(_x), next(nullptr) {}

    Node(const int &_x, Node* ptr) : val(_x), next(ptr) {}
};

Node* createLList(const int &m) {
    int x; cin >> x;
    Node* head = new Node(x);
    Node* tail = head;

    for (int i = 1; i < m; ++i) {
        cin >> x;
        tail->next = new Node(x);
        tail = tail->next;
    }

    return head;
}

void printLList(Node* head) {
    while (head) {
        cout << head->val << ' ';
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