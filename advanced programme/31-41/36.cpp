// adv-programme.36
#include <iostream>
using namespace std;

string accumulate(string &a, string &b) {
    int i = a.size() - 1, j = b.size() - 1, k = max(a.size(), b.size());
    int rem = 0;

    string ans = string(k + 1, '0');

    while (i >= 0 or j >= 0 or rem != 0) {
        int val1 = (i >= 0) ? (a[i] - '0') : 0,
            val2 = (j >= 0) ? (b[j] - '0') : 0;

        int sum = val1 + val2 + rem;
        rem = sum / 10;
        sum %= 10;

        ans[k--] = char(sum + '0');
        --i; --j;
    }

    if (ans[0] == '0') return ans.substr(1);

    return ans;
}

int main() {
    string a, b;
    cin >> a;
    cin.ignore();
    cin >> b;

    string ans = accumulate(a, b);

    cout << ans << '\n';

    return 0;
}