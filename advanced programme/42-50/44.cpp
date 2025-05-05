// adv-programme.44
#include <iostream>
using namespace std;

string decimal_to_binary(long num) {
    if (num == 0) return "0";

    string ans = "";

    while (num) {
        ans = char(num % 2 + '0') + ans;
        num /= 2;
    }

    return ans;
}

int main() {
    long m; cin >> m;
    
    string ans = decimal_to_binary(m);

    cout << ans << endl;

    return 0;
}