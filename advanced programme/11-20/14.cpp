// adv-programme.14
#include <iostream>
using namespace std;

class cpp {
public:
    static bool solve(string &str) {
        int i = 0, j = str.size() - 1;

        while (i < j) {
            if (str[i] != str[j])
                return false;

            ++i; --j;
        }

        return true;
    }
};

int main() {
    string str;
    cin >> str;

    bool ans = cpp::solve(str);

    cout << boolalpha << ans;

    return 0;
}