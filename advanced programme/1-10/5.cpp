// adv-programme.5
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, x; cin >> m;
    vector<int> table(10);

    for (int i = 0; i < m; ++i) {
        cin >> x;
        table[x]++;
    }

    for (int i = 0; i < 10; ++i)
        cout << i << " : " << table[i] << '\n';

    return 0;
}