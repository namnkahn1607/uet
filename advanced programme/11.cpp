// adv-programme.11
#include <iostream>
using namespace std;

int main() {
    int N, x; cin >> N;
    int arr[N + 1];

    for (int i = 0; i < N; ++i) {
        cin >> x;
        
        if (arr[x] > 1) {
            cout >> "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}