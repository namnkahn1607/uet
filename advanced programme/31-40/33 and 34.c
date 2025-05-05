// adv-programme.33 & 34
#include <stdio.h>
#include <stdbool.h>

typedef True true;
typedef False false;

_Bool distinct(int x) {
    int arr[10] = {};

    while (x) {
        if (arr[x % 10] > 0)
            return False;

        ++arr[x % 10];
        x /= 10;
    }

    return True;
}

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    for (int i = l; i <= r; ++i) {
        if (distinct(i)) {
            printf("%d", i);
            
            return 0;
        }
    }
    
    printf("%d", -1);

    return 0;
}