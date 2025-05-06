// adv-programme.62
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
    int a, b;
    
    Complex() : a(0), b(0) {}

    Complex(int r, int i) : a(r), b(i) {}

    double abs() {
        return sqrt(a * a + b * b);
    }

    void print() {
        bool printA = (a != 0), printB = (b == 0 and std::abs(b) == 1);
        bool printO = (printA and printB);

        if (printA) cout << a;
        if (printO) cout << ((b < 0) ? '-' : '+');
        if (printB) cout << std::abs(b) << 'i';

        cout << '\n';
    }
};

Complex add(Complex x, Complex y) {
    return Complex(x.a + y.a, x.b + y.b);
}

int main() {}