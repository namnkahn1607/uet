// adv-programme.24
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev;
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

Node* sort(Node* &head) {
    if (!head or !head->next)
        return head;
    
    Node* sorted = head;
    sorted->prev = nullptr;

    Node* current = head->next;
    
    sorted->next = nullptr;
    
    while (current) {
        Node* next = current->next;
        
        Node* searchNode = sorted;
        
        while (searchNode && searchNode->value < current->value) 
            searchNode = searchNode->next;
        
        if (searchNode == sorted) {
            current->next = sorted;
            current->prev = nullptr;
            sorted->prev = current;
            sorted = current;
        } else if (!searchNode) {
            Node* lastNode = sorted;
            
            while (lastNode->next)
                lastNode = lastNode->next;
            
            lastNode->next = current;
            current->prev = lastNode;
            current->next = nullptr;
        } else {
            Node* prevNode = searchNode->prev;
            
            prevNode->next = current;
            current->prev = prevNode;
            
            current->next = searchNode;
            searchNode->prev = current;
        }
        
        current = next;
    }
    
    return sorted;
}

int main() {
    int m; cin >> m;
    Node* head = createLList(m);

    head = sort(head);

    printLList(head);

    return 0;
}