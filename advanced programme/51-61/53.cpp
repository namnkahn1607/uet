// adv-programme.53
#include <iostream>
#include <map>
using namespace std;

void primeFactor(int num) {
    map<int, int> mp;

    while (num % 2 == 0) {
        ++mp[2];
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            ++mp[i];
            num /= i;
        }
    }

    if (num > 2) mp[num]++;

    for (auto p : mp)
        cout << p.first << ' ' << p.second << '\n';
}

int main() {
    int n; cin >> n;

    primeFactor(n);

    return 0;
}