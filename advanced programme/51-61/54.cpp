// adv-programme.54
#include <iostream>
#include <vector>
using namespace std;

bool checkPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n), mark(MAX_CONTAIN, 0);
    
    for (int &i : arr) {
        cin >> i;

        if (checkPrime(i))
            cout << i << ' ';
    }

    return 0;
}