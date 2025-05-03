// adv-programme.10
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vec) {
    for (int &a : vec)
        cout << a << ' ';
    
    cout << '\n';
}

int main() {
    int m; cin >> m;
    vector<vector<int>> pascal(m + 1);
    
    pascal[0].push_back(1);

    for (int i = 1; i < m + 1; ++i) {
        pascal[i].push_back(1);

        for (int j = 1; j < pascal[i - 1].size(); ++j)
            pascal[i].push_back(pascal[i - 1][j] + pascal[i - 1][j - 1]);

        pascal[i].push_back(1);
    }

    for (vector<int> &vs : pascal)
        printVector(vs);

    return 0;
}