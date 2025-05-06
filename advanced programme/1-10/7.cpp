// adv-programme.7
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr(N);

    for (int &i : arr)
        cin >> i;

    sort(begin(arr), end(arr));

    vector<int> pre(N);
    pre[0] = 0;

    for (int i = 1; i < N; ++i)
        pre[i] = pre[i - 1] + arr[i - 1];

    cout << accumulate(begin(pre), end(pre), 0) << '\n';

    return 0;
}