// adv-programme.63 & 64
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr(N);
    unordered_map<int, int> mp;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int mxFre = 0;
    vector<int> ans;

    for (const auto &p : mp) {
        if (p.second > mxFre) {
            mxFre = p.second;
            ans = {p.first};
        } else if (p.second == mxFre)
            ans.push_back(p.first);
    }

    cout << *min_element(ans.begin(), ans.end()) << endl;

    return 0;
}
