// adv-programme.50
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x, y; cin >> x >> y;

    cout << fixed << setprecision(2) << sqrt(x * x + y * y) << '\n';

    return 0;
}