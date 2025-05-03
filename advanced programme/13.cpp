// adv.programme-13
#include <iostream>
using namespace std;

int main() {
    int N, x; cin >> N;
    int odd_num = 0, even = 0,
        mx = INT_MIN, mn = INT_MAX;

    for (int i = 0; i < N; ++i) {
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);

        if (x % 2 == 0)
            even += x;
        else
            ++odd_num;
    }

    cout << mx << '\n' << mn << '\n'
         << even << '\n' << odd_num << '\n';

    return 0;
}