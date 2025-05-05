// adv-programme.51
#include <iostream>
using namespace std;

void incrementBin(string &num) {
    int i = num.size() - 1, rem = 1;

    while (i >= 0 or rem != 0) {
        int val = (i >= 0) ? (num[i] - '0') : 0;

        int sum = val + rem;
        rem = sum / 2;
        sum %= 2;

        num[i] = char(sum + '0');
        --i;
    }
}

void printBin(int N) {
    string cur = string(N, '0');
    string end = string(N, '1');

    while (cur != end) {
        cout << cur << '\n';
        incrementBin(cur);
    }

    cout << end << '\n';
}

int main() {
    int N; cin >> N;

    printBin(N);

    return 0;
}