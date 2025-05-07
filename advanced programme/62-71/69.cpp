// adv-programme.69
#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int h, m, s;

    Time() : h(0), m(0), s(0) {}

    Time(int _h, int _m, int _s) : h(_h), m(_m), s(_s) {}

    int second() {
        return h * 3600 + m * 60 + s;
    }

    void print() {
        printf("%02d%s%02d%s%02d\n", h, " : ", m, " : ", s);
    }
};

Time normalize(int _h, int _m, int _s) {
    _m += _s / 60;
    _s %= 60;

    _h += _m / 60;
    _m %= 60;

    return Time(_h, _m, _s);
}

int main() {
    int inputH, inputM, inputS;
    cin >> inputH >> inputM >> inputS;

    /* ... */

    return 0;
}