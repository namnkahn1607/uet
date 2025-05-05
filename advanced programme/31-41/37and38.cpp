// adv-programme.37 & 38
#include <iostream>
#include <vector>
using namespace std;

bool checkInclusion(vector<int> &a, vector<int> &b) {
    int i = 0, n = a.size(),
        j = 0, m = b.size();

    while (j < m) {
        if (a[i] == b[j])
            ++i;
        else {
            j -= i;
            i = 0;
        }

        if (i == n)
            return true;

        ++j;
    }
    
    return false;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);

    for (int &i : a) cin >> i;

    cin >> m;
    vector<int> b(m);
    
    for (int &i : b) cin >> i;

    cout << (checkInclusion(a, b) ? "YES\n" : "NO\n");

    return 0;
}