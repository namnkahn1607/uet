// adv-programme.46
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;

ll powLL(ll a, int b) {
    ll res = 1;

    while (b > 0) {
        if (b % 2 == 1)
            res *= a;
        
        a *= a;
        b /= 2;
    }

    return res;
}

vector<vector<int>> thisProblemSucks(int m) {
    vector<vector<int>> ans;

    for (int a = 1; a <= m; ++a) {
        ll a5 = powLL(a, 5);

        for (int b = a; b <= m; ++b) {
            ll a5b5 = a5 + powLL(b, 5);

            for (int c = b; c <= m; ++c) {
                ll a5b5c5 = a5b5 + powLL(c, 5);

                for (int d = c; d <= m; ++d) {
                    ll sum = a5b5c5 + powLL(d, 5);

                    for (int e = d + 1; e <= m; ++e) {
                        if (powLL(e, 5) == sum)
                            ans.push_back(vector<int>{a, b, c, d, e});
                    }
                }
            }
        }
    }

    return ans;
}

int main() {
    int m; cin >> m;

    vector<vector<int>> ans = thisProblemSucks(m);

    for (vector<int> vs : ans)
        cout << vs[0] << "^5 + "
             << vs[1] << "^5 + "
             << vs[2] << "^5 + "
             << vs[3] << "^5 = "
             << vs[4] << "^5";

    return 0;
}