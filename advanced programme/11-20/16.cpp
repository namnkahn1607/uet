// adv-programme-16
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

Node* convert(Node* head) {
    Node* s = head, *f = head;

    while (f and f->next) {
        s = s->next;
        f = f->next->next;
    }

    Node* dummy = new Node(0);
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