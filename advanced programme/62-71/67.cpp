// adv-programme.67
#include <iostream>
using namespace std;

int main() {
    int m; cin >> m;

    for (int i = 0; i < m; ++i) {
        if (i == 0)
            cout << "*\n";
        else if (i == m - 1)
            cout << string(m, '*') << '\n';
        else
            cout << '*' << string(i - 1, ' ') << "*\n";
    }

    return 0;
}