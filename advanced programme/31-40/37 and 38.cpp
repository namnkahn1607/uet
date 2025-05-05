// adv-programme.37 & 38
#include <iostream>
#include <vector>
using namespace std;

bool checkInclusion(vector<int> &a, vector<int> &b) {}

int main() {
    int n, m;
    
    cin >> n;
    vector<int> a(n);

    for (int &i : a) cin >> i;

    cin >> m;
    vector<int> b(m);

    for (int &i : b) cin >> i;

    cout << (checkInclusion(a, b) ? "YES" : "NO") << endl;
}