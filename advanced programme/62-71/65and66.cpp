// adv-programme.65 & 66
#include <iostream>
using namespace std;

int main() {
    int m; cin >> m;

    for (int i = 0; i < m; ++i) {
        if (i == 0)
            cout << string(m - 1, ' ') << "*\n";
        else if (i == m - 1)
            cout << string(2 * m - 1, '*') << '\n';
        else
            cout << string(m - (i + 1), ' ') << '*'
                 << string(2 * (i - 1) + 1, ' ') << "*\n";
    }

    return 0;
}