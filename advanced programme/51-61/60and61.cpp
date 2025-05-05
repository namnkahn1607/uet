// adv-programme.60 & 61
#include <iostream>
#include <vector>
using namespace std;

void missin(vector<int> arr) {
    vector<int> ans;

    for (int &i : arr) {
        int x = abs(i);

        if (x == 10) x = 0;
            
        if (arr[x] > 0)
            arr[x] = -arr[x];
        else if (arr[x] == 0)
            arr[x] = -10;
    }

    for (int i = 0; i < 10; ++i) {
        if (arr[i] > 0)
            ans.emplace_back(i);
    }

    if (ans.empty()) {
        cout << "None";

        return;
    }

    for (int &i : ans) cout << i << " ";
}

int main() {
    int N; cin >> N;
    vector<int> arr(N);

    for (int &i : arr) cin >> i;

    missin(arr);

    return 0;
}