// adv-programme.52
#include <iostream>
#include <vector>
using namespace std;

string multiply(string &a, string &b) {
    if (a == "0" or b == "0") return "0";

    int m = a.size(), n = b.size();
    vector<int> vec(m + n, 0);

    for (int j = n - 1; j >= 0; --j) {
        for (int i = m - 1; i >= 0; --i) {
            int x = (a[i] - '0') * (b[j] - '0');
            
            vec[i + j + 1] += x;
            vec[i + j] += vec[i + j + 1] / 10;
            vec[i + j + 1] %= 10;
        }
    }
    
    string ans; int k = 0;

    while (vec[k] == 0)
        ++k;

    while (k < m + n)
        ans += char(vec[k++] + '0');

    return ans;
}

int main() {
    string a, b;
    cin >> a;
    cin.ignore();
    cin >> b;

    string ans = multiply(a, b);

    cout << ans << endl;

    return 0;
}