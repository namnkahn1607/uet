// adv-programme.19
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;
    
Node* createLList(int m) {
    int x; scanf("%d", &x);
    Node* head = (Node*)malloc(sizeof(Node));
    head->val = x;
    Node* tail = head;

    for (int i = 1; i < m; ++i) {
        scanf("%d", &x);
        tail->next = (Node*)malloc(sizeof(Node));
        tail = tail->next;
        tail->val = x;
    }

    tail->next = NULL;

    return head;
}

void print(Node* head) {
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
}

int main() {
    int m; scanf("%d", &m);
    Node* head = createLList(m);

    print(head);

    return 0;
}