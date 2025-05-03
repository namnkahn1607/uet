// adv-programme.12
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

int main() {
    double val;
    vector<double> arr;

    while (cin >> val) {
        arr.emplace_back(val);
        
        if (cin.peek() == '\n')
            break;
    }

    double mean = accumulate(begin(arr), end(arr), 0.0) / arr.size();

    double variance = 0.0;

    for (double &d : arr)
        variance += pow(d - mean, 2);

    variance /= arr.size();

    cout << fixed << setprecision(2) << mean << " " << variance << '\n';

    return 0;
}