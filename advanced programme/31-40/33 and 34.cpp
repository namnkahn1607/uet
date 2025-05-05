// adv-programme.33 & 34
#include <iostream>
using namespace std;

int main() {
    int l, r; cin >> l >> r;

    auto distinct = [](int x) {
        int arr[10] = {};

        while (x) {
            if (arr[x % 10] > 0)
                return false;

            ++arr[x % 10];
            x /= 10;
        }

        return true;
    };

    for (int i = l; i <= r; ++i) {
        if (distinct(i)) {
            cout << i;
            
            return 0;
        }
    }

    cout << -1;

    return 0;
}