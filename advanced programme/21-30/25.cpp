// adv-programme.25
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

int compareList(Node* head1, Node* head2) {
    if (!head1 and !head2) return 1; 

    while (head1 and head2) {
        if (head1->value != head2->value)
            return 0;
        
        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 or head2)
        return 0;
    
    return 1;
}

int main() {
    int m, n; cin >> m >> n;
    Node* head1 = createLList(m);
    Node* head2 = createLList(n);
    
    int ans = compareList(head1, head2);
    
    cout << ans << endl;

    return 0;
}