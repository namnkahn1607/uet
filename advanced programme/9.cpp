// adv-programme.9
#include <iostream>
using namespace std;

class cpp {
public:
    static bool palindrome(int &num) {
        int x = 0, m = num;

        while (m) {
            x = x * 10 + m % 10;
            m /= 10;
        }

        return x == num;
    }
};

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b; cin >> a >> b;
        int cnt = 0;

        for (int i = a; i <= b; ++i)
            cnt += (cpp::palindrome(i)) ? 1 : 0;

        cout << cnt << '\n';
    }

    return 0;
}