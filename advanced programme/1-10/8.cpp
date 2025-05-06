// adv-programme.8
#include <iostream>
#include <vector>
using namespace std;

void Siamese(int N) {
    vector<vector<int>> grid(N, vector<int>(N, 0));
    int finale = N * N;

    int x = 0, y = N / 2;

    for (int i = 1; i <= finale; ++i) {
        grid[x][y] = i;

        int newX = (N + x - 1) % N,
            newY = (N + y + 1) % N;

        if (grid[newX][newY] != 0)
            x = (N + x + 1) % N;
        else {
            x = newX;
            y = newY;
        }
    }

    for (vector<int> &vi : grid) {
        for (int &i : vi)
            cout << i << ' ';

        cout << '\n';
    }
}

int main() {
    int N; cin >> N;

    Siamese(N);

    return 0;
}