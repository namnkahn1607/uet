// adv-programme.39
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool validTriangle(float a, float b, float c) {
    return (a + b > c and b + c > a and c + a > b);
} 

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (!validTriangle(a, b, c)) {
        cout << "invalid\n";

        return 0;
    }

    float p = (a + b + c) / 2;

    cout << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c)) << '\n';

    return 0;
}