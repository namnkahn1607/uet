// adv-programme.70 & 71
#include <iostream>
using namespace std;

int GCD(int a, int b) {
    return (b == 0) ? a : GCD(b, a % b);
}

void simplify(int &num, int &den) {
    int div = GCD(num, den);

    if (div != 0) {
        num /= div;
        den /= div;
    }

    if (den < 0 and num < 0) 
        num = abs(num);
    else if (den < 0 and num > 0) 
        num = -abs(num);

    den = abs(den);
}

int main() {
    int num, den; cin >> num >> den;

    simplify(num, den);

    if (den == 1)
        cout << num;
    else
        cout << num << '/' << den;

    return 0;
}