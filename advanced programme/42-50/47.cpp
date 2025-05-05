// adv-programme.47
#include <iostream>
using namespace std;

void printNFibos(int N) {
    int x = 0, y = 1;

    cout << x << ' ' << y << ' ';

    for (int i = 1; i < N; ++i) {
        int tmp = y;
        y += x;
        x = tmp;

        cout << y << ' ';
    }
}

int main() {
    int N; cin >> N;
    
    printNFibos(N);

    return 0;
}