// adv-programme.55 & 56
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n), odd;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        if (arr[i] % 2 == 1)
            odd.push_back(arr[i]);
    }

    sort(begin(odd), end(odd));

    int i = 0, j = 0;

    while (i < n and j < odd.size()) {
        if (arr[i] % 2 == 1)
            arr[i] = odd[j++];

        ++i;
    }

    for (int &i : arr) cout << i << ' ';

    return 0;
}