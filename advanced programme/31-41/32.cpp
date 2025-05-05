// adv-programme.32
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calculate(float m) {
    if (m == 1.0) return 1.0;

    return sqrt(m + calculate(m - 1));
}

int main() {
    float m; cin >> m;

    cout << fixed << setprecision(2) << calculate(m);

    return 0;
}