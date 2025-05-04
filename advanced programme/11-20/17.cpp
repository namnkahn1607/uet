// adv-programme.17
#include <iostream>
using namespace std;;

class Node {
public:
    int value;
    Node* next;

    Node(const int &_x) : value(_x), next(nullptr) {}

    Node(const int &_x, Node* ptr) : value(_x), next(ptr) {}
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
        cout << head->value << ' ';
        head = head->next;
    }

    cout << '\n';
}

Node* insert(Node* head, int x) {
    Node* newNode = new Node(x);
    
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