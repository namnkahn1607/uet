// adv-programme-20
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
        cout << sec->val << ' ';
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